#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ADD(x,y) ((x)+(y))
//enum aex
//{
//	wuman,
//	man
//};
////int er_shu(unsigned int x)
////{
////	int a = 0;
////	if (x > 1)
////	{
////		a = x % 2;
////		return er_shu(x / 2) + a;
////	}
////}
////int main()
////{
////	int n = 3;
////	printf("%d", er_shu(n));
////
////	return 0;
////}
////int er_shu( int x)
////{
////	int count = 0;
////	int i = 0;
////	for (i = 1; i <= 32; i++)
////	{
////		if (((x >> i) & 1) == 1)
////		{
////			count++;
////		}
////	}
////	return count;
////}
////int er_shu(int x)
////{
////	int count = 0;
////	while (x)
////	{
////		x = (x & (x - 1));
////		count++;
////	}
////	return count;
////}
////int main()
////{
////	int n = 0;
////	printf("%d", er_shu(n));
////
////	return 0;
////}
////void pan(int x)
////{
////	/*int i = 0;
////	int count = 0;;
////	for (i = 0; i < 32; i++)
////	{
////		if (((x >> i) & 1) == 1)
////		{
////			count++;
////		}
////	}
////	if (count == 1)
////	{
////		printf("是");
////	}
////	else
////	{
////		printf("不是");
////	}*/
////	if ((x & (x - 1)) == 0)
////	{
////		printf("是");
////	}
////	else
////	{
////		printf("不是");
////	}
////}
////int main()
////{
////	int n = 1023;
////	pan(n);
////	return 0;
////}
//int acc(int x)
//{
//	static int a = 1;
//	a++;
//	return a;
//}
//int main()
//{
//	extern int am;
//	/*int a, b;*/
//	/*scanf("%d%d", &a, &b);
//	printf("%d\n", ADD(a, b));*/
//	printf("%d\n", am);
//
//	int x = 0;
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d\n",acc(x));
//	}
//	printf("%d", man);
//	return 0;
//}