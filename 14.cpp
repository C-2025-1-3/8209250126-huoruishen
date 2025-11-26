#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const double a = 0.8;
    int buy = 2;       // 第一天买的个数
    int total = 2;     // 已买总数（包括第一天）
    int days = 1;      // 已买天数

    while (true)
    {
        int next = buy * 2;            // 下一天要买的个数（每天翻倍）
        if (total + next > 100)        // 如果加入下一天会超过 100，则停止
            break;
        total += next;
        buy = next;
        ++days;
    }

    double averagePerDay = (total * a) / days;
    cout << fixed << setprecision(2) << averagePerDay << endl;

    return 0;
}