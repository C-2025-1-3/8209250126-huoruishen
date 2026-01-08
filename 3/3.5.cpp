#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int peach(int a)
{
    int day = 10;
    while (day > 0)
    {
        a = (a + 1) * 2;
        day--;
    }
    return a;
}
int main()
{
	int sum = 1;
	sum = peach(sum);
	cout << "sum=" << sum << endl;
	return 0;
}