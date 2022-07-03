#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string szInput = "";

    cin >> szInput;
    reverse(szInput.begin(), szInput.end());
    cout << szInput;

    return 0;
}