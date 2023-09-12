cmake_minimum_required(VERSION 3.20)

set(PROJECT_NAME "library")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_CXX_STANDARD 17)

project(${PROJECT_NAME} C CXX)
add_library(${PROJECT_NAME} SHARED ${SOURCES})
target_sources(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/src/library.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/src/library.hpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/src/
)
