#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string nNum1(0);
    string nNum2(0);

    cin >> nNum1 >> nNum2;

    cout << nNum1 + nNum2 << '\n';


    return 0;
}