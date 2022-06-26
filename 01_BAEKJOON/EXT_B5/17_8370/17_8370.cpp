#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int nN1(0), nN2(0);
    int nK1(0), nK2(0);
    cin >> nN1 >> nK1 >> nN2 >> nK2;

    cout << nN1 * nK1 + nN2 * nK2 << '\n';

    return 0;
}