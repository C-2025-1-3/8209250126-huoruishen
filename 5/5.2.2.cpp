#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include "student.h"
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::cinname(const char* nm)
{
    if (nm) {
        int limit = sizeof(name) - 1; // 留一个位置放终止符
        int i = 0;
        for (; i < limit && nm[i] != '\0'; ++i) {
            name[i] = nm[i];
        }
        name[i] = '\0'; // 确保以 '\0' 结束
    }
    else {
        name[0] = '\0';
    }
}
void Student::set_value(int n, const char* nm, char s)
{
    num = n;
    sex = s;
    cinname(nm);
}