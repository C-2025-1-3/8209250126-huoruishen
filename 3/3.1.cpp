#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int function(int x, int y)
{
	int z;
	do
	{
		z = x % y;
		x = y;
		y = z;
	} while (y != 0);

	return x;
}
void swap(int& x, int& y);
int main()
{
	int m, n, result1, result2;
	cin >> m >> n;
	if(m<n)swap(m, n);
	result1 = function(m, n);
	result2 = (n * m) / result1;
	cout <<"result1=" << result1 << endl;
	cout << "result2=" << result2 << endl;
	return 0;
}
void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}