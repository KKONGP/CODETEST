#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	const int MAX_COUNT = 10;
	const int MAX_DIV = 42;
	int nNum(0);
	int nVal_division[MAX_COUNT] = { 0, };
	bool nVal_flag[MAX_DIV] = { false, };
	int nVal(0);


	for (int i = 0; i < MAX_COUNT; i++)
	{
		cin >> nNum;

		if (nNum > 1000 || nNum < 0)
		{
			cout << "범위를 확인하세요" << '\n';
			return 0;
		}
		nVal_division[i] = nNum % 42;
	}


	for (int i = 0; i < MAX_DIV; i++)
	{
		for (int j = 0; j < MAX_COUNT; j++)
		{
			if (i  == nVal_division[j])
			{
				nVal_flag[i] = true;
				break;
			}

		}
		if (nVal_flag[i] == true)
			nVal++;

	}
	cout << nVal << '\n';

	return 0;
}