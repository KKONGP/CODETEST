#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nNum(0);
    int nCnt(0);
    int nSt(0);
    int nEd(0);
    int nInterval(0);
    int nPos(0);
    int nVal[2] = { 0, 0 };
    cin >> nNum;

    while (nEd <= nNum)
    {
        nCnt++;
        nEd = (nCnt - 1) * (nCnt + 2) / 2 + 2;
    }
    nSt = nCnt * (nCnt - 1) / 2 + 1;

    nInterval = nEd - nSt;
    nPos = nNum - nSt;

    if (nCnt % 2 == 0)      // even
    {
        nVal[0] = nInterval - nPos;
        nVal[1] = nPos + 1;
    }
    else                    // odd
    {
        nVal[0] = nPos + 1;
        nVal[1] = nInterval - nPos ;
    }

    cout << nVal[1] << "/" << nVal[0] << '\n';

    return 0;
}
