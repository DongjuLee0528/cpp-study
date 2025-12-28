//
// Created by Dongju Lee on 2025. 12. 28..
//

#include <iostream>
using namespace std;

int main () {

    int a;

    cout << "숫자를 입력해주세요: ";
    cin >> a;
    if (a % 2 == 0) {
        cout <<"당신이 입력한 숫자는 짝수입니다";
    }
    else{
        cout <<"당신이 입력한 숫자는 홀수입니다";
    }

    return 0;
}