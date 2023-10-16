#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int am = 100;
//void Jh(int *n,int *m)
//{
//	int tmp = *n;
//	*n = *m;
//	*m = tmp;
//}
int main()
{
	//int m = 0;
	//int n = 0;
	//int count = 0;
	//scanf("%d%d", &m, &n);
	///*int i = 0;
	//int count = 0;
	//for (i = 0; i < 32; i++)
	//{
	//	if (((m >> i) & 1) != ((n >> i) & 1))
	//	{
	//		count++;
	//	}
	//}
	//printf("%d", count);*/

	//int ret = m ^ n;
	//while (ret)
	//{
	//	ret = (ret & (ret - 1));
	//	count++;
	//}
	//printf("%d", count);
	/*int n = 0;
	scanf("%d", &n);
	int i = 0;
	printf("偶数项：");
	for (i = 31; i >= 1; i-=2)
	{	
		printf("%d ", (1 & (n >> i)));	
	}
	printf("\n奇数项：");
	for (i = 30; i >= 0; i-=2)
	{
		printf("%d ", (1 & (n >> i)));
	}*/
	//int n = 2;
	//int m = 3;
	//printf("n=%d,m=%d\n", n, m);
	///*Jh(&n,&m);*/
	//n = n ^ m;
	//m = n ^ m;
	//n = n ^ m;
	//printf("n=%d,m=%d", n, m);
	int arr[] = { 1,2,3,4,5,6 };
	short* p = (short*)arr;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		*(p + i) = 0;
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}