#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//在屏幕上打印1~10
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;//while循环中，continue的作用是跳过本次循环continue后面的代码
//			//直接去判断部分，看是否进行下一循环
//			
//			//break;//while循环中，break用于永久的终止循环
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//
//	return 0;
//
//}
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);

	}
	return 0;
}