#include <iostream>

using namespace std;

int main()
{
	int nNumCase(0), nNumBoundary(0);

	cin >> nNumCase >> nNumBoundary;

	int* nNum = new int[nNumCase];
	if (((nNumCase > 10000) || (nNumCase < 1)) || ((nNumBoundary > 10000) || (nNumBoundary < 1)))
	{
		cout << "자연수의 범위를 확인하세요" << '\n';
		return 0;
	}

	for (int i = 0; i < nNumCase; i++)
	{
		cin >> nNum[i];
	}


	for (int i = 0; i < nNumCase; i++)
	{
		if (nNum[i] < nNumBoundary)
			cout << nNum[i] << ' ';
	}

	return 0;
}
