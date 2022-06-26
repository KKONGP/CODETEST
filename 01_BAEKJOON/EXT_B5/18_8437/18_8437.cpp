#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int nTotal(0), nDiff(0);

    cin >> nTotal;
    cin >> nDiff;
    cout << (nTotal + nDiff) / 2 << '\n';
    cout << (nTotal - nDiff) / 2 << '\n';

    return 0;
}