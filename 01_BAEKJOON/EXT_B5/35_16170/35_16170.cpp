#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	time_t timer = time(NULL);
	struct tm t;
	localtime_s(&t, &timer);

	cout << 1900 + t.tm_year << '\n';

	cout.width(2);
	cout.fill('0');

	cout << t.tm_mon+1 << '\n';

	if (t.tm_hour < 5)
	{
		cout.width(2);
		cout.fill('0');

		cout << t.tm_mday-1 << '\n';
	}
	else
	{
		cout.width(2);
		cout.fill('0');

		cout << t.tm_mday << '\n';
	}


	return 0;
}