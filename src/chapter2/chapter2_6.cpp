// Created by Dongju Lee on 2025. 12. 28..

#include <iostream>

// 두 정수 a, b가 같은지 비교하는 함수
bool isEqual(int a, int b) {

    // (a == b)는 비교 결과가 true/false로 나옴
    bool result = (a == b);

    // 비교 결과 반환
    return result;
}

using namespace std;

int main() {

    // bool 변수 선언 방법들
    bool b1 = true;     // true 저장
    bool b2 = false;    // false 저장
    bool b3{ true };    // 중괄호 초기화 방식 (균일 초기화)
    b3 = false;         // b3 값을 false로 변경

    // bool을 출력하면 기본적으로 1(true), 0(false)로 출력됨
    // cout << std::boolalpha;  // 이걸 켜면 true/false 문자열로 출력됨 (지금은 주석 처리)
    cout << b3 << endl;        // 0 출력
    cout << b1 << endl;        // 1 출력

    // ! 는 논리 NOT 연산자 (true -> false, false -> true)
    cout << !b1 << endl;       // 0 출력
    cout << !b2 << endl;       // 1 출력

    // || 는 논리 OR (둘 중 하나라도 true면 true)
    cout << (true || true) << endl;    // 1
    cout << (true || false) << endl;   // 1
    cout << (false || true) << endl;   // 1
    cout << (false || false) << endl;  // 0

    // if 문 예시
    // if 조건이 true면 if 블록 실행, 아니면 else 블록 실행
    if (true) {
        cout << "this is true " << endl;
        cout << "true second line " << endl;
    }
    else {
        cout << "this is false" << endl;
    }

    // boolalpha를 켜면 bool 출력이 1/0이 아니라 true/false로 출력됨
    cout << std::boolalpha;

    // 함수 호출 결과 출력 (이제 true/false로 보임)
    cout << isEqual(1, 1) << endl;  // true
    cout << isEqual(0, 3) << endl;  // false

    // C++에서 if(정수)는 0이면 false, 0이 아니면 true로 판단
    if (0) { // 0은 false로 취급됨
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl; // 여기 실행됨
    }

    return 0;
}
