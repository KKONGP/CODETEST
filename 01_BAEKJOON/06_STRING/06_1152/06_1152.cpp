#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string szSen;

    int nSizeSen(0);
    int nCnt(0);
    bool bflag_start = false;

    getline(cin, szSen);
    szSen.push_back(' ');
    nSizeSen = szSen.size();
    
    for (int i = 0; i < nSizeSen; i++)
    {
        if ((int)szSen.at(i) != 32)
        {
            bflag_start = true;
        }
        if (((int)szSen.at(i) == 32) && (bflag_start == true))
        {
            nCnt++;
            bflag_start = false;
        }
    }

    cout << nCnt << '\n';


    return 0;
}
