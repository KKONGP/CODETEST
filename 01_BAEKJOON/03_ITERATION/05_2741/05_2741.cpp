#include <iostream>

using namespace std;

int main()
{
    int nNum(0);
    cin >> nNum;

    if ((nNum > 100000) || (nNum < 0))
    {
        cout << "자연수의 범위를 확인하세요." << '\n';
        return 0;
    }

    for (int i = 0; i < nNum; i++)
    {
        cout << i+1 << '\n';
    }

    return 0;
}
