#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "short length:" << sizeof(short) << endl;
	cout << "long length:" << sizeof(long) << endl;
	cout << "long long length:" << sizeof(long long) << endl;
	cout << "double length:" << sizeof(double) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "wchar_t length:" << sizeof(wchar_t) << endl;
	return 0;
}