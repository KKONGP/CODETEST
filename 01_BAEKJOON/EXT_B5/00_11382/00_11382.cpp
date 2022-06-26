#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unsigned long long nInput(0);
	unsigned long long nResult(0);

	for (int i = 0; i < 3; i++)
	{
		cin >> nInput;
		nResult += nInput;
	}

	cout << nResult << '\n';

	return 0;
}

