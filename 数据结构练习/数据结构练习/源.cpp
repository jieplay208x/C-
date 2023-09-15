#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int c = arr[0];
//	int k = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > c)
//		{
//			c = arr[i];
//		}
//	}
//	for (i = 1; i < 10; i++)
//	{
//		if (k != c)
//		{
//			if (arr[i] > k&&arr[i]!=c)
//			{
//				k = arr[i];
//			}
//		}
//	}
//	printf("%d\n%d", c,k);
//int b(int*Arr,int y)
//{
//
//	int m = Arr[y];
//	int n = Arr[y + 1];
//	if (m > n)
//	{
//		return m;
//	}
//
//	return n;
//}
//int main()
//{
//	int arr[8] = { 2,5,3,1,6,8,4,7 };
//	int i = 0;
//	int q, w, e, r;
//	for (i = 0; i < 7; i+=2)
//	{
//		int max;
//		max = b(arr, i);
//		printf("%d\n", max);
//	}
//
//	return 0;
//
//}
int chang(int x)
{
	int i = 10;
	int count = 0;
	for (i = 10; ;i *= 10)
	{
		if (x / i == 0)
		{
			return count;
		}
		count++;
	}
}
int he(int x)
{
	int s = chang(x);
	int i = 10 ^ s;
	int n = 0;
	n = x / i + n;
	if (s != 0)
	{
		he(x % i);
	}
	return n;
}
int mian()
{
	int a = 1729;
	//scanf_s("%d", &a);


	printf("%d", he(a));


	return 0;
}