#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1) return false;
	if (num == 2) return true;
	if (num % 2 == 0) return false;
	for (int i = 3; i * i <= num; i += 2)
	{
		if (num % i == 0) return false;
	}
	return true;
}
int main()
{
	const int total = 200;
	int result[total];
	int count = 0;
	int n = 2;

	// 收集前 200 个素数，连续存放到 result[0..199]
	while (count < total)
	{
		if (is_prime(n))
		{
			result[count++] = n;
		}
		++n;
	}
	for (int i = 0; i < total; ++i)
	{
		cout << result[i];
		if ((i + 1) % 10 == 0) cout << '\n';
		else cout << ' ';
	}

	return 0;
}