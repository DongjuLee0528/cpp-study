// Created by Dongju Lee on 2025. 12. 30..

#include <iostream>     // 표준 입출력 (cout, cin)
#include <limits>       // numeric_limits<T> 사용 (타입의 최댓값/최솟값)
using namespace std;

int main() {

    // char는 작은 정수(문자 코드)를 저장하는 타입
    // 65는 ASCII 코드에서 'A'를 의미
    char c1(65);     // 정수 65를 char로 저장 -> 'A'
    char c2('A');    // 문자 'A'를 직접 저장

    cout << c1 << endl;  // A 출력
    cout << c2 << endl;  // A 출력

    // 65를 char로 캐스팅해서 문자로 출력
    cout << static_cast<char>(65) << endl; // A 출력


    // 문자 1개를 입력받음 (공백/개행 전까지 1글자)
    cin >> c1;

    // 입력한 문자를 그대로 출력하고, 그 문자의 정수 코드값(ASCII 등)도 함께 출력
    // 예: 입력이 A면 "A 65" 같은 형태
    cout << c1 << " " << static_cast<int>(c1) << endl;

    // 다시 65를 넣으면 'A'가 됨
    c1 = 65;

    // char 타입의 바이트 크기 출력 (대부분 1)
    cout << sizeof(char) << endl;

    // char의 최대값/최소값 출력
    // 주의: char는 구현에 따라 signed/unsigned가 달라질 수 있음
    // 그래서 출력값이 환경마다 달라질 수 있음
    cout << (int)std::numeric_limits<char>::max() << endl;
    cout << (int)std::numeric_limits<char>::lowest() << endl;

    // 이스케이프 시퀀스 예시
    // \n : 줄바꿈
    cout << "this first line \nsecond line";

    // \t : 탭
    // \? : 물음표를 이스케이프(요즘은 거의 의미 없음)
    // \a : 벨(경고음/비프) - 환경에 따라 소리 안 날 수도 있음
    cout << "this first line \tsecond line\?\a";

    // endl은 줄바꿈 + 버퍼 flush(출력 강제 반영)까지 함
    cout << "this first line" << endl;
    cout << "second line" << endl;

    return 0;
}
