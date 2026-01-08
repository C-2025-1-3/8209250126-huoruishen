#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
int main()
{
    const int N = 100;
    // 使用下标 1..100，初始化为 false（关闭）
    bool situation[N + 1] = { false };

    // 每个学生 i 从 Li 开始，每隔 i 个柜子切换一次状态
    for (int student = 1; student <= N; ++student) {
        for (int locker = student; locker <= N; locker += student) {
            situation[locker] = !situation[locker];
        }
    }
    bool first = true;
    for (int i = 1; i <= N; ++i) {
        if (situation[i]) {
            if (!first) cout << ' ';
            cout << i;
            first = false;
        }
    }
    cout << endl;
	return 0;
}