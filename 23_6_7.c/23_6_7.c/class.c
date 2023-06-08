#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1000~2000年之间的闰年
//int main()
//{
//	int s = 0;
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0))||(i%400==0))
//
//		{
//			s++;
//			printf("%d ", i);
//		}		
//	}
//	printf("\n%d ", s);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		
//		for (n = 2; n <= i - 1; n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//
//			}
//		}
//		if (i == n)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
#include<math.h>
//sprt
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int s = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//为真（i是素数）
//		for (n = 2; n <= sqrt(i); n++)//sqrt是开平方函数
//		{
//			if (i % n == 0)
//			{
//				flag = 0;//为假（i不是素数）
//				break;
//
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			s++;
//		}
//	}
//	printf("\n%d\n", s);
//	return 0;
//}
//猜数字游戏
#include<time.h>
#include<stdlib.h>
void mu()
{
	printf("                 \n");
	printf("                 \n");
	printf("      1.play     \n");
	printf("      0.out      \n");
	printf("                 \n");
	printf("                 \n");

}

void game()
{
	int a = rand() % 100 + 1;
	int gauss = 0;

	while (1)
	{
		printf("我猜：");
		scanf("%d", &gauss);
		if (gauss > a)
		{
			printf("猜大了\n");
			
		}
		else if (gauss < a)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int i = 0;
	do
	{
	
		mu();//目录
		printf("请输入：");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();//进入游戏
			break;
		case 0:
			printf("退出游戏。");
			break;
		default:
			printf("识别错误，请重新输入：");
			break;
		}
	} while (i);


	return 0;
}