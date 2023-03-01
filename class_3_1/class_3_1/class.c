#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d ", ~a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，后++
//	printf("%d \n", a);//11
//	printf("%d \n", b);//10
//	//int a = 10;
//	//int b = ++a;//前置++，先++，后使用
//	//printf("%d \n", a);//11
//	//printf("%d \n", b);//11
//	return 0;
//}
//int main()
//{
//	int a =(int) 3.14;//强制类型转换，不推荐使用，只需要知道有这个语法就行。
//	printf("%d", a);
//	return 0;
//}
int main()
{
	int a = 6;
	int b = 8;
	int c = 9;
	int d = (a = c - 1, b = a + 2, c = b - 9);
	//int max = a > b ? a : b;
	//printf("%d", max);
	printf("%d", d);
	return 0;
}