#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int MAX_NUM = 26;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string  szWord_input;
    int     nASKII(0);
    int     nArrPos[MAX_NUM];
    int     nCnt(0);
    int     nSizeWord(0);

    memset(nArrPos, -1, sizeof(nArrPos));

    cin >> szWord_input;
    nSizeWord = szWord_input.size();

    for (int i = 0; i < nSizeWord; i++)
    {
        nASKII = (int)szWord_input.at(i);

        for (int j = 0; j < MAX_NUM; j++)
        {
            if ((nASKII == 97 + j))
            {
                if (nArrPos[j] == -1)
                {
                    nArrPos[j] = nCnt;
                }
                nCnt++;
            }

        }
    }
 
    for (int i = 0; i < MAX_NUM; i++)
    {
        if (i == MAX_NUM - 1)
        {
            cout << nArrPos[i];
        }
        else
        {
            cout << nArrPos[i] << " ";
        }
    }

    return 0;
}
