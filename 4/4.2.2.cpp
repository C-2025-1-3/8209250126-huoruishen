//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int indexOf(const char s1[], const char s2[])
//{
//    int length1 = static_cast<int>(strlen(s1));
//    int length2 = static_cast<int>(strlen(s2));
//
//    if (length1 == 0) {
//        return 0;
//    }
//    if (length1 > length2) {
//        return -1;
//    }
//
//    for (int i = 0; i <= length2 - length1; ++i) {
//        int j = 0;
//        for (; j < length1; ++j) {
//            if (s2[i + j] != s1[j]) {
//                break;
//            }
//        }
//        if (j == length1) {
//            return i; // 找到匹配，返回起始下标
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    const int max = 100;
//    char s1[max];
//    char s2[max];
//
//    cout << "Enter the first string: ";
//    cin.getline(s1, max);
//
//    cout << "Enter the second string: ";
//    cin.getline(s2, max);
//
//    int result = indexOf(s1, s2);
//    cout << "indexOf(" << '\"' << s1 << '\"' << ", " << '\"' << s2 << '\"' << ") is " << result << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int parseHex(const char* const hexString)
//{
//    int result = 0;
//    const char* p = hexString;
//    for (; *p != '\0'; ++p) {
//        char c = *p;
//        int digit = 0;
//        if (c >= '0' && c <= '9') {
//            digit = c - '0';
//        }
//        else if (c >= 'a' && c <= 'f') {
//            digit = 10 + (c - 'a');
//        }
//        else if (c >= 'A' && c <= 'F') {
//            digit = 10 + (c - 'A');
//        }
//        else {
//            break;
//        }
//        result = result * 16 + digit;
//    }
//    return result;
//}
//
//int main()
//{
//    cout << "parseHex(\"A5\") = " << parseHex("A5") << " (应为165)" << endl;
//    char buf[100];
//    cout << "请输入十六进制字符串（回车结束）: ";
//    if (cin.getline(buf, sizeof(buf))) {
//        cout << "转换结果: " << parseHex(buf) << endl;
//    }
//    return 0;
//}
#include <iostream>

using namespace std;

// 将数组按从小到大排序（选择排序），使用指针运算访问元素
void paixv(int* arr, int n)
{
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (*(arr + j) < *(arr + minIndex)) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int tmp = *(arr + i);
            *(arr + i) = *(arr + minIndex);
            *(arr + minIndex) = tmp;
        }
    }
}

int main()
{
    int n = 0;
    cout << "请输入元素个数 n: ";
    if (!(cin >> n) || n <= 0) {
        cerr << "无效的元素个数 n。" << endl;
        return 1;
    }

    // 申请动态数组（在已知 n 之后）
    int* arr = new (nothrow) int[n];
    if (!arr) {
        cerr << "内存分配失败。" << endl;
        return 1;
    }

    cout << "请输入 " << n << " 个整数（空格或回车分隔）: ";
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i); // 使用指针方式写入
    }

    // 输出原始数组（同时显示指针地址和指针指向的值）
    cout << "\n排序前（地址 : 值）:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << (void*)(arr + i) << " : " << *(arr + i) << endl;
    }

    // 排序
    paixv(arr, n);

    // 用指针方式输出排序后元素（只用指针遍历，不使用下标）
    cout << "\n排序后（通过指针遍历输出值）:" << endl;
    int* p = arr;
    for (int i = 0; i < n; ++i, ++p) {
        cout << *p;
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    // 释放动态内存
    delete[] arr;
    arr = nullptr;

    cout << "\n已释放动态数组内存。" << endl;
    return 0;
}