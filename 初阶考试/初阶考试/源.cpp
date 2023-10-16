#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h> 

//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a;
//	int d = b;
//	int y = 0;
//	//最大公因数
//	while (y = a % b)
//	{
//		a = b;
//		b = y;
//	}
//	printf("%d\n",b );
//	//最小公倍数
//	printf("%d", c * d / b);
//
//	return 0;
//}

//#define MAX 100
//最小公倍数
//int main()
//{
//	/*int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);*/
//	//int max = 0;
//	//max = a > b ? a : b;
//	//while ((max % a != 0) || (max % b != 0))
//	//{
//	//	max++;
//	//}
//	//printf("%d", max);
//	//int i = 0;
//	//for (i = 1;; i++)
//	//{
//	//	if (a * i % b == 0)
//	//	{
//	//		printf("%d",a * i);
//	//		break;
//	//	}
//	//}
//	/*char arr[MAX] = { 0 };
//	gets_s(arr);
//	printf("%s\n", arr);
//	int l = strlen(arr)-1;
//	int i = l;
//	int j = 0;
//	int duan = l;
//	for (i; i >= 0; i--)
//	{
//		if (arr[i] == ' ')
//		{
//			j = i+1;
//			for (j; j <= duan; j++)
//			{
//				printf("%c", arr[j]);
//			}
//			duan = i-1;
//
//			printf("%c", ' ');
//		}
//		if (i == 0)
//		{
//			j = i;
//			for (j; j <= duan; j++)
//			{
//				printf("%c", arr[j]);
//			}
//			printf("%c", ' ');
//		}
//	}
//
//	return 0;*/
//}
//三步旋转法
//i like beijing.
//beijing. like i
void reverse(char* left, char* right)//left:左 下表    right:右 下标
{
	char tmp = 0;
	while (left < right)
	{
		tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets_s(arr);
	int len = strlen(arr);
	reverse(arr,arr+len-1);
	printf("%s\n", arr);
	char* staer = arr;
	while (*staer)
	{
		char* end = staer;
		while ((*end != ' ') && (*end != 0))
		{
			end++;
		}
		reverse(staer, end-1);
		if (*end == 0)
		{
			 staer = end;
		}
		else
		{
			staer = end + 1;
		}		
	}
	printf("%s", arr);

	return 0;
}