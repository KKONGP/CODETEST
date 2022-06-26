#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long nN(0), nM(0);
    long long nRes(0);

    cin >> nN >> nM;

    nRes = nN - nM;
    if (nRes < 0) nRes = -nRes;


    cout << nRes << '\n';

    return 0;
}