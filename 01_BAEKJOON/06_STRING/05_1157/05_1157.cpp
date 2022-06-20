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
    int     nSize_Word(0);
    int     nArrVal[MAX_NUM];
    int     nASKII(0);
    int     nMaxPos(0);
    int     nMaxVal(-1);
    int     nMaxCnt(0);

    memset(nArrVal, 0, sizeof(nArrVal));



    cin >> szWord_input;

    nSize_Word = szWord_input.size();

    for (int i = 0; i < nSize_Word; i++)
    {
        nASKII = (int)szWord_input.at(i);

        for (int j = 0; j < MAX_NUM; j++)
        {
            if ((65+j == nASKII) || (97+j == nASKII))
            {
                nArrVal[j]++;
            }
        }
   
    }
    

    for (int i = 0; i < MAX_NUM; i++)
    {
        if (nMaxVal < nArrVal[i])  // 0 2 2
        {
            nMaxVal = nArrVal[i];
            nMaxPos = i;
            nMaxCnt = 0;
        }
        else if (nMaxVal == nArrVal[i])
        {
            nMaxCnt++;
        }
    }

    if (nMaxCnt == 0)
    {
        cout << (char)(nMaxPos + 65) << '\n';
    }
    else
    {
        cout << "?" << '\n';
    }
    return 0;
}
