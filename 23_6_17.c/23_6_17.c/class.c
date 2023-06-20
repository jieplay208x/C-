#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"
//写一个函数，调用一次num+1
//void j_j(int* pnum)
//{
//	(*pnum)++;
//}
//int mian()
//{
//	int a = 1;
//	int b = 2;
//	int up = add(a, b);
//	int num = 0;
//	j_j(&num);
//	printf("%d", num);
//	return 0;
//}
//递归函数
//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x);
//}
//int mian()
//{
//	unsigned int num = 0;
//	scandf("%d ", &num);
//	print(num);
//	return 0;
//}
//#include<string.h>
//int my_strlen(char* pch)
//{
//	if (*pch != '\0')
//	{
//		return 1 + my_strlen(pch + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char ch[] = "abc";
//	/*printf("%d",strlen(ch) );*/
//	printf("%d ", my_strlen(ch));
//	return 0;
//}
//阶层
//int mian()
//{
//	int i = 0;
//	int n = 5; 
//	
//	int m = 1;
//
//
//	printf("%d", m);
//	return 0;
//}
//int jc(int x)
//{
//	if (x <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * jc(x - 1);
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d", jc(i));
//	return 0;
//}
//第n个斐波那契数
//int fac(int x)//计算慢
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fac(x - 1) + fac(x - 2);
//	}
//}
//int mian()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fac(n));
//	return 0;
//}
int fac(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}
int mian()
{
	int i = 0;
	scanf("%d", &i);
	int ret = fac(i);
	printf("%d", ret);
	return 0;
}