// Created by Dongju Lee on 2026. 1. 1..

#include <iostream>

using namespace std;

int main() {

    // 0으로 시작하는 정수 리터럴은 '8진수(octal)'로 해석됨
    // 012(8진수) = 1*8 + 2 = 10(10진수)
    int x = 012;  // "8진수로 쓰고 싶을 때만"이 아니라, 0을 붙이면 자동으로 8진수라서 실수 위험 큼

    // 0x로 시작하면 16진수(hex)
    // 0xF = 15(10진수)
    int h = 0xF;

    // 0b로 시작하면 2진수(binary) (C++14 이상)
    // 0b1010 = 10(10진수)
    int b = 0b1010;

    // 출력은 모두 '10진수'로 출력됨 (cout 기본)
    cout << x << endl; // 10
    cout << h << endl; // 15
    cout << b << endl; // 10

    return 0;
}
