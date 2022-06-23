#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string szMoney;
    string szLife;

    cin >> szMoney >> szLife;

    cout << stoi(szMoney) / stoi(szLife) << '\n';


    return 0;
}


