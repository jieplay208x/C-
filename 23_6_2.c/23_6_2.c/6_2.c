#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������ִӴ�С����
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}
//��ӡ1~100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//���Լ��
//
//շת�����
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	/*if (b > a)
	{
		int tmp = b;
		b = a;
		a = tmp;
	}
	while (1)
	{
		int c = a % b;
	
		if(c==0)
		{
			printf("%d", b);
			break;
		}
		a = b;
		b = c;
	}*/
	int t = 0;
	while (t = a % b)
	{
		a = b;
		b = t;
	}
	printf("%d", b);

	return 0;
}