#include <iostream>

using namespace std;

int main()
{
    int nNum(0);
    cin >> nNum;

    if ((nNum > 10000) || (nNum < 0))
    {
        cout << "정수의 범위를 확인하세요." << endl;
        return 0;
    }

    cout << nNum * (nNum + 1) / 2 << endl;

    return 0;
}

// 동적할당 사용법 숙지할것