//
// Created by Dongju Lee on 2025. 12. 25..
//

#include <iostream> // 표준 입출력 사용을 위한 헤더

using namespace std;

int main(void) {

    int i = 123;          // 정수형 변수 선언 및 초기화
    float f = 123.456f;   // 실수형 변수 선언 및 초기화 (float 리터럴)

    void *my_void;        // 어떤 타입의 주소든 담을 수 있는 void 포인터 선언

    my_void = (void*)&i;  // int 변수 i의 주소를 void*로 형변환하여 저장
    my_void = (void*)&f;  // float 변수 f의 주소를 void*로 형변환하여 저장 (기존 값 덮어씀)

    return 0;             // 프로그램 정상 종료
}
