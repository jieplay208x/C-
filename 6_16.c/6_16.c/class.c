#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ�������ж��ǲ�������
//��и��������Ĭ��int
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
//������������������Ķ��ֲ���
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
		printf("�Ҳ�����\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d", i);
	}
	 
	return 0;
}