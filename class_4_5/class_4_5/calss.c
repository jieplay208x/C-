#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int sum(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 1;
	int b = 2;
	printf("%d ", sum(a, b));
	return 0;
	/*int a = 0;
	int b = 0;
	scanf(" %d %d", &a, &b);
	int sum = a + b;
	printf(" %d", sum);
	return 0;*/

}