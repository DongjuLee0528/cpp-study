// Created by Dongju Lee on 2025. 12. 28..

#include <iostream>
using namespace std;

int main() {

    int a;  // 사용자로부터 입력받을 정수 변수

    // 안내 문구 출력
    cout << "숫자를 입력해주세요: ";

    // 정수 입력 받기
    cin >> a;

    // a를 2로 나눈 나머지가 0이면 짝수, 아니면 홀수
    if (a % 2 == 0) {
        cout << "당신이 입력한 숫자는 짝수입니다";
    } else {
        cout << "당신이 입력한 숫자는 홀수입니다";
    }

    return 0;
}
