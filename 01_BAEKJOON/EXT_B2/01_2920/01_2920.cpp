#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string szInput;

    getline(cin, szInput);

    if (szInput == "1 2 3 4 5 6 7 8")
    {
        cout << "ascending" << '\n';
    }
    else if (szInput == "8 7 6 5 4 3 2 1")
    {
        cout << "descending" << '\n';
    }
    else
    {
        cout << "mixed" << '\n';
    }

    return 0;
}