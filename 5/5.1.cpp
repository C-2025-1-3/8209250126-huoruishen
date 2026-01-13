#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
class Time
{
private:
private:
    int hour;
    int minute;
    int sec;

public:
    Time(int h = 0, int m = 0, int s = 0)
        : hour(h), minute(m), sec(s)
    {
    }

    // 在类体内定义输入成员函数
    void Input()
    {
        cin >> hour >> minute >> sec;
    }

    // 在类体内定义输出成员函数
    void Print() const
    {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};
int main()
{
	Time t1;      // 对象
    t1.Input();   // 通过成员函数输入
    t1.Print();   // 通过成员函数输出
    return 0;
}