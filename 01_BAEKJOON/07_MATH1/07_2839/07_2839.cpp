#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nSugar(0), nSugar_tmp(0);
    int nCnt_5(0), nCnt_3(0);
    int nBag_5(0), nBag_3(0);

    cin >> nSugar;

    nCnt_5 = nSugar / 5;

    for (int i = 0; i < nCnt_5+1; i++)
    {
        nSugar_tmp = nSugar - 5 * (nCnt_5-i);
        nBag_5 = nCnt_5-i;
        nCnt_3 = nSugar_tmp / 3;
        for (int j = 0; j < nCnt_3 +1; j++)
        {
            nBag_3 = nSugar_tmp / 3;
            nSugar_tmp = nSugar_tmp - 3 * nBag_3;
            if (nSugar_tmp == 0)
            {
                cout << nBag_3 + nBag_5 << endl;
                return 0;
            }
        }

    }
    cout << -1 << '\n';
    return 0;
}