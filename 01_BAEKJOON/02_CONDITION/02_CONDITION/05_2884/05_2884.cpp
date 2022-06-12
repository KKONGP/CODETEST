#include <iostream>

using namespace std;

int main()
{
    const int TIME_MIN = 45;

    int nHour(0), nMin(0);
    int tmp_nHour(0), tmp_nMin(0);
    cin >> nHour >> nMin;

    tmp_nHour = nHour;
    tmp_nMin = nMin - 45; 

    if (tmp_nMin < 0)
    {
        tmp_nHour = tmp_nHour - 1;
        tmp_nMin = 60 + tmp_nMin;

        if (tmp_nHour < 0)
        {
            tmp_nHour = 24 + tmp_nHour;
        }
    }

    cout << tmp_nHour << " " << tmp_nMin << endl;
    
    return 0;
}