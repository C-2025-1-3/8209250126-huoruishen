#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	cout << "请输入两个正整数" << endl;
	int a, b;
	int result1 = 1;//公约数
	int result2 = 1;//公倍数
	cin >> a >> b;
	if (a <= 0 || b <= 0)//判断是否为正整数
	{
		cout << "error" << endl;
	}
	else
	{
		int x = a, y = b;
		while (y != 0)
		{
			int t = x % y;
			x = y;
			y = t;
		}
		result1 = x;
		result2 = a / (result1 * b);
		cout << "最大公约数: " << result1 << endl;
		cout << "最小公倍数: " << result2 << endl;




	}


	return 0;
}