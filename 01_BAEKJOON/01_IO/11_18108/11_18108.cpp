#include <iostream>

using namespace std;

int main()
{
    int a(0);

    cin >> a;

    if (a < 1000 || a > 3000)
    {
        cout << "숫자의 범위를 확인하세요" << endl;
        return 0;
    }

    cout << a - 543 << endl;


    return 0;
}