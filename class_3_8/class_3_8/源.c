#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef unsigned int u_int;
//typedef  �����ض���
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main() 
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//extern �����ⲿ���ŵ�
//extern int am;
//int main()
//{
//	printf("%d ", am);
//	return 0;
//}
extern int add(int x,int y);

int main()
{
	int a = 1;
	int b = 2;
	int sum = add(a, b);
	printf("%d ", sum);
	return 0;
}