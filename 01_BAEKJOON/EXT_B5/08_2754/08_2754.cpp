#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string	szInput = "";
	double	nScore(0.0);
	
	cin >> szInput;

	if (szInput.compare("A+") == 0)
	{
		nScore = 4.3;
	}
	else if (szInput.compare("A0") == 0)
	{
		nScore = 4.0;
	}
	else if (szInput.compare("A-") == 0)
	{
		nScore = 3.7;
	}
	else if (szInput.compare("B+") == 0)
	{
		nScore = 3.3;
	}
	else if (szInput.compare("B0") == 0)
	{
		nScore = 3.0;
	}
	else if (szInput.compare("B-") == 0)
	{
		nScore = 2.7;
	}
	else if (szInput.compare("C+") == 0)
	{
		nScore = 2.3;
	}
	else if (szInput.compare("C0") == 0)
	{
		nScore = 2.0;
	}
	else if (szInput.compare("C-") == 0)
	{
		nScore = 1.7;
	}
	else if (szInput.compare("D+") == 0)
	{
		nScore = 1.3;
	}
	else if (szInput.compare("D0") == 0)
	{
		nScore = 1.0;
	}
	else if (szInput.compare("D-") == 0)
	{
		nScore = 0.7;
	}
	else if (szInput.compare("F") == 0)
	{
		nScore = 0.0;
	}

	cout << fixed;
	cout.precision(1);
	cout << nScore << '\n';
	return 0;
}
