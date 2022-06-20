#include <iostream>

using namespace std;

int main()
{
    int num1(0);        //123
    int num2(0);
    int tmp1(0), tmp2(0);
    int arrNum1[3] = { 0, };   // 123/100 = 1, 123- 1*100 =23, 23/10 = 2, 3/1
    int arrNum2[3] = { 0, };

    cin >> num1 >> num2;
    tmp1 = num1;
    tmp2 = num2;
    if ((num1 < 100 || num1 > 1000) || (num2 < 100 || num2 > 1000))
    {
        cout << "숫자의 범위를 확인하세요" << endl;
        return 0;
    }

    for (int i = 0; i < 3; i++)
    {
        arrNum1[2 - i] = tmp1 % 10; // 123               
        arrNum2[2 - i] = tmp2 % 10;
        tmp1 /= 10;
        tmp2 /= 10;
    }

    cout << num1 * arrNum2[2] << endl;
    cout << num1 * arrNum2[1] << endl;
    cout << num1 * arrNum2[0] << endl;
    cout << num1 * num2 << endl;


    return 0;
}