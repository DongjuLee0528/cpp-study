cmake_minimum_required(VERSION 4.1)
project(CppLecture)

set(CMAKE_CXX_STANDARD 20)

set(SRC_FILES
        src/main.cpp
        src/chapter1/chapter1_1.cpp
        src/chapter1/chapter1_1.h
        src/chapter1/chapter1_3.cpp
        src/chapter1/chapter1_3.h
        src/chapter1/chapter1_4.cpp
        src/chapter1/chapter1_4.h
        src/chapter1/chapter1_4cin.cpp
        src/chapter1/chapter1_4cin.h
        src/chapter1/chapter1_5.cpp
        src/chapter1/chapter1_5.h
        src/chapter1/chapter1_5void.cpp
        src/chapter1/chapter1_5void.h
        src/chapter1/chapter1_5_2.cpp
        src/chapter1/chapter1_5_2.h
        src/review/chapter1/sum_two_numbers.cpp
        src/review/chapter1/sum_two_numbers.h
        src/review/chapter1/sum_two_numbers_func.cpp
        src/review/chapter1/sum_two_numbers_func.h
)

add_executable(CppLecture ${SRC_FILES})