#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nB1(0), nB2(0), nB3(0), nB4(0), nB5(0), nB6(0);

    cin >> nB1 >> nB2 >> nB3 >> nB4 >> nB5 >> nB6;

    cout << (nB1 + nB2 + nB3 + nB4 + nB5 + nB6)*5 << '\n';


    return 0;
}