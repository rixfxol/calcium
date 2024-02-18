# Project Declarations
cmake_minimum_required(VERSION 3.12...3.28)
project(calcium VERSION 0.0.1
                LANGUAGES CXX)

# Project Properties
enable_testing()

# Project Targets
file(GLOB DEFAULT_SOURCE_HEADERS_DIRECTORIES include)
file(GLOB DEFAULT_SOURCE_HEADERS
          include/*.hpp
          include/calcium/*.hpp
          include/calcium/core/*.hpp
          include/calcium/global/*.hpp)

# # Calcium Default
file(GLOB DEFAULT_SOURCE
            src/components/*.cpp
            src/*.cpp
            src/modules/*.cpp
            src/modules/evaluator/*.cpp
            src/modules/translator/*.cpp)
add_executable(calcium ${DEFAULT_SOURCE} ${DEFAULT_SOURCE_HEADERS})
target_include_directories(calcium PUBLIC ${DEFAULT_SOURCE_HEADERS_DIRECTORIES})
target_compile_features(calcium PRIVATE cxx_std_20)

#! I'm compiling with another debugger instead of MSVC, so:
target_compile_options(calcium PRIVATE -Wall -Wextra -Wpedantic)

# Project Tests

# # CLI Tests
# add_test(default_debug_test calcium MyArg1 MyArg2)