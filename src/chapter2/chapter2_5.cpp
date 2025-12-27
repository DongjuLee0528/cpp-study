//
// Created by Dongju Lee on 2025. 12. 27..
//

#include <iostream>     // 입출력 스트림 사용을 위한 헤더
#include <iomanip>      // setprecision 등 출력 형식 제어를 위한 헤더
#include <limits>       // numeric_limits 사용을 위한 헤더

using namespace std;

int main() {

    // 부동소수점 타입별 변수 선언 및 초기화
    float f(3.141592f);         // float 타입 (단정도)
    double d(3.141592);         // double 타입 (배정도)
    long double ld(3.141592);   // long double 타입 (확장 정밀도)

    // 각 부동소수점 타입이 표현할 수 있는 최대값 출력
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<long double>::max() << endl;

    // 실수 리터럴과 지수 표기법 출력
    cout << 3.14 << endl;       // 일반 실수 표현
    cout << 31.4e-1 << endl;    // 31.4 × 10^-1
    cout << 31.4e-2 << endl;    // 31.4 × 10^-2
    cout << 31.4e1 << endl;     // 31.4 × 10^1
    cout << 31.4e2 << endl;     // 31.4 × 10^2

    // 출력 정밀도를 소수점 이하 16자리로 설정
    cout << std::setprecision(16);
    cout << 1.0 / 3.0 << endl;  // 부동소수점 나눗셈 오차 확인

    // float 정밀도 한계를 확인하기 위한 큰 값 대입
    float f1 = 123456789.0f;
    cout << std::setprecision(9); // float가 정확히 표현 가능한 자릿수
    cout << f1 << endl;

    // 부동소수점 누적 오차 예제
    double d1(1.0); // 정확히 표현 가능한 값
    double d2 = (0.1 + 0.1 + 0.1 + 0.1 + 0.1 +
                 0.1 + 0.1 + 0.1 + 0.1 + 0.1); // 누적 덧셈으로 인한 오차 발생
    cout << setprecision(17); // double 최대 유효 자릿수 출력
    cout << d1 << endl;
    cout << d2 << endl;

    // 빈 줄 출력
    cout << "" << endl;

    // 다시 정밀도 설정 후 출력
    cout << std::setprecision(17);
    cout << d1 << endl;

    // 0.0 값을 가지는 double 변수 선언
    double zero(0.0);

    return 0; // 프로그램 정상 종료
}
