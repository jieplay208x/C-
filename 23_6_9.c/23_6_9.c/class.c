#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 180");
	while (1)
	{
		printf("请注意，你的电脑将在3分钟后关机，如果输入“我是SB”，就取消关机。");
		scanf("%s", input);
		if (strcmp(input, "我是SB") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}