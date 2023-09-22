#define _CRT_SECURE_NO_WARNINGS 1
#include"geam.h"
void geam()
{
	char arr[Hangs][Lies] = { 0 };//存放布置好的雷
	char show[Hangs][Lies] = { 0 };//存放排查出的雷


	//初始化棋盘
	arr_C(arr, Hangs, Lies,'0');
	arr_C(show,Hangs,Lies, '*');

	//打印棋盘
	//arr_D(arr, Hang, Lie);
	arr_D(show, Hang, Lie);
	//放雷
	arr_ret(arr, Hang, Lie);
	//arr_D(arr, Hang, Lie);
	
	//排雷
	arr_P(arr,show, Hang, Lie);
}
void mun()
{
	printf("***********************************\n");
	printf("***********************************\n");
	printf("*********      1.play       *******\n");
	printf("*********      0.退出游戏   *******\n");
	printf("***********************************\n");
	printf("***********************************\n");
	printf("***********************************\n");
}
int main()
{
	
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		mun();
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			geam();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入：>\n");
			break;
		}


	} while (input);



	return 0;
}
