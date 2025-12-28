//
// Created by Dongju Lee on 2025. 12. 28..
//

#include <iostream>

bool isEqual (int a, int b) {

    bool result = (a == b);

    return result;
}

using namespace std;

int main() {

    bool b1 =true;
    bool b2 = false;
    bool b3 {true};
    b3 = false;

    //cout << std::boolalpha;
    cout << b3 << endl;
    cout << b1 << endl;
    cout << !b1 << endl;
    cout << !b2 << endl;
    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    if (true) {
        cout << "this is true " << endl;
        cout << "true second line " << endl;

    }
    else {
        cout <<"this is false" << endl;
    }

    cout << std :: boolalpha;
    cout << isEqual (1, 1) << endl;
    cout << isEqual (0, 3) << endl;

    if (0) {//if는 0이 아니면 true로 생각함
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }


    return 0;
}