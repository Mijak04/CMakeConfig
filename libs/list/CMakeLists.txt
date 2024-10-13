cmake_minimum_required(VERSION 3.29)

project(list)
add_library(list)

target_include_directories(list
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/include/
)

target_sources(list
        PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/src/list.c
)

