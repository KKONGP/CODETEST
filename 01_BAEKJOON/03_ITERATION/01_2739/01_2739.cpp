#include <iostream>

using namespace std;

int main()
{
    int nNum;
    cin >> nNum;

    for (int i=0; i < 9;i++)
    {
        cout << nNum << " * " << i+1 << " = " << nNum * (i+1) << endl;
    }

    return 0;
}

