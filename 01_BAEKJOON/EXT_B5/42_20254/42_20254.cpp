#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nUr(0), nTr(0), nUo(0), nTo(0);

    cin >> nUr >> nTr >> nUo >> nTo;

    cout << 56*nUr + 24*nTr + 14*nUo + 6*nTo << '\n';


    return 0;
}