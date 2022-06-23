#include <iostream>

using namespace std;

int Factorial(int nNum);

int main()
{
    int nNum(0);

    cin >> nNum;    

    cout << Factorial(nNum) << '\n';

    return 0;
}

int Factorial(int nNum)
{
    if (nNum == 0)  return 1;

    return nNum + Factorial(nNum-1);
}