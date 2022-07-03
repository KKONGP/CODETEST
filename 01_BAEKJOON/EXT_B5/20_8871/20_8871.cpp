#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nInput(0);

    cin >> nInput;

    cout << (nInput+1)*2 << " " << (nInput + 1) * 3 <<'\n';

    return 0;
}