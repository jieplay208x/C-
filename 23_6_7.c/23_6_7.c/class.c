#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1000~2000��֮�������
//int main()
//{
//	int s = 0;
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0))||(i%400==0))
//
//		{
//			s++;
//			printf("%d ", i);
//		}		
//	}
//	printf("\n%d ", s);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		
//		for (n = 2; n <= i - 1; n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//
//			}
//		}
//		if (i == n)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
#include<math.h>
//sprt
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int s = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//Ϊ�棨i��������
//		for (n = 2; n <= sqrt(i); n++)//sqrt�ǿ�ƽ������
//		{
//			if (i % n == 0)
//			{
//				flag = 0;//Ϊ�٣�i����������
//				break;
//
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			s++;
//		}
//	}
//	printf("\n%d\n", s);
//	return 0;
//}
//��������Ϸ
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