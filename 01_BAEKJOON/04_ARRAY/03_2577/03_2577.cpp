#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string szNum;
	string szNum_compare;
	string szNum_single;


	const int MAX_DIGET = 10;
	const int MAX_NUM = 3;
	int nNumCount[MAX_DIGET] = { 0, };
	int nNum[MAX_NUM] = { 0, };
	int nVal(1);

	for (int i = 0; i < MAX_NUM; i++)
	{
		cin >> nNum[i];
		nVal *= nNum[i];
	}

	szNum = to_string(nVal);

	for (int i = 0; i < MAX_DIGET; i++)
	{
		szNum_compare = to_string(i);

		for (int j = 0; j < szNum.size(); j++)
		{
			szNum_single = szNum[j];
			if (szNum_single.compare(szNum_compare) == 0)
				nNumCount[i]++;
		}
		cout << nNumCount[i] << '\n';
	}

	return 0;
}

// string 관련 함수 숙지
