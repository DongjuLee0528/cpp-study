//
// Created by Dongju Lee on 2025. 12. 25..
//

#include <iostream>

using namespace std;
int main() {

    std::int16_t i(5);
    std::int8_t myint = 65;

    cout << "myint = " << myint << endl;

    std::int_fast8_t fi(5);
    std::int_least64_t fl(5);

    return 0;
}