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
    cin >> nNum;


    while (nSt < nNum)
    {
        nCnt++;
        nSt = 3 * nCnt * nCnt - 3 * nCnt + 1;
    }

    cout << nCnt << '\n';
    return 0;
}
