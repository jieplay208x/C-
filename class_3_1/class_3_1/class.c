#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d ", ~a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;//����++����ʹ�ã���++
//	printf("%d \n", a);//11
//	printf("%d \n", b);//10
//	//int a = 10;
//	//int b = ++a;//ǰ��++����++����ʹ��
//	//printf("%d \n", a);//11
//	//printf("%d \n", b);//11
//	return 0;
//}
//int main()
//{
//	int a =(int) 3.14;//ǿ������ת�������Ƽ�ʹ�ã�ֻ��Ҫ֪��������﷨���С�
//	printf("%d", a);
//	return 0;
//}
int main()
{
	int a = 6;
	int b = 8;
	int c = 9;
	int d = (a = c - 1, b = a + 2, c = b - 9);
	//int max = a > b ? a : b;
	//printf("%d", max);
	printf("%d", d);
	return 0;
}