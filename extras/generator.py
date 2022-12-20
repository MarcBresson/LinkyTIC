"""
This script generates C code for a repetitive task.

The template is the following :
================================================
switch (tag_name){
    #ifdef {etiquette}
        case {etiquette}:
            {etiquette_type} LinkyTIC::{etiquette} = parseValue(buffer_value, {longueur}, {etiquette_type})
            break;
        #endif
}
================================================
"""

from csv import reader
import os
import re

dir_path = os.path.dirname(os.path.realpath(__file__))
os.chdir(dir_path)


def assemble_cpp_file():
    """
    create the switch case cpp file
    """

    file_beginning = '#include "LinkyTIC.cpp"\n\n'

    parse_function_beginning = (
        "void LinkyTIC::parse(const char tag_name[], const char buffer_value[]){\n"
        "    switch (hash(tag_name)){"
    )
    file_ending = (
            "   }"
            "}"
        )

    with open('EtiquetteSwitchCase.cpp', 'w', encoding='utf8') as cpp_file:
        cpp_file.write(file_beginning)
        cpp_file.write(hash_c_function())
        cpp_file.write("\n\n")
        cpp_file.write(substring_c_function())
        cpp_file.write("\n\n")
        cpp_file.write(parse_function_beginning)
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

            yield apply_template(etiquette.strip(), longueur, etiquette_type)


def apply_template(etiquette: str, longueur: str, etiquette_type: str):
    """
    apply template for a row of data
    """

    return f"""
        #ifdef {alphanumeric(etiquette)}
        case hash("{etiquette}"):{{
            {convert_to_type_c_function(etiquette, etiquette_type, longueur)}
            break;
        }}
        #endif
    """


def convert_to_type_c_function(etiquette: str, etiquette_type: str, longueur: str = ""):
    """
    return the C function that allows to convert a string to the right
    data type
    """
    if etiquette_type == 'str':
        return f"""char _{etiquette}[{longueur}];
            substring(_{etiquette}, buffer_value, {longueur});"""

    if etiquette_type.startswith("uint"):
        tmp_str = f"""char _tmp[{longueur}];
            substring(_tmp, buffer_value, {longueur});\n\t\t\t"""

        if etiquette_type == 'uint8':
            return tmp_str + f"uint8_t _{etiquette} = atoi(_tmp);"
        if etiquette_type == 'uint16':
            return tmp_str + f"uint16_t _{etiquette} = atoi(_tmp);"
        if etiquette_type == 'uint32':
            return tmp_str + f"uint32_t _{etiquette} = atol(_tmp);"

    raise TypeError("unknown type")


def alphanumeric(string: str):
    """
    only keep alphanumeric caracters of a string
    """
    pattern = re.compile(r'[\W_]+')
    return pattern.sub('', string)


def hash_c_function():
    """
    return the string for the C hash function
    from https://stackoverflow.com/a/37121071/12550791
    """
    return """
constexpr unsigned int hash(const char* str, int h = 0){
    return !str[h] ? 5381 : (hash(str, h+1) * 33) ^ str[h];
}"""


def another_hash_c_function():
    """
    return the string for the C hash function
    from https://stackoverflow.com/a/37121071/12550791
    """
    return """
const unsigned long hash(const char *str) {
    unsigned long hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;
    return hash;
}"""


def parsevalue_c_function():
    """
    return the string for the C parseValue function
    """
    return """
std::string truncate(std::string str, size_t width){
    if (str.length() > width)
        return str.substr(0, width);
    return str;
}

auto LinkyTIC::parseValue(char buffer_value[], int length){
    char str[] = truncate(buffer_value, length)
}"""


def substring_c_function():
    """
    return the string for the C substring function
    """
    return """
void substring(char* str, const char* _buffer_value, const int length){
    for(int i = 0; i < length; i++){
        str[i] = _buffer_value[i];
    }
}"""


assemble_cpp_file()
