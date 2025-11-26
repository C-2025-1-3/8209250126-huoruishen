#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if(a+b>c||a+c>b||b+c>a)
	{
		if (a == b || a == c || b == c)
		{
			cout << "equicrural triangle" << endl;
		}
		else
		{
			cout << "Isn't equicrural triangle" << endl;
		}
	}
	else
	{
		cout << "Isn't equicrural triangle" << endl;
	}
	return 0;
}