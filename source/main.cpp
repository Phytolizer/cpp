#include "cpp/charset.hpp"
#include <span>
#include <unicode/unistr.h>

int main(int argc, char** argv) {
    std::span args{argv, static_cast<std::size_t>(argc)};
    icu::UnicodeString source = cpp::open_file(args[1]);
}
