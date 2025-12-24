//
// Created by Dongju Lee on 2025. 12. 24..
//

#include <iostream>
#include <limits>
// pow 쓰려면 <cmath>가 정석입니다. (지금은 std::pow 때문에 필요)
#include <cmath>

using namespace std;

int main() {

    // 정수 타입 선언(환경에 따라 크기 다를 수 있음)
    short s = 1;      // 보통 2바이트(16비트)
    int i = 1;
    long l = 1;
    long long ll = 1;

    // 각 타입의 바이트 크기 출력
    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << "" << endl;

    // short의 "이론상" 최대값 계산(2^(비트수-1)-1)
    // 주의: pow는 double 기반이라 정수 계산에 부정확할 수 있음(학습용으로만)
    cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
    cout << "" << endl;

    // numeric_limits로 타입의 최대/최소 범위 확인
    cout << std::numeric_limits<short>::max() << endl;    // 최대값
    cout << std::numeric_limits<short>::min() << endl;    // 최소값(정수는 lowest와 동일)
    cout << std::numeric_limits<short>::lowest() << endl; // 표현 가능한 가장 낮은 값

    cout << "" << endl;

    // 오버플로우 테스트(정의되지 않은 동작/UB 가능성 있음)
    s = 32767;
    s = s + 1; // 범위를 넘어서면 오버플로우(결과는 컴파일러/환경 의존)
    cout << "32768? " << s << endl;

    // 언더플로우 테스트(역시 UB 가능)
    s = std::numeric_limits<short>::min();
    s = s - 1; // 범위를 벗어나면 오버플로우/언더플로우
    cout << "-32768? " << s << endl;

    return 0;
}
