#include <iostream>

using namespace std;

int main()
{
	int nNumStar(0);
	cin >> nNumStar;

	if ((nNumStar > 100) || (nNumStar < 1))
	{
		cout << "별 개수의 범위를 확인하세요." << '\n';
		return 0;
	}

	for (int i = 0; i < nNumStar; i++)
	{
		for (int j = 0; j < nNumStar-i-1; j++)
		{
			cout << " ";
			
		}

		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << '\n';

	}

	return 0;
}

// 더 좋은방법..
