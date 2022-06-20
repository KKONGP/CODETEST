#include <iostream>

using namespace std;

int main()
{
    int nNum(0);
    int nMax(0), nMin(0);
    int nValue(0);
    const int MAXVAL = -1000000;
    const int MINVAL = 1000000;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> nNum;

    if (nNum > 1000000 || nNum < 0)
    {
        cout << "정수값을 확인하세요" << '\n';
        return 0;
    }

    nMax = MAXVAL;
    nMin = MINVAL;
    
    for (int i = 0; i < nNum; i++)
    {
        cin >> nValue;
		if (nValue > 1000000 || nValue < -1000000)
		{
			cout << "정수값을 확인하세요" << '\n';
			return 0;
		}

		if (nMax < nValue)
			nMax = nValue;

		if (nMin > nValue)
			nMin = nValue;

    }

    cout << nMin << " " << nMax << '\n';
    return 0;
}


// 동적할당을 할 필요가 없음.
// 들어오는 값을 바로바로 처리하면 됨.