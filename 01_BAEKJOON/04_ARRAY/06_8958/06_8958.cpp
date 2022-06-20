#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string szOX_input;
	string szOX;
	string szOX_single;
	int nCase(0);
	int nNum(0);
	int nScore(0);
	int nCnt(0);
	vector<string> szArrOX;
	vector<int> nArrScore;

	cin >> nCase;

	for (int i = 0; i < nCase; i++)
	{
		cin >> szOX_input;
		szArrOX.push_back(szOX_input);
	}

	for (int i = 0; i < nCase; i++)
	{
		szOX = szArrOX.at(i);
		nNum = szOX.size();
		for (int j = 0; j < nNum; j++)
		{
			szOX_single = szOX[j];

			if (szOX_single.compare("X") == 0)
			{
				nCnt = 0;
				continue;
			}
			else
			{
				nCnt++;
				nScore += nCnt;
			}


		}
		nArrScore.push_back(nScore);
		nScore = 0;
		nCnt = 0;

		cout << nArrScore.at(i) << '\n';
	}

	return 0;
}