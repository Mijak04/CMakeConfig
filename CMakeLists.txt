cmake_minimum_required(VERSION 3.29)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/bin)

add_subdirectory(libs/list)

project(test C)
set(CMAKE_C_STANDARD 11)
add_executable(test main.c)

target_link_libraries(test PRIVATE list)
