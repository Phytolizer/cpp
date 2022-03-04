cmake_minimum_required(VERSION 3.16...3.23)

project(
    "cpp"
    LANGUAGES CXX
    VERSION "0.1.0"
    DESCRIPTION "A C preprocessor of some kind?"
    HOMEPAGE_URL "https://github.com/Phytolizer/cpp"
)

find_package(ICU REQUIRED COMPONENTS data io uc)
find_package(fmt REQUIRED)
find_package(spdlog REQUIRED)

set(SRC main.cpp charset.cpp)
list(TRANSFORM SRC PREPEND "source/")
add_executable(cpp ${SRC})
message("Linking ${ICU_LIBRARIES}")
target_link_libraries(cpp PRIVATE ${ICU_LIBRARIES} fmt::fmt spdlog::spdlog)
target_compile_features(cpp PRIVATE cxx_std_20)
target_include_directories(cpp PRIVATE include)
