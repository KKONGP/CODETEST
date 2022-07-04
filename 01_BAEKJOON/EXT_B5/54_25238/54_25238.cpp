#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nD(0), nDD(0);
    double nRes(0);

    cin >> nD >> nDD;

    nRes = nD * (double)((100 - nDD)) / 100;

    if (nRes >= 100) cout << "0";
    else cout << "1";

    return 0;
}