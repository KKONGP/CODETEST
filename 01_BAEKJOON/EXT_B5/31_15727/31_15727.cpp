#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nDistance(0);

    cin >> nDistance;
    cout << (nDistance-1) / 5 + 1;


    return 0;
}