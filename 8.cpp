#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	cout << "This is a simple calculator that supports addition, subtraction, multiplication and division." << endl;
	char c;
	double x, y, z;
	cin >> x >> c >> y;
	switch (c)
	{
	case '+':
		z = x + y;
		cout << "the  result is" << z << endl;
		break;
	case '-':
		z = x - y;
		cout << "the  result is" << z << endl;
		break;
	case '*':
		z = x * y;
		cout << "the  result is" << z << endl;
		break;
	case '/':
		z = x / y;
		cout << "the  result is" << z << endl;
		break;
	}



	return 0;
}