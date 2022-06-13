#include <iostream>

using namespace std;

int main()
{
    int const TIME_HOUR = 24;
    int const TIME_MIN = 60;

    int nHour(0), nMin(0);
    int nCookTime(0);
    int tmp_nHour(0), tmp_nMin(0);
    cin >> nHour >> nMin;
    cin >> nCookTime;


    if ((nCookTime < 0) || (nCookTime > 1000))
    {
        cout << "요리시간을 확인하세요." << endl;
        return 0;
    }

    tmp_nHour = nHour;
    tmp_nMin = nMin + nCookTime;

    if (tmp_nMin >= TIME_MIN)
    {
        while (tmp_nMin >= TIME_MIN)
        {
            tmp_nHour += 1;
            tmp_nMin -= 60;
        }

        if (tmp_nHour >= TIME_HOUR)
        {
            while (tmp_nHour >= TIME_HOUR)
            {
                tmp_nHour -= 24;
            }

        }
    }

    cout << tmp_nHour << " " << tmp_nMin << endl;

    return 0;
}