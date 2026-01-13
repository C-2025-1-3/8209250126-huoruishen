#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
class volume
{
public:
	int length;
	int width;
	int height;
	void volumeout(int l,int w,int h)
	{
		int v;
		length = l;
		width = w;
		height = h;
		v = length * width * height;
		cout <<"The result is " << v;
	}
};
int main()
{
	volume abc;
	cout << "Please input length width and height:"<<endl;
	int l, w, h;
	cin >> l >> w >> h;
	abc.volumeout(l, w, h);
	return 0;
}