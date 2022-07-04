#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nAx(0), nAy(0), nAz(0);
    int nBx(0), nBy(0), nBz(0);
    int nCx(0), nCy(0), nCz(0);

    cin >> nAx >> nAy >> nAz;
    cin >> nCx >> nCy >> nCz;

    nBx = nCx - nAz;
    nBy = nCy / nAy;
    nBz = nCz - nAx;

    cout << nBx << " " << nBy << " " << nBz;


    return 0;
}