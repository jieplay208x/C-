#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef unsigned int u_int;
//typedef  类型重定义
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}
void test()
{
	int a = 1;
	a++;
	printf("%d ", a);
}
int main()
{
	int i = 0;
	while (i < 10);
	{
		test();
		i++;

	}
	return 0;
}