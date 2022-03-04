#pragma once

#include <string>
#include <unicode/unistr.h>

namespace cpp {

icu::UnicodeString open_file(const std::string& file_name);

}
