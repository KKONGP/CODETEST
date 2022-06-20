#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nUp(0);
    int nDown(0);
    int nHeight(0);
    int nInterval(0);
    int nDay(0);

    cin >> nUp >> nDown >> nHeight;

    nInterval = nUp - nDown;

    if (nHeight == nUp)
    {
        cout << 1 << '\n';
        return 0;
    }



    if ((nHeight-nUp) % nInterval == 0)
    {
        nDay = (nHeight - nUp) / nInterval + 1;
    }
    else
    {
        nDay = (nHeight - nUp) / nInterval + 2;
    }

    cout << nDay << '\n';
    return 0;
}
