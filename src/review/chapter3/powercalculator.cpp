//
// Created by Dongju Lee on 2026. 1. 2..
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    cout << "거듭제곱을 계산 해주는 프로그램입니다. \n먼저 밑을 적어주신 다음에 엔터를 눌러 지수를 입력 부탁드립니다."<<endl;
    int x;
    int y;

    cout <<"밑을 입력해주세요: ";
    cin >> x;
    cout <<"지수를 입력해주세요: ";
    cin >> y;
    int result = std::pow(x,y);
    cout << "당신이 입력한 밑은 "<<x<<"지수는 "<<y<<"입니다 계산을 해보면 "<<result<<"입니다";

    return 0;
}
// 문제점 pow 결과를 int에 넣은 게 위험 pow는 double 기반 입력 검증이 없음

/*
//
// Created by Dongju Lee on 2026. 1. 2..
//

#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

static bool willMulOverflow(long long a, long long b) {
    __int128 x = static_cast<__int128>(a) * static_cast<__int128>(b);
    return x > numeric_limits<long long>::max() || x < numeric_limits<long long>::min();
}

static bool powIntChecked(long long base, long long exp, long long &out) {
    // exp >= 0 가정
    long long result = 1;
    long long cur = base;

    while (exp > 0) {
        if (exp & 1LL) {
            if (willMulOverflow(result, cur)) return false;
            result *= cur;
        }
        exp >>= 1LL;
        if (exp > 0) { // 다음 루프에서 cur을 또 쓸 수 있을 때만 제곱
            if (willMulOverflow(cur, cur)) return false;
            cur *= cur;
        }
    }
    out = result;
    return true;
}

int main() {
    cout << "거듭제곱(밑^지수)을 계산해주는 프로그램입니다.\n"
            "먼저 밑을 입력한 다음, 엔터를 누르고 지수를 입력해 주세요.\n";

    long long base, exp;
    cout << "밑을 입력해주세요: ";
    cin >> base;

    cout << "지수를 입력해주세요: ";
    cin >> exp;

    if (!cin) {
        cout << "입력이 올바르지 않습니다.\n";
        return 0;
    }

    // 음수 지수는 정수로 정확히 표현할 수 없으므로 double로 처리
    if (exp < 0) {
        double result = pow(static_cast<double>(base), static_cast<double>(exp));
        cout << "입력한 밑은 " << base << ", 지수는 " << exp
             << " 입니다. 계산 결과는 " << result << " 입니다.\n";
        return 0;
    }

    long long resultInt = 0;
    if (!powIntChecked(base, exp, resultInt)) {
        cout << "오버플로우가 발생할 수 있어 계산을 중단했습니다. (값이 너무 큽니다)\n";
        return 0;
    }

    cout << "입력한 밑은 " << base << ", 지수는 " << exp
         << " 입니다. 계산 결과는 " << resultInt << " 입니다.\n";

    return 0;
}

 *
 */