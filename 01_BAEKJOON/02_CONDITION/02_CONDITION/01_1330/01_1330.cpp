#include <iostream>

using namespace std;

int main()
{
    int num1(0), num2(0);
    cin >> num1 >> num2;

    if (((num1 < -10000) || (num1 > 10000)) || ((num2 < -10000) || (num2 > 10000)))
    {
        cout << "정수의 범위를 확인하세요." << endl;
        return 0;
    }

    if (num1 > num2)
    {
        cout << ">" << endl;
    }
    else if (num1 < num2)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "==" << endl;
    }

    return 0;
}