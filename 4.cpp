#define _CRT_SECURE_NO_WARNINGS
#include <iostream>  
#include <iomanip>                                  
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//0xfffe   
	cout << "output in unsigned int  type:" << testUnint << endl;//<<oct;         
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;  //为什么结果为-2？
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出	system("pause");                                             
	cout << "output in oct type" << oct << testUnint << endl; //8进制输出

	int a = 0.5;
	cout << static_cast<int>(a) << endl;	
	return 0;
}
