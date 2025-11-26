#include <iostream>
#include <string>
#include <cctype>  // for isalpha(), isdigit(), isspace()

using namespace std;

int main() {
    string input;
    int letterCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;

    cout << "请输入一行字符: ";
    getline(cin, input);  // 获取用户输入的一行字符

    for (char ch : input) {
        if (isalpha(ch)) {         // 判断是否是字母
            letterCount++;
        }
        else if (isspace(ch)) {    // 判断是否是空格
            spaceCount++;
        }
        else if (isdigit(ch)) {    // 判断是否是数字
            digitCount++;
        }
        else {                     // 其他字符
            otherCount++;
        }
    }

    cout << "英文字母个数: " << letterCount << endl;
    cout << "空格个数: " << spaceCount << endl;
    cout << "数字字符个数: " << digitCount << endl;
    cout << "其他字符个数: " << otherCount << endl;

    return 0;
}
