#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nInput(0);

    cin >> nInput;
    cout << nInput%21 << '\n';

    return 0;
}