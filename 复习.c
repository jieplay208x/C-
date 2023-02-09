#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//		sum = a + b;
//		printf("sum=%d\n", sum);
//	return 0;
//}
//声明一下变量
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//常量
//int main()
//{
//	//1.字面常量
//	3.14;
//	10;
//	'a';
//	"abcdef";
//
//	return 0;
//}
//int main()
//{
//	//2.const修饰的常变量
//	const int num = 10;
//	num = 20;
//	printf("num=%d\n", num);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };//10个元素
//
//
//	const int n = 10;
//	int arr2[n] = { 0 };//n是变量，这里是不行的
//	return 0;
//}
//#define MAX 10
//int main()
//{
//	MAX = 1000;
//	int n = MAX;
//	printf("n=%d\n", n);
//	
//	return 0;
//}
//性别 enum枚举关键字
enum Sex
{
	//这种枚举类型的变量的未来可能取值
	MALE=3,//赋初值
    FEMALE,
	SECRET

};
int main()
{
	//4.枚举变量
	//可以一一列举的变量

	enum Sex s = MALE;
	//MALE=3;//err
	printf("%d\n", s);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	 
	return 0;
}