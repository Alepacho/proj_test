cmake_minimum_required(VERSION 3.20)

set(PROJECT_NAME "program")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    "src/main.cpp"
)

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} LINK_PUBLIC "library")
