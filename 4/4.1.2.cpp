#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
void function(double x[10])
{
    double y;
    bool changed;
    do
    {
        changed = false;
        for (int j = 0; j < 9; j++)
        {
            if (x[j] > x[j + 1])
            {
                y = x[j];
                x[j] = x[j + 1];
                x[j + 1] = y;
                changed = true;
            }
        }
    } while (changed);
}




int main()
{
    double numbers[10];
    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; ++i) {
        if (!(cin >> numbers[i])) {
            return 0;
        }
    }
    function(numbers);
    cout << "The numbers are: ";
    for (int i = 0; i < 10; ++i) {
        if (i) cout << ' ';
        cout << numbers[i];
    }
    cout << endl;
	return 0;
}