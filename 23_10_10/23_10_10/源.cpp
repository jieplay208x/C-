#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void  J_(int* m, int* n)
{
	int* t;
	t = m;
	m = n;
	n = t;
	
}
int main()
{
	int a = 10, b = 20;
	J_(&a, &b);
	
	printf("%d %d", a, b);

	return 0;
}