#include <iostream>


using namespace std;

int main()
{
	int nNum(0), nNumRef(0),nNumNew(0), nCnt(0);
	int nFront(0), nBack(0);

	bool flag_ext = false;
	cin >> nNum;

	if (nNum > 99 || nNum < 0)
	{
		cout << "값을 확인하세요" << '\n';
		return 0;

	}

	nNumRef = nNum;
	while (!flag_ext)
	{
		if (nNum < 10)
		{
			nNum * 10;
		}
		nFront = nNum/10;
		nBack = nNum % 10;
		nNumNew = nFront + nBack;
		nNum = (nNum % 10) * 10 + (nNumNew % 10);

		if (nNum == nNumRef)
			flag_ext = true;

		nCnt++;
	}
	cout << nCnt << '\n';

	return 0;
}
