#include <iostream>

using namespace std;

int main()
{

    int nDice[3] = { 0, };
    int nDicenum[6] = { 0, };
    int nPrizemoney(0);
    int nCurDice(0);

    cin >> nDice[0] >> nDice[1] >> nDice[2];



    for (int i = 0; i < 3; i++)
    {
        if (nDice[i] > 6 || nDice[i] < 0)
        {
            cout << "주사위 범위를 확인하세요" << endl;
            return 0;
        
        }
    }



    for (int i = 0; i < 3; i++)
    {
        if (nCurDice < nDice[i])
        {
            nCurDice = nDice[i];
        }
        bool flag_dicechance = false;
        if ((i != 0) && (nDice[i] - nDice[0] == 0) && (flag_dicechance == false))
        {
            nDicenum[nDice[i] - 1]++;
            flag_dicechance = true;
        }
        if ((i != 1) && (nDice[i] - nDice[1] == 0) && (flag_dicechance == false))
        {
            nDicenum[nDice[i] - 1]++;
            flag_dicechance = true;
        }
        if ((i != 2) && (nDice[i] - nDice[2] == 0) && (flag_dicechance == false))
        {
            nDicenum[nDice[i] - 1]++;
            flag_dicechance = true;
        }

    }

    for (int i = 0; i < 6; i++)
    {
        if (nDicenum[i] == 3)
        {
            nPrizemoney = 10000 + (i + 1) * 1000;
            break;
        }
        else if (nDicenum[i] == 2)
        {
            nPrizemoney = 1000 + (i + 1) * 100;
            break;
        }
        else
        {
            nPrizemoney = nCurDice * 100;
        }
    }

    cout << nPrizemoney << endl;

    return 0;
}