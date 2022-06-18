#include <iostream>
#include <string>

using namespace std;

bool IsHanNumber(int number);

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int   nNum(0);
    int   nCnt(0);

    cin >> nNum;

    if (nNum > 1000 || nNum < 0)
    {
        cout << "정수의 범위를 확인하세요" << '\n';
        return 0;
    }

    for (int i = 1; i < nNum+1; i++)
    {
        if (IsHanNumber(i) == true) nCnt++;
    }

    cout << nCnt << '\n';

    return 0;
}


bool IsHanNumber(int number)
{
    bool bHan = true;
    int size(0);
    int num_divide(0);
    int interval(0);

    string szNumber;

    szNumber = to_string(number);
    size = szNumber.size();
    int* numArr = new int[size];
    num_divide = number;

    for (int i = 0; i < size; i++)
    {
        numArr[size-i-1] = num_divide % 10;
        num_divide /= 10;
    }

    interval = numArr[1] - numArr[0];

    for (int i = 0; i < size - 2; i++)
    {
        if ((numArr[size - 1 - i] - numArr[size - 2 - i]) != interval)
        {
            bHan = false;
        }

    }

    delete[] numArr;

    return bHan;
}
