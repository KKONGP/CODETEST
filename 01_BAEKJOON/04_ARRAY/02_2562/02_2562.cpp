#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	const int MAX_NUM = 9;
	int nNum[MAX_NUM];
	int nMaxpos(0);
	int nMaxval(0);



	for (int i = 0; i < MAX_NUM; i++)
	{
		cin >> nNum[i];
	}

	nMaxval = nNum[0];
	nMaxpos = 0;

	for (int i = 0; i < MAX_NUM; i++)
	{
		if (nMaxval < nNum[i])
		{
			nMaxval = nNum[i];
			nMaxpos = i;
		}
	}

	cout << nMaxval << '\n';
	cout << nMaxpos+1 << '\n';
	return 0;
}