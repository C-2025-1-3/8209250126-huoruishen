#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main()
{
	int count = 1;
	double ocel = 40.0;
	double ofah = 120.0;
	cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
	while (count < 10)
	{
		cout << fixed << setprecision(1) << ocel << "    ";
		cout << fixed << setprecision(2) << celsius_to_fah(ocel) << "        |   ";
		cout << fixed << setprecision(1) << ofah << "            ";
		cout << fixed << setprecision(2) << fahrenheit_to_cels(ofah) << endl;
		count++;
		ocel=ocel-1.0;
		ofah=ofah-10.0;
	}

	return 0;
}