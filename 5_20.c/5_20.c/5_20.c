#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����Ļ�ϴ�ӡ1~10
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
//			continue;//whileѭ���У�continue����������������ѭ��continue����Ĵ���
//			//ֱ��ȥ�жϲ��֣����Ƿ������һѭ��
//			
//			//break;//whileѭ���У�break�������õ���ֹѭ��
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
//	putchar(ch);//���һ���ַ�
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