//
// Created by Dongju Lee on 2025. 12. 22..
//

#include <iostream>

int main() {
    using namespace std;

    bool bvalue = false;

    cout << (bvalue ? 1 : 0) << endl;

    char chValue = 'A';
    cout << (int)chValue << endl;

    float fvalue = 3.141592f;
    double dvalue = 3.141592;
    cout << fvalue << endl;
    cout << dvalue << endl;

    auto aValue = 3.141592;
    cout << aValue << endl;
    cout << sizeof (aValue) << endl;

    int a(123);
    int b{123};
    cout << a << endl;
    cout << b << endl;

    return 0;
}