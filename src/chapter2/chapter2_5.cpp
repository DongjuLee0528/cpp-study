//
// Created by Dongju Lee on 2025. 12. 27..
//

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {

    float f(3.141592f);
    double d(3.141592);
    long double ld(3.141592);

    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<long double>::max() << endl;

    cout << 3.14<< endl;
    cout << 31.4e-1<< endl;
    cout << 31.4e-2<< endl;
    cout << 31.4e1<< endl;
    cout << 31.4e2<< endl;

    cout << std::setprecision(16);
    cout << 1.0 / 3.0<< endl;

    float f1 = 123456789.0f;
    cout << std::setprecision(9);
    cout << f1 << endl;

    double d1(1.0);
    double d2 =(0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1) ;
    cout << setprecision(17);
    cout << d1 << endl;
    cout << d2 << endl;
    cout << ""<< endl;
    cout << std::setprecision(17);
    cout << d1 << endl;

    return 0;
}