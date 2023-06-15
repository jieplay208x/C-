#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int get_max(int x, int y)//形式参数
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//实际参数
//	printf("%d", max);
//	return 0;
//}
//void swap(int* pa, int* pb)//形式参数
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	swap(&a, &b);//实际参数
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}
//写一个函数，判断一个数是不是素数
//int su(int x)
//{
//	int a = 0;
//	for (a = 2; a < x; a++)
//	{
//		if (x % a == 0)
//		{
//	
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (su(n)==1)
//	{
//		printf("是素素");
//
//	}
//	else
//	{
//		printf("不是素素");
//	}
//	return 0;
//}
int mian()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int a = 0;
		for (a = 2; a < i; a++)
		{
			if (i % a == 0)
			{
				break;
			}
		}
		if (i == a)
		{
			printf("%d ", i);
		}
		
	}

	return 0;
}