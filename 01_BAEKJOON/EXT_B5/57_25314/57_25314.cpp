#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string szLong = "long ";
    string szInt = "int";
    string szOutput = "";
    int nNum(0);

    cin >> nNum;



    for (int i = 0; i < nNum/4; i++)
    {
        szOutput += szLong;
    }

    cout << szOutput + szInt;
   

    return 0;
}