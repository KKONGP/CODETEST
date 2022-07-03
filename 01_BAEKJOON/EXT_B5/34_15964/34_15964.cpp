#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long nNum1(0), nNum2(0);

    cin >> nNum1 >> nNum2;

    cout << (nNum1 + nNum2) * (nNum1 - nNum2);

    return 0;
}