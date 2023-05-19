#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	
//	}
//	return 0;
//}
//int main()
//{
//	int age = 30;
//	if (age < 18)
//	{
//		printf("未成年\n");
//
//	}
//	else if (age >= 18 && age < 26)//不能写成(18<=age<26),写法不错，逻辑错误
//	{
//		printf("青年\n");
//	}
//	else if (age < 40)
//	{
//		printf("壮年\n");
//	}
//	return 0;
//
//}
//一个数是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 ==0)
//	{
//		printf("偶数");
//	}
//	else
//	{
//		printf("奇数");
//	}
//
//	return 0;
//}
//输出1~100之间的奇数
//int main()
//{
//	int a = 0;
//	for(a=1;a<=100;a++)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d\n", a);
//		}
//	
//	}
//	return 0;
//}
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	default:
		printf("输入错误\n");
		break;
		
	}
	return 0;
}