//
// Created by Dongju Lee on 2026. 1. 1..
//

#include <iostream>
//#define PRICE_PER_ITEM 30

void printNumber (const int my_number) {
    int n = my_number;
    cout << n << endl;
}

using namespace std;
int main() {
    printNumber(123);
    const double gravity {9.8}; // 상수 선언

    int number;
    cin >> number;

    const int specil_number(number);

    const int price_per_item = 30;


    return 0;
}