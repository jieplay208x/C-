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
		printf("�Ҳ£�");
		scanf("%d", &gauss);
		if (gauss > a)
		{
			printf("�´���\n");

		}
		else if (gauss < a)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
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

		mu();//Ŀ¼
		printf("�����룺");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();//������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ��");
			break;
		default:
			printf("ʶ��������������룺");
			break;
		}
	} while (i);


	return 0;
}