#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	if (0 < x < 10)
	{
		if (x < 5)
		{
			if (x < 1)
			{
				y = 3 - 2 * x;
				cout <<"y=" << y << endl;
			}
			else
			{
				y = 2 / (4 * x) + 1;
				cout << "y=" << y << endl;
			}
		}
		else
		{
			y = x * x;
			cout << "y=" << y << endl;
		}

	}
	else
	{
		cout << "no result" << endl;
	}

	return 0;
}