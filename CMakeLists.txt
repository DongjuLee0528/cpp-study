# CMake 최소 버전 지정 (※ 4.1은 매우 높아서 대부분 환경에서 빌드 실패 가능)
cmake_minimum_required(VERSION 4.1)

# 프로젝트 이름 설정 (언어를 명시하려면: project(CppLecture LANGUAGES CXX))
project(CppLecture)

# C++ 표준 버전 설정
set(CMAKE_CXX_STANDARD 20)

# 빌드에 포함할 소스/헤더 파일 목록
set(SRC_FILES
        src/main.cpp

        # chapter1
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

        # review/chapter1
        src/review/chapter1/sum_two_numbers.cpp
        src/review/chapter1/sum_two_numbers.h
        src/review/chapter1/sum_two_numbers_func.cpp
        src/review/chapter1/sum_two_numbers_func.h

        # chapter1 계속
        src/chapter1/chapter1_6.cpp
        src/chapter1/chapter1_6.h
        src/chapter1/chapter1_7.cpp
        src/chapter1/chapter1_7.h
        src/chapter1/chapter1_8.cpp
        src/chapter1/chapter1_8.h
        src/chapter1/chapter1_9.cpp
        src/chapter1/chapter1_9.h
        src/chapter1/chapter1_10.cpp
        src/chapter1/chapter1_10.h
        src/chapter1/chapter1_11.cpp
        src/chapter1/chapter1_11.h

        # add 모듈
        src/chapter1/add.cpp
        src/chapter1/add.h
)

# 실행 파일(target) 생성: 이름은 CppLecture, 소스는 SRC_FILES 사용
add_executable(CppLecture ${SRC_FILES})
