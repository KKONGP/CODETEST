#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nT[2], nF[2], nS[2], nP[2], nC[2];
    int nRes[2];

    for (int i = 0; i < 2; i++)
    {
        cin >> nT[i] >> nF[i] >> nS[i] >> nP[i] >> nC[i];
        nRes[i] = (nT[i] * 6 + nF[i] * 3 + nS[i] * 2 + nP[i] + nC[i] * 2);
    }

    for (int i = 0; i < 2; i++)
    {
        cout << nRes[i] << " ";
    }

    return 0;
}