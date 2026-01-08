#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
    int length1 = static_cast<int>(strlen(s1));
    int length2 = static_cast<int>(strlen(s2));

    if (length1 == 0) {
        return 0;
    }
    if (length1 > length2) {
        return -1;
    }

    for (int i = 0; i <= length2 - length1; ++i) {
        int j = 0;
        for (; j < length1; ++j) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == length1) {
            return i; // 找到匹配，返回起始下标
        }
    }
    return -1;
}

int main()
{
    const int max = 100;
    char s1[max];
    char s2[max];

    cout << "Enter the first string: ";
    cin.getline(s1, max);

    cout << "Enter the second string: ";
    cin.getline(s2, max);

    int result = indexOf(s1, s2);
    cout << "indexOf(" << '\"' << s1 << '\"' << ", " << '\"' << s2 << '\"' << ") is " << result << endl;
    return 0;
}