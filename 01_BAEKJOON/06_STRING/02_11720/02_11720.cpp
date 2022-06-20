#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCnt(0);
    int nNum_sum(0);
    string  szNum;
    string  szNum_single;

    cin >> nCnt;

    if (nCnt > 100 || nCnt < 1)
    {
        cout << "입력값의 범위를 확인하세요" << '\n';
        return 0;
    }
    
    cin >> szNum;


    for (int i = 0; i < nCnt; i++)
    {
        szNum_single = szNum[i];
        nNum_sum += stoi(szNum_single);
    }

    cout << nNum_sum << '\n';

    return 0;
}
