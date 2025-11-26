#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    if (!(cin >> a)) return 0;

    if (a < 0) {
        cout << "error" << endl;
        return 0;
    }
    if (a == 0.0) {
        cout << "0.000000" << endl;
        return 0;
    }
    double x = a;
    const double n = 1e-5;
    while (true)
    {
        double xn = 0.5 * (x + a / x);
        if ((xn - x) < n)
        {
            cout << fixed << setprecision(6) << xn << endl;
            break;
        }
        x = xn;
    }
	return 0;
}