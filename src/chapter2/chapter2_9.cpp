// Created by Dongju Lee on 2026. 1. 1..

#include <iostream>
// #define PRICE_PER_ITEM 30  // 매크로 상수(비추천): 타입/스코프 없음, 디버깅 불편

using namespace std;

// const int는 "값을 바꾸지 않겠다"는 약속
// 그런데 여기서는 굳이 복사본을 만들 필요가 없습니다.
// (int는 작아서 큰 문제는 아니지만, 습관 자체가 별로입니다.)
void printNumber(const int my_number) {
    // my_number는 이미 const라서 수정 불가
    // 아래처럼 굳이 n으로 복사하는 건 의미 없음
    int n = my_number;
    cout << n << endl;
}

int main() {
    // 함수 호출: 123 출력
    printNumber(123);

    // 상수 선언(균일 초기화)
    const double gravity{9.8}; // 중력 가속도 상수

    int number;
    cin >> number; // 사용자 입력

    // 입력값을 상수로 고정해서 저장
    // 변수명 specil_number는 오타처럼 보임(special_number가 맞음)
    const int specil_number(number);

    // 매크로 대신 const 상수 추천
    const int price_per_item = 30;

    return 0;
}
// Created by Dongju Lee on 2026. 1. 1..

#include <iostream>
// #define PRICE_PER_ITEM 30  // 매크로 상수(비추천): 타입/스코프 없음, 디버깅 불편

using namespace std;

// const int는 "값을 바꾸지 않겠다"는 약속
// 그런데 여기서는 굳이 복사본을 만들 필요가 없습니다.
// (int는 작아서 큰 문제는 아니지만, 습관 자체가 별로입니다.)
void printNumber(const int my_number) {
    // my_number는 이미 const라서 수정 불가
    // 아래처럼 굳이 n으로 복사하는 건 의미 없음
    int n = my_number;
    cout << n << endl;
}

int main() {
    // 함수 호출: 123 출력
    printNumber(123);

    // 상수 선언(균일 초기화)
    const double gravity{9.8}; // 중력 가속도 상수

    int number;
    cin >> number; // 사용자 입력

    // 입력값을 상수로 고정해서 저장
    // 변수명 specil_number는 오타처럼 보임(special_number가 맞음)
    const int specil_number(number);

    // 매크로 대신 const 상수 추천
    const int price_per_item = 30;

    return 0;
}
