#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nBefore(0), nAfter(0);

    cin >> nBefore;
    cin >> nAfter;
    cout << nAfter- nBefore << '\n';

    return 0;
}