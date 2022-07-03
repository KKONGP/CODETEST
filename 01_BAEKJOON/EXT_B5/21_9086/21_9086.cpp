#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nCase(0);
    string szInput;

    string szTmp_ST;
    string szTmp_ED;

    cin >> nCase;

    for (int i = 0; i < nCase; i++)
    {
        cin >> szInput;

        szTmp_ST = szInput.substr(0, 1);
        szTmp_ED = szInput.substr(szInput.size()-1, 1);
        cout << szTmp_ST << szTmp_ED<<'\n';
    }

    return 0;
}   