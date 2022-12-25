"""
Génère une trame complète. Une trame est construite de la façon suivante :

Trame :
<STX> (0x02) |
Groupe |
Groupe |
...... |
Groupe |
<ETX> (0x03)

Groupe :
<LF> (0x0A) | <HT> (0x09) |
Horodate (optionel) | <HT> (0x09) (optionel) |
Donnée |
<HT> (0x09) |
checksum |
<HT> (0x09) | <CR> (0x0D)
"""

from typing import Literal
from csv import reader
import random
import string


class Trame:
    """représente et construit une trame"""
    STX = 0x02
    ETX = 0x03

    def __init__(self,
                 data_to_include: dict,
                 mode: Literal["historique", "standard"]
                 ):
        """Set what data will be generated

        Parameters
        ----------
        - **data_to_include** (_dict_) :
            [etiquette]
        - **mode** (_Literal["historique", "standard"]_) :
            mode des trames à simuler
        """
        self.create_groups(data_to_include)
        self.mode = mode

    def create_groups(self, data_to_include: dict):
        """create the list of groups for a frame"""
        self.groups = [""] * len(data_to_include)

        for i, etiquette in enumerate(data_to_include):
            self.groups[i] = Group(data_to_include[etiquette]["type"],
                                   etiquette,
                                   data_to_include[etiquette]["longueur"])

    def extract_etiquette_info(self) -> dict:
        data_info = {}
        with open('./Groupes.csv', 'r', encoding='utf8') as csv_file:
            csv_iterator = reader(csv_file)
            next(csv_iterator)  # skipping header

            for row in csv_iterator:
                designation, etiquette, longueur, unite, etiquette_type, horodate, mode_standard = row
                data_info[etiquette] = {}
                data_info[etiquette]['longueur'] = longueur
                data_info[etiquette]['etiquette_type'] = etiquette_type
                data_info[etiquette]['horodate'] = horodate

        return data_info

class Group:
    """représente un groupe"""
    LF = 0x0A
    CR = 0x0D
    HT = 0x09
    SP = 0x20

    def __init__(self,
                 value_type: str,
                 etiquette: str,
                 longueur: int,
                 has_horodate: bool = False
                 ):
        self.value_type = value_type
        self.etiquette = etiquette
        self.longueur = longueur
        self.has_horodate = has_horodate

    def number_of_separator(self) -> int:
        """compute the number of data separator in the group"""
        if self.has_horodate:
            return 3
        return 2

    def compute_checksum(self, mode: Literal["historique", "standard"]) -> str:
        """calcule la checksum selon la méthode de la page 14 de la note
        externe d'enedis"""
        s = 0

        for g in self.group_component():
            for b in g.encode('ascii'):
                s += b

        data_separator = self.get_data_separator(mode)
        if mode == 'historique':
            separator_value = data_separator
        else:
            separator_value = data_separator * self.number_of_separator()

        s += separator_value

        return s

    def get_horodate(self) -> str:
        """génère l'horodate selon la formule page 17 de la note externe
        d'enedis: Le format utilisé pour les horodates est SAAMMJJhhmmss,
        c'est-à-dire Saison, Année, Mois, Jour, heure, minute, seconde."""
        return "H081225223518"

    def group_component(self,
                        include_checksum: bool = False,
                        mode: Literal["historique", "standard"] = "standard"
                        ) -> list:
        """return all the components of the group"""
        checksum = []  # empty checksum by default
        if include_checksum:
            checksum = [self.compute_checksum(mode=mode)]

        if self.has_horodate:
            return [self.etiquette,
                    self.get_horodate(),
                    self.random_value()] + checksum

        return [self.etiquette,
                self.random_value()] + checksum

    def to_string(self, mode: Literal["historique", "standard"]) -> str:
        """string representation of Group"""
        data_separator = self.get_data_separator(mode)

        group = self.group_component(include_checksum=True, mode=mode)

        lf = chr(self.LF)
        cr = chr(self.CR)
        sep = chr(data_separator)

        return f"{lf}{sep.join(group)}{cr}"

    def get_data_separator(self,
                           mode: Literal["historique", "standard"]
                           ) -> bytes:
        """find the correct data separator in the regard of the mode"""
        if mode == 'historique':
            return self.SP
        if mode == 'standard':
            return self.HT

        raise ValueError(f"Le mode {mode} n'existe pas.")

    def hex(self, mode: Literal["historique", "standard"]) -> bytes:
        """return the bytes value of the group"""
        ascii_value = self.to_string(mode)
        return bytearray(ascii_value.encode('ascii'))

    def random_value(self) -> int | str:
        """return value corresponding to the type"""
        if self.value_type == 'str':
            return self.random_string(self.longueur)
        return self.random_int(self.longueur)

    def random_int(self, lenght) -> int:
        """generate a random number with a given lenght"""
        return random.randint(10**(lenght-1), 10**lenght)

    def random_string(self, lenght) -> str:
        """generate a random string with a given lenght"""
        return ''.join(random.choice(string.ascii_lowercase)
                       for _ in range(lenght))
