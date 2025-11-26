#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    if (!getline(cin, line)) return 0;

    int letters = 0;
    int spaces = 0;
    int digits = 0;
    int others = 0;
    int n = static_cast<int>(line.size());
    for (int i = 0; i < n; ++i)
    {
        char c = line[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            ++letters;
        else if (c == ' ')
            ++spaces;
        else if (c >= '0' && c <= '9')
            ++digits;
        else
            ++others;
    }

    cout << "英文字母: " << letters << endl;
    cout << "空格: " << spaces << endl;
    cout << "数字: " << digits << endl;
    cout << "其它: " << others << endl;

    return 0;
}