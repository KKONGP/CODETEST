#include <iostream>

using namespace std;

int main()
{
    int num1(0), num2(0);

    cin >> num1;
    cin >> num2;

    if (((num1 < -1000) || (num1 > 1000) || (num1 == 0))|| ((num2 < -1000) || (num2 > 1000) || (num2 == 0)))
    {
        cout << "정수의 범위를 확인하세요." << endl;
        return 0;
    }

    if ((num1 > 0) && (num2 > 0))
    {
        cout << "1" << endl;
    }
    else if ((num1 < 0) && (num2 > 0))
    {
        cout << "2" << endl;
    }
    else if ((num1 < 0) && (num2 < 0))
    {
        cout << "3" << endl;
    }
    else
    {
        cout << "4" << endl;
    }

    return 0;
}