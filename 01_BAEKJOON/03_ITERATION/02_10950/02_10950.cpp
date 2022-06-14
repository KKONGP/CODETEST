#include <iostream>

using namespace std;

int main()
{
    int nNumCase(0);
    cin >> nNumCase;

    int* nNum1 = new int[nNumCase];
    int* nNum2 = new int[nNumCase];


    for (int i = 0; i < nNumCase; i++)
    {
        cin >> nNum1[i] >> nNum2[i];
    }
    for (int i = 0; i < nNumCase; i++)
    {
        cout << nNum1[i] + nNum2[i] << endl;
    }

    delete[] nNum1;
    delete[] nNum2;

    return 0;
}

// 동적할당 사용법 숙지할것