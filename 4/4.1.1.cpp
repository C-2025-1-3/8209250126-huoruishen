#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
    int content[10];
    int numbers[10];
    int count = 0; // 已收集的不同元素数量

    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; ++i) {
        if (!(cin >> numbers[i])) {
            return 0;
        }
    }

    for (int i = 0; i < 10; ++i) {
        bool found = false;
        for (int j = 0; j < count; ++j) {
            if (numbers[i] == content[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            content[count++] = numbers[i];
        }
    }

    cout << "The distinct numbers are: ";
    for (int i = 0; i < count; ++i) {
        if (i) cout << ' ';
        cout << content[i];
    }
    cout << endl;
    return 0;
}