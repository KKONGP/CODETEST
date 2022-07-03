#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nNumSatation(0), nInitNum(0);
    int nNumUp(0), nNumDown(0);

    cin >> nNumSatation >> nInitNum;

    for (int i = 0; i < nNumSatation; i++)
    {
        cin >> nNumUp >> nNumDown;
    }

    cout << "비와이";

    return 0;
}