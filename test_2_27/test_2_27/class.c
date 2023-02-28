#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("要坚持吗？(1/0)\n");
//	scanf("%d", &input);
//	if (input == 1)
//	
//		printf("希望你不要放弃");
//	
//	else
//		printf("确定不会后悔吗？");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		
//		line++;
//		printf("敲代码第%d行\n", line);
//
//	}
//	if (line == 30000)
//		printf("成功");
//	return 0;
//}
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, & num2);
//	int sum = ADD(num1, num2);
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	float a = 9.0 / 2.0;
//	printf("%f ", a);
//	return 0;
//
//}
//int main()
//{
//	int a = 4;
//	int b = a << 1;
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	
//
//	printf("%d", sizeof(int));
//	printf("%d", sizeof(a));
//
//	return 0;
//}
//计算数组的个数——szieof
int main()
{
	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d ", sizeof(arr) / sizeof(arr[0]));
	return 0;
}