#define _CRT_SECURE_NO_WARNINGS
#include <iostream>             //将类声明头文件包含进来
#include "student.h"
int main()
{
	Student stud;                //定义对象
	Student stud1;
	stud.display();              //执行stud对象的display函数
	stud1.set_value(007, "tcg", 'm');
	stud1.display();
	return 0;
}
