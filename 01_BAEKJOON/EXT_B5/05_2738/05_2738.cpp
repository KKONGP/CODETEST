#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nInput1(0), nInput2(0);
    int nTmp(0);
    vector<vector<int>> v1, v2;
    vector<int> vTmp;


    cin >> nInput1 >> nInput2;
    for (int i = 0; i < nInput1; i++)
    {
        for (int j = 0; j < nInput2; j++)
        {
            cin >> nTmp;
            vTmp.push_back(nTmp);
        }
        v1.push_back(vTmp);
        vTmp.clear();
    }

    for (int i = 0; i < nInput1; i++)
    {
        for (int j = 0; j < nInput2; j++)
        {
            cin >> nTmp;
            vTmp.push_back(nTmp);
        }
        v2.push_back(vTmp);
        vTmp.clear();
    }

    for (int i = 0; i < nInput1; i++)
    {
        for (int j = 0; j < nInput2; j++)
        {
            cout << v1[i][j] + v2[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}