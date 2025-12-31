// Created by Dongju Lee on 2025. 12. 22..

#include <iostream>

int main() {
    using namespace std;

    // bool 타입: true/false만 저장
    bool bvalue = false;

    // 삼항 연산자(조건 ? 참 : 거짓)
    // bvalue가 false라서 0이 출력됨
    cout << (bvalue ? 1 : 0) << endl;

    // char 타입: 문자이지만 내부적으로는 정수(문자 코드)
    char chValue = 'A';

    // (int)로 캐스팅해서 문자 코드값(ASCII 등)을 숫자로 출력
    // 'A'는 보통 65
    cout << (int)chValue << endl;

    // float: 보통 4바이트(단정도)
    // 뒤에 f를 붙이면 리터럴이 float로 취급됨
    float fvalue = 3.141592f;

    // double: 보통 8바이트(배정도)
    double dvalue = 3.141592;

    // 출력 시 기본적으로 double 쪽이 정밀도가 더 높음
    // (다만 cout 기본 출력 자릿수 제한 때문에 둘이 비슷해 보일 수 있음)
    cout << fvalue << endl;
    cout << dvalue << endl;

    // auto: 초기값으로 타입 추론
    // 3.141592는 기본이 double 리터럴이므로 aValue는 double이 됨
    auto aValue = 3.141592;
    cout << aValue << endl;

    // aValue의 바이트 크기 출력 (대부분 8)
    cout << sizeof(aValue) << endl;

    // 초기화 방법 비교
    int a(123);   // 생성자 스타일 초기화
    int b{123};   // 중괄호 초기화(균일 초기화) - 더 안전한 편(좁혀지는 변환 방지)
    cout << a << endl;
    cout << b << endl;

    return 0;
}
