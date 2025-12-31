// Created by Dongju Lee on 2025. 12. 25..

#include <iostream>
#include <cstdint>   // 고정 크기 정수 타입(int8_t, int16_t 등)을 사용하기 위해 필요

using namespace std;

int main() {

    // 정확히 16비트(2바이트) 정수 타입
    // 플랫폼이 달라도 항상 크기가 보장됨
    std::int16_t i(5);

    // 정확히 8비트(1바이트) 정수 타입
    // 내부적으로는 'char'처럼 취급됨
    std::int8_t myint = 65;

    // ⚠️ 주의
    // int8_t는 대부분 signed char 이기 때문에
    // cout으로 출력하면 숫자가 아니라 '문자'로 출력됨
    // 65 → ASCII 코드 'A'
    cout << "myint = " << myint << endl;   // A 출력됨

    // int_fast8_t
    // "최소 8비트 이상"이면서 가장 빠른 정수 타입
    // 실제 크기는 컴파일러/플랫폼에 따라 달라질 수 있음
    std::int_fast8_t fi(5);

    // int_least64_t
    // "최소 64비트 이상"을 보장하는 정수 타입
    // 필요하면 64비트보다 더 클 수도 있음
    std::int_least64_t fl(5);

    return 0;
}
