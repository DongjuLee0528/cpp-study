//
// Created by Dongju Lee on 2025. 12. 24..
//

#include <iostream>
#include <limits>
using namespace std;

int main() {

    short s =1; // 2바이트 16비트
    int i = 1;
    long l = 1;
    long long ll = 1;

    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << ""<< endl;

    cout << std::pow (2,sizeof(short)* 8 -1)- 1<< endl;
    cout << ""<< endl;
    cout << std ::numeric_limits<short>::max() << endl;
    cout << std ::numeric_limits<short>::min() << endl;
    cout << std ::numeric_limits<short>::lowest() << endl;

    cout << ""<< endl;
    s = 32767;
    s = s + 1; //32768
    cout << "32768? "<< s << endl;//오버플로우

    s = std::numeric_limits<short>::min();
    s = s - 1;
    cout << "-32768? "<< s << endl;//오버플로우






    return 0;
}