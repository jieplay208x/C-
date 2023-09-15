#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////int chang(int x)
////{
////	int i = 10;
////	int count = 0;
////	for (i = 10; ; i *= 10)
////	{
////		if (x / i == 0)
////		{
////			return count;
////		}
////		count++;
////	}
////}
//
//int he(int x)
//{
//	/*int s = chang(x);*/
//
//
//
//	if (x >= 10)
//	{
//	
//
//		return he(x / 10) + x % 10;
//	}
//	else
//	{
//		return x; 
//	}
//}
//int mian()
//{
//	int a = 1729;
//	//scanf_s("%d", &a);
//	int sum = he(a);
//
//	printf("%d",sum );
//
//
//	return 0;
//}
//int main()
//{
//	printf("nihao");
//	return 0;
//}
//int Digitsum(int n)
//{
//	if (n > 9)
//	{
//		return Digitsum(n / 10) + n % 10;
//
//	}
//	else
//	{
//		return n;
//	}
//}
//int mian()
//{
//	int a = 1927;
//	int sum = Digitsum(a);
//	printf("%d\n", sum);
//
//	return 0;
//}
//nµÄk´Î·½
double ji(int x,int y)
{
	if (y > 0)
	{
		return ji(x,y-1) * x;
	}
	else if (y == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / ji(x, -y);
	}
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	double sum = ji(a,b);

	printf("%lf\n", sum);

	return 0;
}