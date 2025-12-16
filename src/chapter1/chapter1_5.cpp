//
// Created by Dongju Lee on 2025. 12. 16..
//

#include <iostream>
using namespace std;


int MultiplyTwoNumbers(int num_a, int num_b)
{
    int sum = num_a * num_b;

    return sum;
}

int main() {

    cout << MultiplyTwoNumbers (1, 2) << endl;
    cout << MultiplyTwoNumbers (4, 3) << endl;
    cout << MultiplyTwoNumbers (13, 18) << endl;

    return 0;
}