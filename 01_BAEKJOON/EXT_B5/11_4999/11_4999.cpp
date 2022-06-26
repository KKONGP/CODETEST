#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string szInput1 = "";
	string szInput2 = "";

	cin >> szInput1;
	cin >> szInput2;

	if (szInput1.size() >= szInput2.size())
	{
		cout << "go" << '\n';
	}
	else
	{
		cout << "no" << '\n';
	}

	return 0;
}

