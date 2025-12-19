//
// Created by Dongju Lee on 2025. 12. 19..
//

#include <iostream>

namespace MySpasce1 {
    namespace InnerSpasce {
        int my_function() {
            return 0;
        }

    }
    int doSomething(int a, int b) {
        return a + b;
    }
}

int doSomething(int a, int b) {
    return a * b;
}

using namespace std;

int main() {

    cout << doSomething(3, 4) << endl;
    cout << MySpasce1::doSomething(3, 4) << endl;

    MySpasce1::InnerSpasce::my_function();
    return 0;
}