#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T>
void vector_release(vector<T>& vec);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int nNum_Student(0);
	int nNum_Subject(0);
	int nNum_Score_tmp(0);
	int nNum_Score(0);
	int nNum_Cnt(0);
	double nNum_average(0.0);

	vector<int>		nArrNum_Cnt;
	vector<int>		nArrNum_Subject;
	vector<int>		nArrNum_Score;

	cin >> nNum_Student;

	for (int i = 0; i < nNum_Student; i++)
	{
		cin >> nNum_Subject;
		nArrNum_Subject.push_back(nNum_Subject);

		
		for (int j = 0; j < nNum_Subject; j++)
		{
			cin >> nNum_Score_tmp;
			nArrNum_Score.push_back(nNum_Score_tmp);
			nNum_Score += nNum_Score_tmp;

		}
		nNum_average = (double)nNum_Score / (double)nNum_Subject;

		nNum_Score = nNum_Subject = 0;

		for (int j = 0; j < nArrNum_Score.size(); j++)
		{
			if (nArrNum_Score.at(j) > nNum_average)
			{
				nNum_Cnt++;
			}
		}

		nArrNum_Cnt.push_back(nNum_Cnt);
		nArrNum_Score.clear();
		nNum_Cnt = 0;

	}

	cout << fixed;
	cout.precision(3);

	for (int i = 0; i < nNum_Student; i++)
	{
		cout << 100 * (double)nArrNum_Cnt.at(i)/ (double)nArrNum_Subject.at(i) <<"%" << '\n';
	}


	vector_release<int>(nArrNum_Cnt);
	vector_release<int>(nArrNum_Subject);
	vector_release<int>(nArrNum_Score);

	return 0;
}

template <class T>
void vector_release (vector<T>& vec)
{
	vector<T> vTmp;
	vTmp.swap(vec);
}