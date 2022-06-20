#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCost_Fixed(0);
    int nCost_Variable(0);
    int nPrice(0);
    int nBreakEvenPoint(0);

    bool bBreakEvenPoint = false;

    cin >> nCost_Fixed >> nCost_Variable >> nPrice;

    if (nCost_Variable >= nPrice)
    {
        cout << -1 << '\n';
    }
    else
    {
        nBreakEvenPoint = 1 + nCost_Fixed / (nPrice - nCost_Variable);
        cout << nBreakEvenPoint << '\n';
    }
    return 0;
}
