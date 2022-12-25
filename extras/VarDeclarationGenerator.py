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

        for content in etiquette_iterator(max_length_has_date=True):
            h_file.write(content)

        for content in etiquette_iterator(getter_and_declaration=True):
            h_file.write(content)


def etiquette_iterator(getter_and_declaration: bool = False, max_length_has_date: bool = False):
    """
    generate the templated case statements
    """
    with open('./Groupes.csv', 'r', encoding='utf8') as csv_file:
        csv_iterator = reader(csv_file)
        next(csv_iterator)

        for row in csv_iterator:
            designation, etiquette, longueur, unite, etiquette_type, horodate, mode_standard = row
            etiquette = etiquette.strip()

            if getter_and_declaration:
                yield generate_getter_and_declaration(etiquette, longueur, etiquette_type)
            elif max_length_has_date:
                has_date = horodate == "x"
                yield generate_max_length_has_date(etiquette, longueur, has_date)


def generate_getter_and_declaration(etiquette: str, longueur: str, etiquette_type: str):
    """
    apply getter template to a row of data
    """
    alphanumeric_etiquette = alphanumeric(etiquette)

    content = (f"public: {type_correspondance(etiquette_type, True)}"
               f" Get{alphanumeric_etiquette}()"
               f"{{return _{alphanumeric_etiquette};}};\n")

    char_length = ""
    if etiquette_type == 'str':
        char_length = f"[{longueur}]"

    content += ("\t\t"
                f"private: {type_correspondance(etiquette_type)}"
                f" _{alphanumeric_etiquette}{char_length};")

    return encapsulate_in_ifdef(alphanumeric_etiquette, content, 1)


def generate_max_length_has_date(etiquette: str, longueur: str, has_horodate: bool):
    """
    write C++ code for the maximum length preprocessing
    """
    alphanumeric_etiquette = alphanumeric(etiquette)

    content = (f"#if MaximumLength > {longueur}\n"
               "\t\t#undef MaximumLength\n"
               f"\t\t#define MaximumLength {longueur}\n"
               "\t#endif")

    if has_horodate:
        content += "\n\t#define HAS_HORODATE true"

    return encapsulate_in_ifdef(alphanumeric_etiquette, content)


def encapsulate_in_ifdef(condition: str, content: str, number_of_tab: int = 0):
    """
    encapsulate a content inside a ifdef; endif condition
    """
    tab_car = "\t"
    return (f"{tab_car*number_of_tab}#ifdef {condition}\n"
            f"{tab_car*(number_of_tab+1)}{content}\n"
            f"{tab_car*number_of_tab}#endif\n")


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
