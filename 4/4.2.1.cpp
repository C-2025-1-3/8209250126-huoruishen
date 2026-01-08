//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//void main()
//{
//int i, j, * pi, * pj;     //此处的*表示定义指针变量，而非间接运算符
//pi = &i;
//pj = &j;
//i = 5; j = 7;
//cout << i << '\t' << j << '\t' << pi << '\t' << pj<<endl;
//cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
//}



//#include <stdio.h>
//int main(void)
//{
//    int a[] = { 1, 2, 3 };
//    int* p = a; /* 将数组 a 的首地址赋给 p */
//    int i;
//
//    puts("index, a[i], p[i], *(p+i), *(a+i), &a[i], p+i");
//    for (i = 0; i < 3; ++i)
//    {
//        printf(" %d, %d, %d, %d\n",
//            a[i],
//            p[i],
//            *(p + i),
//            *(a + i));
//    }
//
//    return 0;
//}


//#include <stdio.h>
//
//void f(char* st, int i)
//{
//    if (i < 0) return;
//    st[i] = '\0';
//    printf("%s\n", st);
//    if (i > 1) f(st, i - 1);
//}
//
//int main(void)
//{
//    char st[] = "abcd";
//    f(st, 4);
//    return 0;
//}




#include <iostream>
using namespace std;

int* f()
{
    static int list[] = { 1, 2, 3, 4 }; // static 存放在静态存储区，函数外依然有效
    return list;
}

int main()
{
    int* p = f();
    cout << p[0] << endl;
    cout << p[1] << endl;
    return 0;
}
