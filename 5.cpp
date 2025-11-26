#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	double f, t;
	cin >> f;
	t = f - 46;
	cout << "t=" << setprecision(2) << t << endl;
	return 0;
}