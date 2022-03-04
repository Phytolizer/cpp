#include "cpp/charset.hpp"
#include <cstdio>
#include <fmt/format.h>
#include <span>
#include <unicode/unistr.h>

int main(int argc, char** argv) {
    std::span args{argv, static_cast<std::size_t>(argc)};
    if (args.size() < 2) {
        fmt::print(stderr, "not enough arguments provided\n");
        return 1;
    }
    icu::UnicodeString source = cpp::open_file(args[1]);
}
