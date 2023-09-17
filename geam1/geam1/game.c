#define _CRT_SECURE_NO_WARNINGS 1
#include"geam.h"

//初始化棋盘
void arr_C(char arr[Hang][Lei], int hang, int lei)
{
	int i = 0, j = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lei; j++)
		{
			arr[i][j] = ' ';
		}
	}


}
//打印棋盘
void arr_D(char arr[Hang][Lei], int hang, int lei)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lei; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < lei - 1)
				printf("|");
		}
		printf("\n");
		if (i < hang - 1)

		{
			for (k = 0; k < lei; k++)
			{

				printf("---");
				if (k < lei - 1)
					printf("|");

			}
			printf("\n");

		}


	}
}
//玩家输入
void arr_R(char arr[Hang][Lei], int hang, int lei)
{
	int i = 0;	
	int j = 0;
	printf("请玩家输入：");
	//scanf("%d%d",&i ,& j);
	//判断i,j的范围是否合适
	
	while (1)
	{
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= hang && j >= 1 && j <= lei)
		{
			//判断是否被占用
			if (arr[i - 1][j - 1] == ' ')
			{
				arr[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("你瞎啊？重输：\n");
				
			}
		}
		else
		{
			printf("数学体育老师教的？重输：\n");
			
		}
	}
	
	

}
//电脑输入
void arr_N(char arr[Hang][Lei], int hang, int lei)
{
	printf("电脑输入：\n");
	while (1)
	{
		int i = rand() % hang;
		int j = rand() % lei;
		if (arr[i][j] == ' ')
		{
			arr[i][j] = '#';
			break;
		}
	}

}
//是否满
int arr_M(char arr[Hang][Lei], int hang, int lei)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lei; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;//没满
			}
		}
	}
	return 1;//满了
}
//判断输赢
char arr_P(char arr[Hang][Lei], int hang, int lei)
{
	int i = 0;
	//三行
	for (i = 0; i < hang; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]&&arr[i][1]!=' ')
		{
			return arr[i][1];
		}
	}
	//三列
	for (i = 0; i < lei; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]&&arr[1][i]!=' ')
		{
			return arr[1][i];
		}
	}
	//对角线
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	int ret = arr_M(arr,hang,lei);//是否满，满为1，不满为0
	if (ret == 1)
	{
		return 'Q';
	}
	return 'C';

}
