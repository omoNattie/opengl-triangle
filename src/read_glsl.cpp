#include "read_glsl.h"

std::string read_glsl_file(const char *file) {
    std::string content;
    std::ifstream file_str(file, std::ios::in);

    if (!file_str.is_open()) {
        std::cout << "Something went really wrong..";
    return "";
    }

    std::string line;
    while(!file_str.eof()) {
        std::getline(file_str, line);
        content.append(line + "\n");
    }

    file_str.close();
return content;
}