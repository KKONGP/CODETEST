#include <stdio.h>

using namespace std;

int main()
{
	int nNum(0);
	int nMax(0), nMin(0);
	int nValue(0);
	const int MAXVAL = -1000000;
	const int MINVAL = 1000000;


	scanf("%d", &nNum);

	if (nNum > 1000000 || nNum < 0)
	{
		printf( "�������� Ȯ���ϼ���\n");
		return 0;
	}

	nMax = MAXVAL;
	nMin = MINVAL;

	for (int i = 0; i < nNum; i++)
	{
		scanf("%d", &nValue);
		if (nValue > 1000000 || nValue < -1000000)
		{
			printf("�������� Ȯ���ϼ���\n");
			return 0;
		}

		if (nMax < nValue)
			nMax = nValue;

		if (nMin > nValue)
			nMin = nValue;

	}

	printf("%d %d", nMin, nMax);
	return 0;
}


// �����Ҵ��� �� �ʿ䰡 ����.
// ������ ���� �ٷιٷ� ó���ϸ� ��.