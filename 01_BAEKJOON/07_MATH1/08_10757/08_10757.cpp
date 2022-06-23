#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int MAXNUM = 20000;

string sumBigNum(int* arr1, int* arr2);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string  szNum1;
    string  szNum2;
    string  szTmp1;
    string  szTmp2;
    string  szSum;
    bool    bFlag_Ext1 = false;
    bool    bFlag_Ext2 = false;

    cin >> szNum1 >> szNum2;

    szTmp1 = szNum1.at(0);
    szTmp2 = szNum2.at(0);
    if (szTmp1.compare("0") == 0)
    {
        szNum1.erase(0, 1);
    }
    if (szTmp2.compare("0") == 0)
    {
        szNum2.erase(0, 1);
    }

    if (szNum1.size() < szNum2.size())
    {
        swap(szNum1, szNum2);
    }

    int arrNum1[MAXNUM] = { 0, };
    int arrNum2[MAXNUM] = { 0, };


    for (int i = 0; i < MAXNUM; i++)
    {
        if (bFlag_Ext1 == true && bFlag_Ext2 == true) break;

        if (bFlag_Ext1 == false)
        {
            if ((int)(szNum1.size() - 1 - i) >= 0)
            {
                szTmp1 = szNum1.at(szNum1.size() - 1 - i);
                arrNum1[i] = stoi(szTmp1);
            }
            else
            {
                bFlag_Ext1 = true;
                arrNum1[i] = -1;
            }
        }

        if (bFlag_Ext2 == false)
        {
            if ((int)(szNum2.size() - 1 - i) >= 0)
            {
                szTmp2 = szNum2.at(szNum2.size() - 1 - i);
                arrNum2[i] = stoi(szTmp2);
            }
            else
            {
                bFlag_Ext2 = true;
            }
        }



    }

    szSum = sumBigNum(arrNum1, arrNum2);


    cout << szSum << '\n';

    return 0;
}

string sumBigNum(int* arr1, int* arr2)
{
    int     arrSum[MAXNUM] = { 0, };
    string  szSum;
    int     nMaxdigit(0);

    for (int i = 0; i < MAXNUM; i++)
    {
        if (arr1[i] == -1)
        {
            if (nMaxdigit >= 10)
            {
                szSum.append(to_string(arrSum[i]), 0, 1);
            }
            break;
        }

        arrSum[i] = arrSum[i] + arr1[i] + arr2[i];
        nMaxdigit = arrSum[i];

        if (arrSum[i] >= 10)
        {
            arrSum[i + 1]++;
            arrSum[i] -= 10;
        }
        szSum.append(to_string(arrSum[i]), 0, 1);

    }

    reverse(szSum.begin(), szSum.end());
    return szSum;
}


// string 삭제 str_dst.erase(pos,length)
// string 삽입 str_dst.append(str_src,pos,length)
// string 뒤집기 revese(st,ed)