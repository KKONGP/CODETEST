#include <iostream>

using namespace std;

int main()
{
    int num(0);
    cin >> num;

    if ((num < 0) || (num > 100))
    {
        cout << "정수의 범위를 확인하세요." << endl;
        return 0;
    }

    if (num >= 90)
    {
        cout << "A" << endl;
    }
    else if (num >= 80 && num < 90)
    {
        cout << "B" << endl;
    }
    else if (num >= 70 && num < 80)
    {
        cout << "C" << endl;
    }
    else if (num >= 60 && num < 70)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "F" << endl;
    }

    return 0;
}