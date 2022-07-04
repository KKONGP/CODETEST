#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nPrice(0), nTot(0), nCost(0), nNum(0);
    int nTmp(0);
    cin >> nPrice;
    cin >> nTot;

    for (int i = 0; i < nTot; i++)
    {
        cin >> nCost >> nNum;
        nTmp = nCost * nNum;
        nPrice -= nTmp;
    }

    if (nPrice == 0) cout << "Yes";
    else
    {
        cout << "No";
    }


    return 0;
}