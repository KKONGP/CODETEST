#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string szInput = "";
	string szTmp = "";

	cin >> szInput;

	for (int i = 0; i < szInput.size(); i++)
	{
		if ('A' <= szInput[i] && szInput[i] <= 'Z')
		{
			szInput[i] += 32;
		}
		else if ('a' <= szInput[i] && szInput[i] <= 'z')
		{
			szInput[i] -= 32;
		}
	}

	cout << szInput << '\n';
	return 0;
}
