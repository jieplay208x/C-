#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求两个数的较大值
//1.
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("最大值：%d\n", a);
//	}
//	else
//	{
//		printf("最大值：%d\n", b);
//	}
//	return 0;

//}
//2.
//int MAX(int x, int y)
//{
//	if(x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = MAX(a ,b);
//	printf("最大值：%d", m);
//	return 0;
//}
//小飞机
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}
//5整除问题
int main()
{
	int m=0;
	scanf("%d\n", &m);
	if (m % 5 == 0)
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}