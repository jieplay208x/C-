#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("ÇëÊäÈëÃÜÂë");
	scanf("%s", password);
	printf("ÇëÈ·ÈÏÃÜÂë(Y/N)");
	while (getchar() != '\n')
	{
		;
	}
	int ch = getchar();
	if (ch  == 'Y')
	{
		printf("ÃÜÂëÕıÈ·");
	}
	else
	{
		printf("ÃÜÂë´íÎó");
	}

	return 0;

}