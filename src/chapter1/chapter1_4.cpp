//
// Created by Dongju Lee on 2025. 12. 16..
//

#include <iostream>
int main() {
    using namespace std; // 사용하면 std:: 제외해도 cout 사용가능
    int x =1024;
    double pi = 3.141592;

    std::cout << "I love this lecture!\n"; // << std::endl;
    std::cout << "x is " <<x <<"pi is "<<pi << std::endl;

    std::cout << "abc " << "\t" << "def" << std::endl; //\t는 탭을 말한다
    std::cout << "ab " << "\t" << "cdef" << std::endl; //빈 공간을 두고 줄맞춤을 원할 때 \t 사용 가능

    cout << "\a"; // \n 오다오 출력



    return 0;
}