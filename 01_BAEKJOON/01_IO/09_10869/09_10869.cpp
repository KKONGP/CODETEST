#include <iostream>

using namespace std;

int main()
{
    int a(0);
    int b(0);

    cin >> a >> b;

    if (a < 1 || b > 10000)
    {
        cout << "숫자의 범위를 확인하세요" << endl;
        return 0;
    }


    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    return 0;
}