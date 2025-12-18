//
// Created by Dongju Lee on 2025. 12. 18..
//

#include <iostream>
using namespace std;

int add(int a, int b);
int multiply(int a, int b);
int subtract(int a, int b);

int main() {

    cout<<add(1, 2) <<endl;
    cout<<multiply(3, 4) <<endl;
    cout<<subtract(3, 4) <<endl;
    return 0;
}

int add(int a, int b) {
    return a+b;
}

int multiply(int a, int b) {
    return a*b;
}

int subtract(int a, int b) {
    return a-b;
}

