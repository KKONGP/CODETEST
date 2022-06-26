#include <iostream>
#include <string>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string szInput ="";

	int arrOK[6] = { 1, 1, 2, 2, 2, 8};
	int arrDif[6] = { 0, };
	int nK(0), nQ(0), nL(0), nV(0), nN(0), nP(0);

	for (int i = 0; i < 6; i++) {

		cin >> arrDif[i];

	}

	for (int i = 0; i < sizeof(arrOK) / sizeof(int); i++)
	{
		arrOK[i] -= arrDif[i];
		cout << arrOK[i] << " ";
	}

	return 0;
}

