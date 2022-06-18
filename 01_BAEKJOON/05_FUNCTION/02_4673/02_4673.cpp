#include <iostream>
#include <vector>
#include <string>

using namespace std;

int series_Kaprekar(int number);

int main()
{
    const int   MAX_NUM = 10000;
    int         nNum_Kaprekar(0);
    bool        nNum_self[MAX_NUM+1] = { false, };



    for (int i = 1; i < MAX_NUM+1; i++)
    {
        if (series_Kaprekar(i) < MAX_NUM+1)
        {
            nNum_self[series_Kaprekar(i)] = true;
        }
        else
        {
            continue;
        }

    }

    for (int i = 1; i < MAX_NUM+1; i++)
    {
        if (nNum_self[i] == false)
        {
            cout << i << '\n';
        }
    }




    return 0;
}


int series_Kaprekar(int number)
{
    int num_iteration(0);
    int num(0);
    vector<string> v;

    string szNumber;
    string szNumber_single;

    szNumber = to_string(number);
 
    num_iteration = szNumber.size();
 
    for (int i = 0; i < num_iteration; i++)
    {
        szNumber_single = szNumber.at(i);
        v.push_back(szNumber_single);

        num += stoi(v.at(i));
    }

    return num + number;
}
