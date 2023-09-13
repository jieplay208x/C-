#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1~100中9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//
//	for (i = 0; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int m = 1;
//	int n = 1;
//	scanf("%d", &a);
//	for (m; m <= a; m++)
//	{
//		for (n=1; n <= m; n++)
//		{
//			printf("%d*%d=%-2d ", n, m, n * m);
//		}
//		if (n > m)
//		{
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//int my_chang(char* sty)
//{
//	int count = 0;
//
//	while (*sty  != '\0')
//	{
//		count++;
//		sty++;
//	}
//	return count;
//}
//
//void fan_z(char* sty)
//{
//	int z = 0;
//	int y = my_chang(sty)-1;
//
//	while (z < y)
//	{
//		char tmp = *(sty+z);
//		*sty = *(sty + y);
//		*(sty + y) =tmp;
//		z++;
//		y--;
//		
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	fan_z(arr);
//	printf("%s", arr);
//	return 0;
//}
int my_chang(char* sty)
{
	int count = 0;

	while (*sty  != '\0')
	{
		count++;
		sty++;
	}
	return count;
}
//void fan_z(char*sty)
//{
//	int z = 0;
//	int y = my_chang(sty)-1;
//
//		while (z < y)
//	{
//		char tmp = *(sty+z);
//		*(sty+z) = *(sty + y);
//		*(sty + y) =tmp;
//		z++;
//		y--;
//		
//	}
//}
void fan_z(char* sty)
{
	int z = 0;
	int y= my_chang(sty) - 1;
	char tmp = *sty ;
	*sty = *(sty + y);
	*(sty + y) = '\0';
	if (my_chang(sty+1) >= 2)
	{
		fan_z(sty + 1);
	}
	*(sty + y) = tmp;



}


int main()
{
	char arr[] = "abcdef";
	fan_z(arr);
	printf("%s", arr);
	return 0;
}