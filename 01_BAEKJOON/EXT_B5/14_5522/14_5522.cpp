﻿#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int nInput[5] = { 0, };
	int nSum(0);

	for (int i = 0; i < 5; i++)
	{
		cin >> nInput[i];
		nSum += nInput[i];
	}

	cout << nSum << '\n';

	return 0;
}