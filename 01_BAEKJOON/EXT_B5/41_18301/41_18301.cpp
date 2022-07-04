#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nNum1(0), nNum2(0), nNum3(0);

    cin >> nNum1 >> nNum2 >> nNum3;

    cout << (nNum1 + 1) * (nNum2 + 1) / (nNum3 + 1) - 1 << '\n';
   

    return 0;
}