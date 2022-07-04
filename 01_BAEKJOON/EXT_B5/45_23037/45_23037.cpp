#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string szInput = "";
    int nTmp(0);
    int nSum(0);

    cin >> szInput;

    for (int i = 0; i < szInput.size(); i++)
    {
        nTmp = (int)(szInput.at(i))-48;
        nSum = nSum + nTmp * nTmp * nTmp * nTmp * nTmp;
    }

    cout << nSum <<'\n';

    return 0;
}