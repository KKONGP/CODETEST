#include <iostream>

using namespace std;

int main()
{
	int nCase(0);
	cin >> nCase;

	int* nNum1 = new int[nCase];
	int* nNum2 = new int[nCase];

	for (int i = 0; i < nCase; i++)
	{
		cin >> nNum1[i] >> nNum2[i];

		if (((nNum1[i] > 10) || (nNum1[i] < 0)) || ((nNum2[i] > 10) || (nNum2[i] < 0)))
		{
			cout << "자연수의 범위를 확인하세요." << '\n';
			return 0;
		}

	}

	for (int i = 0; i < nCase; i++)
	{
		cout << "Case #" << i+1 << ": " << nNum1[i] + nNum2[i] << '\n';
	}

	delete[] nNum1;
	delete[] nNum2;

	return 0;
}
