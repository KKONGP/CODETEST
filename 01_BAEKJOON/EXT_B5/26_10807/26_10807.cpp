#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int nCase(0);
	int nCmp(0);
	int nTmp(0);
	int nCnt(0);
	vector<int> v;

	cin >> nCase;
	
	for (int i = 0; i < nCase; i++)
	{
		cin >> nTmp;
		v.push_back(nTmp);
	}

	cin >> nCmp;

	for (int i = 0; i < nCase; i++)
	{
		if (v.at(i) == nCmp) nCnt++;
	}

	cout << nCnt;
	return 0;
}