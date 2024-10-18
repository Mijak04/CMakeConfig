cmake_minimum_required(VERSION 3.28)

project(test_lib)
add_library(test_lib)

target_include_directories(test_lib
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/include/
)

target_sources(test_lib
        PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/src/test_lib.c
)

