"""
This script generates C code for a repetitive task.

The template is the following :
================================================
public:
    #ifdef {etiquette}
        {etiquette_type} Get{etiquette}();
    #endif

private:
    #ifdef {etiquette}
        {etiquette_type} _{etiquette};
    #endif
================================================
"""

from csv import reader
import os
import re

dir_path = os.path.dirname(os.path.realpath(__file__))
os.chdir(dir_path)


def assemble_var_declaration_file():
    """
    create the var declaration header file
    """

    with open('VarDeclaration.h', 'w', encoding='utf8') as h_file:
        h_file.write("\tpublic:")

        for getter in etiquette_iterator(getter=True):
            h_file.write(getter)

        h_file.write("\n\n\n")
        h_file.write("\tprivate:")

        for getter in etiquette_iterator(declaration=True):
            h_file.write(getter)


def etiquette_iterator(getter: bool = False, declaration: bool = False):
    """
    generate the templated case statements
    """
    with open('./Groupes.csv', 'r', encoding='utf8') as csv_file:
        csv_iterator = reader(csv_file)
        next(csv_iterator)

        for row in csv_iterator:
            designation, etiquette, longueur, unite, etiquette_type, horodate, mode_standard = row
            etiquette = etiquette.strip()

            if getter:
                yield generate_getter(etiquette, longueur, etiquette_type)
            elif declaration:
                yield generate_declaration(etiquette, longueur, etiquette_type)


def generate_getter(etiquette: str, longueur: str, etiquette_type: str):
    """
    apply getter template to a row of data
    """
    alphanumeric_etiquette = alphanumeric(etiquette)
    content = f"""{type_correspondance(etiquette_type, True)} Get{alphanumeric_etiquette}(){{return _{alphanumeric_etiquette};}};"""
    return encapsulate_in_ifdef(alphanumeric_etiquette, content)


def generate_declaration(etiquette: str, longueur: str, etiquette_type: str):
    """
    apply variable declaration template to a row of data
    """
    alphanumeric_etiquette = alphanumeric(etiquette)

    if etiquette_type == 'str':
        content = f"{type_correspondance(etiquette_type)} _{alphanumeric_etiquette}[{longueur}];"

    if etiquette_type.startswith("uint"):
        content = f"{type_correspondance(etiquette_type)} _{alphanumeric_etiquette};"

    return encapsulate_in_ifdef(alphanumeric_etiquette, content)


def encapsulate_in_ifdef(condition: str, content: str):
    """
    encapsulate a content inside a ifdef; endif condition
    """
    return f"""
        #ifdef {condition}
            {content}
        #endif
    """


def type_correspondance(var_type: str, getter: bool = False):
    """
    return the corresponding esp8266/arduino SDK type
    """
    corresp = {'str': 'char', 'uint8': 'uint8_t', 'uint16': 'uint16_t', 'uint32': 'uint32_t'}

    if getter:
        corresp['str'] = 'char*'

    if var_type not in corresp:
        raise TypeError(f"unknown type {var_type}")

    return corresp[var_type]


def alphanumeric(string: str):
    """
    only keep alphanumeric caracters of a string
    """
    pattern = re.compile(r'[\W]+')
    return pattern.sub('', string.replace('-', '_'))


assemble_var_declaration_file()
