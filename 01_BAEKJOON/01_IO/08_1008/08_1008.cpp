#include <iostream>

using namespace std;

int main()
{
    int a(0);
    int b(0);
    double out(0);

    cin >> a >> b;

    if (a <= 0 || b > 10)
    {
        cout << "숫자의 범위를 확인하세요" << endl;
        return 0;
    }
    out = a / b;

    out = double(a) / double(b);
    
    cout << fixed;
    cout.precision(12);
    cout << out << endl;

    return 0;
}

// fixed, precision 함수 조사
// double 소숫점 신뢰 범위 확인 : 약 14자리
// 추가 궁금사항 : 
//     유리수의 경우 precision을 다르게 주는 방법
//     예 ) 4 / 5 = 0.8
//     예 ) 1 / 3 = 0.333333333333
