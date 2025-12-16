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
)

add_executable(CppLecture ${SRC_FILES})
