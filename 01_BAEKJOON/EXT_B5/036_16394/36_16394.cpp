#include<iostream>

using namespace std;

const int HYEAR = 1946;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nYear_cur(0);

    cin >> nYear_cur;

    cout << nYear_cur - HYEAR << '\n';

    return 0;
}