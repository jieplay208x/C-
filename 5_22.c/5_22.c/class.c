#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("����������");
	scanf("%s", password);
	printf("��ȷ������(Y/N)");
	while (getchar() != '\n')
	{
		;
	}
	int ch = getchar();
	if (ch  == 'Y')
	{
		printf("������ȷ");
	}
	else
	{
		printf("�������");
	}

	return 0;

}