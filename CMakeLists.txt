# Project Declarations
cmake_minimum_required(VERSION 3.12...3.28)

project(calcium VERSION 0.0.1
                LANGUAGES CXX)

# Project Targets

file(GLOB DEFAULT_SOURCE_HEADERS
          include/*.hpp
          include/var/*.hpp)

# # Calcium CLI
file(GLOB DEFAULT_SOURCE_CLI
            src/cli/*.cpp
            src/cli/modules/*.cpp)
add_executable(calcium_cli ${DEFAULT_SOURCE_CLI})
target_include_directories(calcium_cli ${DEFAULT_SOURCE_HEADERS})
target_compile_features(calcium_cli PRIVATE cxx_std_20)

if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
    target_compile_options(calcium_cli PRIVATE /W4)
elseif (CMAKE_SYSTEM_NAME STREQUAL "Linux")
    target_compile_options(calcium_cli PRIVATE -Wall -Wextra -Wpedantic)
endif()

# # Calcium GUI
