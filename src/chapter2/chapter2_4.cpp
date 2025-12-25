//
// Created by Dongju Lee on 2025. 12. 25..
//

#include <iostream>

using namespace std;

int main(void) {

    int i = 123;
    float f = 123.456f;

    void *my_void;

    my_void = (void*)&i;
    my_void = (void*)&f;

    return 0;
}