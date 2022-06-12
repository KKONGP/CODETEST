#include <iostream>

using namespace std;

int main()
{

    int nDice[3] = { 0, };

    cin >> nDice[0] >> nDice[1] >> nDice[3];



    for (int i = 0; i < 3; i++)
    {
        if (nDice[i] > 6 || nDice[i] < 0)
        {
            cout << "주사위 범위를 확인하세요" << endl;
            return 0;
        
        }
    }

    if (nDice[0]-nDice[1] == 0) 

    for (int i = 0; i < 3; i++)                         // 1 1 1        // 1 1 0
    {
        if ((i != 0) && (nDice[i] - nDice[0] == 0))     // 0    1   1   // 0    1   0
        {

        }
        if ((i != 1) && (nDice[i] - nDice[1] == 0))     // 1    0   1   // 1    0   0
        {

        }
        if ((i != 2) && (nDice[i] - nDice[2] == 0))     // 1    0   0   // 0    0   0
        {

        }
    }

    return 0;
}