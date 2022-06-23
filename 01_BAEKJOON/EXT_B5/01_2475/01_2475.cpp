#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int nNum[5] = { 0, };
	int nRes(0);
	string szRes;
	string szTmp;

	cin >> nNum[0] >> nNum[1] >> nNum[2] >> nNum[3] >> nNum[4];

	nRes = (nNum[0] * nNum[0] + nNum[1] * nNum[1] + nNum[2] * nNum[2] + nNum[3] * nNum[3] + nNum[4] * nNum[4]) % 10;

	cout << nRes << '\n';

	return 0;
}