#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<windows.h>
////Sleep
//#include<string.h>
//strcmp
//strlen
//int main()
// 
//
//{
//	int a = 0;
//	for (a = 0; a < 3; ++a)
//	{
//		printf("%d ", a);
//	}
//
//	return 0;
//}
//����n�Ľ׳�
//int main()
//{
//	int a = 0;
//	scanf("%d ", &a);
//	int i = 0;
//	int n = 1;
//	for (i = 1; i <= a ; i++)
//	{
//		n = i * n;
//
//	}
//	printf("%d ", n);
//
//
//
//	return 0;
//}
//����1~10�Ľ׳˺�
//int jc(int x)
//{
//	int i = 0;
//	int n = 1;
//	for (i = 1; i <= x; i++)
//	{
//		n = i * n;
//
//	}
//	return n;
//}
//
//int main() 
//{
//	int a = 10;
//	int sum = 0;
//	for (; a > 0; a--)
//	{
//		sum =  jc(a)+sum;
//
//	}
//	printf("%d ", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int a = 0;
//	for (n = 1; n < 11; n++)
//	{
//		sum *= n;
//		a = a + sum;
//	}
//	printf("%d ", a);
//	return 0;
//}
//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 7;
//	
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//
//
//		int min = (left + right) / 2;
//		if (arr[min] < a)
//		{
//			left = min + 1;
//		}
//		else if (arr[min] > a)
//		{
//			right = min - 1;
//		}
//		else
//		{
//
//			printf("%d ", arr[min]);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "bu yao hui da";
//	char arr2[] = "*************";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//
//
//		arr2[left] = arr1[left];
//	
//		printf("%s\n ", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//
//	}
//	printf("%s\n ", arr2);
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺\n");
//		scanf("%s", password);
//		//if (password == "123456")�ַ����ıȽ���strcmp
//		if(strcmp(password,"123456")==0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//
//
//	}
//	if (i == 3)
//	{
//		printf("����\n");
//	}
//	return 0;
//}
#include<time.h>
#include<stdlib.h>
void caidan()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.out   *****\n");
	printf("********************\n");
}
void game()
{
	
	int a = rand()%100+1;
	/*printf("%d \n", a);*/

	int guess = 0;

	while (1)
	{

		printf("���һ������:");
		scanf("%d ", &guess);
		if (guess > a)
		{
			printf("�´���\n");
		}
		else if (guess < a)
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
	int n = 0;
	srand((unsigned)time(NULL));
	
	do
	{
		caidan();
		printf("��ѡ��\n");
		scanf("%d ", &n);
		switch (n)
		{
		case 1:
	
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ��������������롣\n");
			break;
		}
	} while (n);
	return 0;
}