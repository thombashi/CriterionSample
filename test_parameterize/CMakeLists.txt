cmake_minimum_required(VERSION 2.8)
 
set(PROJECT_ROOT "..")
set(SOURCE_ROOT "${PROJECT_ROOT}/source")

include_directories(
    ${PROJECT_ROOT}/include
)

add_executable(test_parameterize
    ${SOURCE_ROOT}/add.c
    test_parameterize.c
)

target_link_libraries(test_parameterize
    criterion
)
