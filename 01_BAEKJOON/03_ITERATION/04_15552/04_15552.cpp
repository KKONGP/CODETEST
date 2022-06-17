#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int nNumCase(0);
	cin >> nNumCase;

	if ((nNumCase > 1000000) || (nNumCase < 0))
	{
		cout << "정수의 범위를 확인하세요." << "\n";
		return 0;
	}


	int nNum1(0), nNum2(0);


	for (int i = 0; i < nNumCase; i++)
	{
		cin >> nNum1 >> nNum2;

		if ((nNum1 > 1000) || (nNum1 < 0) || (nNum2 > 1000) || (nNum2 < 0))
		{
			cout << "정수의 범위를 확인하세요." << "\n";
			return 0;
		}
		cout << nNum1 + nNum2 << "\n";
	}

	return 0;
}