#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age >= 18)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	
//	}
//	return 0;
//}
//int main()
//{
//	int age = 30;
//	if (age < 18)
//	{
//		printf("δ����\n");
//
//	}
//	else if (age >= 18 && age < 26)//����д��(18<=age<26),д�������߼�����
//	{
//		printf("����\n");
//	}
//	else if (age < 40)
//	{
//		printf("׳��\n");
//	}
//	return 0;
//
//}
//һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 ==0)
//	{
//		printf("ż��");
//	}
//	else
//	{
//		printf("����");
//	}
//
//	return 0;
//}
//���1~100֮�������
//int main()
//{
//	int a = 0;
//	for(a=1;a<=100;a++)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d\n", a);
//		}
//	
//	}
//	return 0;
//}
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������\n");
		break;
		
	}
	return 0;
}