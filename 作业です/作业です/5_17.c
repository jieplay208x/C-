#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���������Ľϴ�ֵ
//1.
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		printf("���ֵ��%d\n", a);
//	}
//	else
//	{
//		printf("���ֵ��%d\n", b);
//	}
//	return 0;

//}
//2.
//int MAX(int x, int y)
//{
//	if(x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = MAX(a ,b);
//	printf("���ֵ��%d", m);
//	return 0;
//}
//С�ɻ�
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}
//5��������
int main()
{
	int m=0;
	scanf("%d\n", &m);
	if (m % 5 == 0)
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}