#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nN(0), nM(0), nK(0);

    cin >> nN >> nM >> nK;

    cout << nK / nM << " " << nK % nM;

    

    return 0;
}