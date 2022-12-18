"""
This script generates C code for a repetitive task.

The template is the following :
================================================
switch (tag_name){
    #ifdef {etiquette}
    case {etiquette}:
        {type} LinkyTIC::{etiquette} = parse(_buffer_value, {longueur}, {type})
        break;
    #endif
}
================================================
"""

from csv import reader
import os

dir_path = os.path.dirname(os.path.realpath(__file__))
os.chdir(dir_path)


def assemble_cpp_file():
    """
    create the switch case cpp file
    """

    file_beginning = (
            "constexpr unsigned int str2int(const char* str, int h = 0)\n"
            "   {\n"
            "   return !str[h] ? 5381 : (str2int(str, h+1) * 33) ^ str[h];\n"
            "}\n\n"
            "auto parse(const char* tag_name){\n"
            "   switch (str2int(tag_name)){"
        )
    file_ending = (
            "   }"
            "}"
        )

    with open('results.cpp', 'w', encoding='utf8') as cpp_file:
        cpp_file.write(file_beginning)
        for case in generate():
            cpp_file.write(case)
        cpp_file.write(file_ending)


def generate():
    """
    generate the templated case statements
    """
    with open('./Groupes.csv', 'r', encoding='utf8') as csv_file:
        csv_iterator = reader(csv_file)
        next(csv_iterator)

        for row in csv_iterator:
            designation, etiquette, longueur, unite, etiquette_type, horodate, mode_standard = row

            yield apply_template(etiquette, longueur, etiquette_type)


def apply_template(etiquette: str, longueur: str, etiquette_type: str):
    """
    apply template for a row of data
    """
    safe_etiquette_name = etiquette.replace('-','_')
    
    return f"""
    #ifdef {safe_etiquette_name}
    case str2int("{etiquette}"):
        {etiquette_type} LinkyTIC::{etiquette} = parse(_buffer_value, {longueur}, {etiquette_type})
        break;
    #endif
    """


assemble_cpp_file()
