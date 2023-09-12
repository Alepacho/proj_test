cmake_minimum_required(VERSION 3.20)

set(PROJECT_NAME "program_library_test")
set(CMAKE_CXX_STANDARD 17)

project(${PROJECT_NAME} C CXX)
add_subdirectory("./libr/")
add_subdirectory("./prog/")

