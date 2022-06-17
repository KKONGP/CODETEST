#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> nNum1;
	vector<int> nNum2;

	bool flag_ext = false;

	while (!cin.eof())
	{
		int num1(0), num2(0);

		cin >> num1 >> num2;

		nNum1.push_back(num1);
		nNum2.push_back(num2);
	}

	for (int i = 0; i < nNum1.size() - 1; i++)
	{
		cout << nNum1[i] + nNum2[i] << '\n';
	}


	return 0;
}
