#define _CRT_SECURE_NO_WARNINGS 1
#include"geam.h"
void num()
{
	printf("************************\n");
	printf("************************\n");
	printf("*****   1.play     *****\n");
	printf("*****   0.退出游戏 *****\n");
	printf("************************\n");
	printf("************************\n");
}
void game()
{
	char arr[Hang][Lei];
	//初始化函数
	arr_C(arr, Hang, Lei);
	//打印棋盘
	arr_D(arr, Hang, Lei);

	while (1)
	{
		//玩家输入
		arr_R(arr, Hang, Lei);
		arr_D(arr, Hang, Lei);


		//电脑输入
		arr_N(arr, Hang, Lei);
		arr_D(arr, Hang, Lei);
		//判输赢
		char ret=arr_P(arr,Hang,Lei);

		if (ret != 'C')
		{
			if (ret == '*')
			{
				printf("玩家赢\n");
				break;
			}
			else if (ret == '#')
			{
				printf("电脑赢\n");
				break;
			}
			else if (ret == 'Q')
			{
				printf("平局\n");
				break;
			}
		}
	}


}
int main()

{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		num();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("不玩滚\n");
			break;
		default:
			printf("请不要睁眼瞎，谢谢：)\n");
			break;
		}

	} while (input);




	return 0;
}