#include <iostream>

using namespace std;

int Fibonacci(int nNum);

int main()
{
    int nNum(0);

    cin >> nNum;

    cout << Fibonacci(nNum) << '\n';

    return 0;
}

int Fibonacci(int nNum)
{
    if (nNum == 0) return 0;
    if (nNum == 1) return 1;
    if (nNum == 2) return 1;

    return Fibonacci(nNum - 1) + Fibonacci(nNum-2);
}