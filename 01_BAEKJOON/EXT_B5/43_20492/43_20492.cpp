#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nPrize(0);
    double nTax(0);

    nTax = 0.22;

    cin >> nPrize;

    cout << (int)(nPrize*(1-nTax)) << " " << (int)(nPrize*0.8 + nPrize*0.2*(1-nTax)) << '\n';


    return 0;
}