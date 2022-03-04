#include "cpp/charset.hpp"
#include <cstdio>
#include <span>
#include <spdlog/spdlog.h>
#include <unicode/unistr.h>

int main(int argc, char** argv) {
    std::span args{argv, static_cast<std::size_t>(argc)};
    spdlog::set_pattern("[%l] %v");
    if (args.size() < 2) {
        spdlog::error("not enough arguments provided");
        return 1;
    }
    icu::UnicodeString source = cpp::open_file(args[1]);
}
