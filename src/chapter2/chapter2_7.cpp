//
// Created by Dongju Lee on 2025. 12. 30..
//

#include <iostream>
#include <limits>
using namespace std;

int main() {

    char c1(65);
    char c2('A');

    cout << c1 << endl;
    cout << c2 << endl;

    cout << static_cast<char>(65) << endl;


    cin >> c1;
    cout <<c1 <<"" << static_cast<int>(c1) << endl;

    c1 = 65;

    cout <<sizeof(char) << endl;
    cout <<(int)std::numeric_limits<char>::max() << endl;
    cout <<(int)std::numeric_limits<char>::lowest() << endl;

    cout <<"this first line \nsecond line";
    cout <<"this first line \tsecond line\?\a";
    cout <<"this first line"<<endl;
    cout <<"second line"<<endl;

    return 0;
}