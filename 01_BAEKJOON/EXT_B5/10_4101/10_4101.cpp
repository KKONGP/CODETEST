#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arrInput[2] = {-1,-1};
 
	while (arrInput[0] != 0 && arrInput[1] != 0)
	{
		cin >> arrInput[0] >> arrInput[1];

		if (arrInput[0] > arrInput[1])
		{
			cout << "Yes" << '\n';
		}
		else
		{
			if (arrInput[0] != 0 && arrInput[1] != 0)
			{
				cout << "No" << '\n';
			}

		}

	}

	return 0;
}

