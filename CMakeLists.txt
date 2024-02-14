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
          include/calcium/var/*.hpp
          include/calcium/methods/*.hpp)

# # Calcium CLI
file(GLOB DEFAULT_SOURCE_CLI
            src/cli/*.cpp
            src/cli/modules/*.cpp)
add_executable(calcium_cli ${DEFAULT_SOURCE_CLI} ${DEFAULT_SOURCE_HEADERS})
target_include_directories(calcium_cli PUBLIC ${DEFAULT_SOURCE_HEADERS_DIRECTORIES})
target_compile_features(calcium_cli PRIVATE cxx_std_20)

#! I'm compiling with another debugger instead of MSVC, so:
target_compile_options(calcium_cli PRIVATE -Wall -Wextra -Wpedantic)


# # Calcium GUI

# --------- Fill this in later
#
#
#
#


# Project Tests

# # CLI Tests
# add_test(default_debug_test calcium_cli MyArg1 MyArg2)