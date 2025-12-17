//
// Created by Dongju Lee on 2025. 12. 17..
//

#include <iostream>

using namespace std;

void doSomething(int x) {
    x = 123;
    cout << x << endl; //#2
}

int main() {

    int x(0);

    cout << x << "  "<<&x<<endl; //#1
    doSomething(x);
    cout << x << "  "<<&x<<endl; //#3

    return 0;
}