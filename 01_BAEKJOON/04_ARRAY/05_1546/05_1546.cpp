#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int nSubject(0);
	int nMax(0);
	double nSum(0.0);

	cin >> nSubject;
	double* nScore = new double[nSubject];



	for (int i = 0; i < nSubject; i++)
	{
		cin >> nScore[i];
		if (nMax < nScore[i])	nMax = nScore[i];
	}

	for (int i = 0; i < nSubject; i++)
	{
		nScore[i] = 100 * nScore[i] / nMax;
		nSum += nScore[i];
	}

	cout << nSum / (double)nSubject << '\n';

	delete[] nScore;
	return 0;
}