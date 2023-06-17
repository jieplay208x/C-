#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个函数判断是不是闰年
//不懈返回类型默认int
//int run(int x)
//{
//	return ((x % 400 == 0) || ((x % 4 == 0) && (x % 100 != 0)));
//
//}
//int main()
//{
//	int n = 0;
//	int a = 0;
//	for (n = 1000; n <= 2000; n++)
//	{
//		
//		int m = run(n);
//		if (m == 1)
//		{
//			printf("%d ", n);
//			a++;
//		}
//
//	}
//	printf("\n%d", a);
//	return 0;
//}
//函数，整形有序数组的二分查找
int zhao(int a[], int k, int s)
{
	int z = 0;
	int y = s- 1;
	int min = (z + y) / 2;

	while (z <= y)
	{
		if (a[min]<k)
		{
			z = min + 1;
		}
		else if (y < a[min])
		{
			y = min - 1;
		}
		else
		{
			return min;
		}
	}
	return -1;

}
int mian()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = zhao(arr, key, sz);
	if (i == -1)
	{
		printf("找不到。\n");
	}
	else
	{
		printf("找到了，下标是：%d", i);
	}
	 
	return 0;
}