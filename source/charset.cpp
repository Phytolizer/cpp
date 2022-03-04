#include "cpp/charset.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include <unicode/stringpiece.h>
#include <unicode/unistr.h>

std::string slurp_file(const std::string& file_name) {
    std::ifstream file_stream{file_name};
    std::ostringstream contents;
    contents << file_stream.rdbuf();
    return contents.str();
}

icu::UnicodeString cpp::open_file(const std::string& file_name) {
    std::string raw_contents = slurp_file(file_name);
    return icu::UnicodeString::fromUTF8(raw_contents);
}
