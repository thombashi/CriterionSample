cmake_minimum_required(VERSION 2.8)
 
set(PROJECT_ROOT "..")
set(SOURCE_ROOT "${PROJECT_ROOT}/source")

include_directories(
    ${PROJECT_ROOT}/include
)

add_executable(test_theory
    ${SOURCE_ROOT}/dangerous_add.c
    test_theory.c
)

target_link_libraries(test_theory
    criterion
)
