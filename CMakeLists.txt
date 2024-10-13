cmake_minimum_required(VERSION 3.28)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out)

file(GLOB sources_list LIST_DIRECTORIES true libs/*)
foreach(dir ${sources_list})
    IF(IS_DIRECTORY ${dir})
        add_subdirectory(${dir})
    ELSE()
        CONTINUE()
    ENDIF()
endforeach()

project(test C)
set(CMAKE_C_STANDARD 11)
add_executable(test main.c)

target_link_libraries(test PRIVATE list)
