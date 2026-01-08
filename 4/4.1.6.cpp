#include <iostream>   
#include <string>     
#include <cctype>

void count(const std::string& s, int counts[]) {
    // 初始化counts数组为0
    for (int i = 0; i < 26; ++i) {
        counts[i] = 0;
    }
    // 遍历字符串，统计每个字母
    for (char c : s) { 
        if (std::isalpha(c)) {  // 判断是否为字母
            // 统一转为小写，计算对应下标（a->0, b->1...z->25）
            int idx = std::tolower(c) - 'a';
            counts[idx]++;
        }
    }
}

int main() {
    std::string s;  // C++ string类，无需手动指定长度，更安全
    int counts[26];

    // 读取整行输入（包含空格）
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);  // 替代C的fgets，适配string

    // 调用统计函数
    count(s, counts);

    // 输出非零的统计结果
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            std::cout << static_cast<char>('a' + i) << ": "
                << counts[i] << " times" << std::endl;
        }
    }

    return 0;
}