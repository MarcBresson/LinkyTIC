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
            {'etiquette': {'type': str, 'longueur': 12}}
        """
        self.data_to_include = data_to_include
        self.mode = mode


class Group:
    """représente un groupe"""
    LF = 0x0A
    CR = 0x0D
    HT = 0x09
    SP = 0x20

    def __init__(self,
                 etiquette: str,
                 donnee: str | int | float,
                 longueur: int,
                 mode: Literal["historique", "standard"],
                 has_horodate: bool = False
                 ):
        self.etiquette = etiquette
        self.donnee = donnee
        self.longueur = longueur
        self.has_horodate = has_horodate

        self.mode = mode
        if mode == 'historique':
            self.data_separator = self.SP
        elif mode == 'standard':
            self.data_separator = self.HT
        else:
            raise ValueError(f"Le mode {mode} n'existe pas.")

    def number_of_separator(self) -> int:
        """compute the number of data separator in the group"""
        if self.has_horodate:
            return 3
        return 2

    def compute_checksum(self) -> str:
        """calcule la checksum selon la méthode de la page 14 de la note
        externe d'enedis"""
        s = 0

        for g in self.group_component():
            for b in g.encode('ascii'):
                s += b

        if self.mode == 'historique':
            separator_value = self.SP
        else:
            separator_value = self.HT * self.number_of_separator()

        s += separator_value

        return s

    def get_horodate(self) -> str:
        """génère l'horodate selon la formule page 17 de la note externe
        d'enedis: Le format utilisé pour les horodates est SAAMMJJhhmmss,
        c'est-à-dire Saison, Année, Mois, Jour, heure, minute, seconde."""
        return "H081225223518"

    def group_component(self, include_checksum: bool = False):
        """return all the components of the group"""
        checksum = []  # empty checksum by default
        if include_checksum:
            checksum = [self.compute_checksum()]

        if self.has_horodate:
            return [self.etiquette,
                    self.get_horodate(),
                    self.donnee,
                    self.compute_checksum()] + checksum

        return [self.etiquette,
                self.donnee,
                self.compute_checksum()] + checksum

    def __str__(self) -> str:
        group = self.group_component(include_checksum=True)

        lf = chr(self.LF)
        cr = chr(self.CR)
        sep = chr(self.data_separator)

        return f"{lf}{sep.join(group)}{cr}"

    def hex(self) -> bytes:
        """return the bytes value of the group"""
        ascii_value = str(self)

        return bytearray(ascii_value.encode('ascii'))
