#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int get_max(int x, int y)//��ʽ����
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
//	int max = get_max(a, b);//ʵ�ʲ���
//	printf("%d", max);
//	return 0;
//}
//void swap(int* pa, int* pb)//��ʽ����
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
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	swap(&a, &b);//ʵ�ʲ���
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}
//дһ���������ж�һ�����ǲ�������
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
//		printf("������");
//
//	}
//	else
//	{
//		printf("��������");
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