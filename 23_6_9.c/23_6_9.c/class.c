#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 180");
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���3���Ӻ�ػ���������롰����SB������ȡ���ػ���");
		scanf("%s", input);
		if (strcmp(input, "����SB") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}