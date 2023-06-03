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
//计算n的阶乘
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
//计算1~10的阶乘和
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
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		//if (password == "123456")字符串的比较用strcmp
//		if(strcmp(password,"123456")==0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//
//
//	}
//	if (i == 3)
//	{
//		printf("你妹\n");
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

		printf("请猜一个数字:");
		scanf("%d ", &guess);
		if (guess > a)
		{
			printf("猜大了\n");
		}
		else if (guess < a)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
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
		printf("请选择\n");
		scanf("%d ", &n);
		switch (n)
		{
		case 1:
	
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入。\n");
			break;
		}
	} while (n);
	return 0;
}