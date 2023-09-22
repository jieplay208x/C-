#define _CRT_SECURE_NO_WARNINGS 1
#include"geam.h"

void arr_C(char arr[Hangs][Lies], int hangs, int lies,char ret)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i < hangs; i++)
	{
		for (j = 0; j < lies; j++)
		{
			arr[i][j] = ret;
		}
	}
}


void arr_D(char arr[Hangs][Lies], int hang, int lie)
{
	int i = 0;
	int j = 0;
	printf("------------扫雷游戏-----------------\n");
	for (i = 0; i < lie+1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= hang; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= lie; j++)
		{
			
			printf("%c ", arr[i][j]);
		}
	
		printf("\n");
	}
	printf("------------扫雷游戏-----------------\n");

}

void arr_ret(char arr[Hangs][Lies], int hang, int lie)
{
	int l = L;
	while (l > 0)
	{
		int i = rand() % hang + 1;
		int j = rand() % lie + 1;
		if (arr[i][j] == '0')
		{
			arr[i][j] = '1';
			l--;
		}
	}
}
int arr_S(char arr[Hangs][Lies], int i, int j)
{
	return arr[i - 1][j - 1] + 
		arr[i - 1][j] + 
		arr[i - 1][j + 1] +
		arr[i][j - 1] +
		arr[i][j + 1] +
		arr[i + 1][j] + 
		arr[i + 1][j + 1] +
		arr[i + 1][j - 1] - 8 * '0';
}
void arr_P(char arr[Hangs][Lies], char show[Hangs][Lies], int hang, int lie)
{
	int b = hang * lie - L;
	while (b > 0)
	{
		int i = 0;
		int j = 0;

		printf("请输入坐标：");
		scanf("%d%d", &i, &j);
		if (i <= hang && i >= 1 && j >= 1 && j <= lie)
		{
			if (arr[i][j] == '1')
			{
				printf("你被炸死了，游戏失败。\n");
				break;

			}
			else
			{
				int s = arr_S(arr, i, j) ;
				show[i][j] = s + '0';
				arr_D(show, hang, lie);
				b--;
			}
		}
		else
		{
			printf("请重新输入：\n");
		}
	}
	if (b == 0)
	{
		printf("恭喜你，游戏胜利。\n");

	}
}
