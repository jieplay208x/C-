#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��
int main()
{
	////int a = 0;
	////scanf("%d", &a);
	////if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
	////{
	////	printf("%d������\n",a);
	////}
	////else
	////{
	////	printf("%d������\n",a);
	////}
	//
	////��
	////int days = 0;
	////scanf("%d", &days);
	////int week = days / 7;
	////int day = days % 7;
	////printf("%d����%d��", week, day);

	////����
	
	
	char input;
	scanf("%c", &input);
	if ('0' <= input && '9' >= input)
	{
		printf("������Ϊ����\n");
	}
	else if (('A' <= input && input <= 'Z') || ('a' <= input && 'z' >= input))
	{
		printf("������Ϊ��ĸ\n");
	}
	else
	{
		printf("������Ϊ����\n");
	}
	
	return 0;
}