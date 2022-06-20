#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string szNum1;
    string szNum2;

    int nNum1(0);
    int nNum2(0);

    cin >> szNum1 >> szNum2;

    reverse(szNum1.begin(), szNum1.end());
    reverse(szNum2.begin(), szNum2.end());

    nNum1 = stoi(szNum1);
    nNum2 = stoi(szNum2);

    if (nNum1 > nNum2)
    {
        cout << nNum1 << '\n';
    }
    else if (nNum1 < nNum2)
    {
        cout << nNum2 << '\n';
    }
    else
    {
        cout << "값이 동일합니다" << '\n';
    }

    return 0;
}
