#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//年
int main()
{
	////int a = 0;
	////scanf("%d", &a);
	////if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
	////{
	////	printf("%d是闰年\n",a);
	////}
	////else
	////{
	////	printf("%d非闰年\n",a);
	////}
	//
	////天
	////int days = 0;
	////scanf("%d", &days);
	////int week = days / 7;
	////int day = days % 7;
	////printf("%d周零%d天", week, day);

	////类型
	
	
	char input;
	scanf("%c", &input);
	if ('0' <= input && '9' >= input)
	{
		printf("该类型为数字\n");
	}
	else if (('A' <= input && input <= 'Z') || ('a' <= input && 'z' >= input))
	{
		printf("该类型为字母\n");
	}
	else
	{
		printf("该类型为其他\n");
	}
	
	return 0;
}