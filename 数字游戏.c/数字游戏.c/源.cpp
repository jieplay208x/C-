#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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