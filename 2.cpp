#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define pi 3.14
using namespace std;
int main()
{
	double r, h, v;
	cout << "This is a program for calculating the volume of a cone.Please input the radius of the base of the cone and the height of the cone." << endl;
	cin >> r >> h;
	v = pi * r * r * h;

	cout << "The volume of the cone is" << v << endl;
	return 0;
}
