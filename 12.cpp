#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 5)
    {
        int j = 1; // 每次外层循环重置 j
        while (j <= i)
        {
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}