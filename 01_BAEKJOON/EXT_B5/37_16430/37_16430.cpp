#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nA(0), nB(0);
    int nP(0), nQ(0);
    cin >> nA >> nB;

    nQ = nB;
    nP = (nB - nA);

    cout << nP << " " << nQ;
   

    return 0;
}