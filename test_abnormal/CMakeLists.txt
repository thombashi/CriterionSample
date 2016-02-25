cmake_minimum_required(VERSION 2.8)
 
set(PROJECT_ROOT "..")
set(SOURCE_ROOT "${PROJECT_ROOT}/source")

include_directories(
    ${PROJECT_ROOT}/include
)

add_executable(test_abnormal
    ${SOURCE_ROOT}/dangerous_add.c
    test_exit.c
    test_signal.c
)

target_link_libraries(test_abnormal
    criterion
)
