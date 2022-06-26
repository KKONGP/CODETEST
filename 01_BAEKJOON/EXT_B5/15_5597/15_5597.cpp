#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int		nInput(0);
	bool	bAtt[30] = { false, };

	for (int i = 0; i < 28; i++)
	{
		cin >> nInput;

		bAtt[nInput-1] = true;
	}


	for (int i = 0; i < 30; i++)
	{
		if (bAtt[i] == false)
			cout << i+1 << '\n';
	}

	return 0;
}

