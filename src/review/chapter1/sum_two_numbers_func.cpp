//
// Created by Dongju Lee on 2025. 12. 16..
//

#include <iostream>

using namespace std;

int addTwoNumbers(int a, int b) {
    return a+b;
}

int main() {

    int a , b;

    cout << "숫자 2개를 입력하세요:";
    cin >>a >>b;
    cout <<"당신이 입력한 값은: "<<a<<"+"<<b<<"입니다.\n";
    int sum = addTwoNumbers(a,b);
    cout <<a<<"와"<<b<<"의 합은: "<<sum<<"입니다.";

    return 0;
}