#include <iostream>

using namespace std;

int main()
{
    int num(0);
    int reminder_4(0);
    int reminder_100(0);
    int reminder_400(0);
    cin >> num;

    if ((num < 1) || (num > 4000))
    {
        cout << "정수의 범위를 확인하세요." << endl;
        return 0;
    }

    reminder_4 = num % 4;
    reminder_100 = num % 100;
    reminder_400 = num % 400;

    if (((reminder_4 == 0 && reminder_100 != 0))|| reminder_400 == 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}