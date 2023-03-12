#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAX 10000
extern int sb;
int main()
{
	//int a;不推荐
	//int b;不推荐
	//int a=0;//推荐
	//int b=0;
	//scanf("%d %d", &a,&b);
	//int num= a + b;
	//printf("%d ", num);
	char arr = 'a';
	short in = 17;
	int eag = 18;
	/*long
	long long*/
	float a = 1.0;
	double b = 1.00;
	//sizeof计算计算机类型或者变量所占空间的大小
	printf("%d ", sizeof(int));
	printf("%d ", sizeof(short));
	printf("%d ", sizeof(char));
	printf("%d ", sizeof(long));
	printf("%d ", sizeof(long long));
	printf("%d ", sizeof(float));
	printf("%d \n", sizeof(double));

	printf("%d ", sb);
	char arr1[] = "abc";//结尾\0被省略了计算长度时不计算
	char arr2[] = { 'a', 'b','c' };
	printf("%d \n", strlen(arr1));
	printf("%d \n", strlen(arr2));
	//常量
	//1.字面常量
	3.14;
	10;
	'a';
	"abc";
	//2.常变量
	//const修饰的常变量
	const int c = 2023;
	//具有长属性，不可更改，其本身是变量，
	//3.#define 定义的标识符常量(依旧不可更改)
	int d = MAX;
	printf("%d \n", d);
	//4.4枚举常量
	enum dengji
	{
		SR = 5,
		SSR
	};
	enum dengji w = SSR;

	printf("%d \n", w);
	//基础知识复习：%d对应整数 %c对应字符型 %s对应字符串
	//转义字符：\n \r(回车) \t（水平制表符） \xdd \ddd \a \b（退格符） \（垂直制表符）
	//ASCII码特殊记忆
	//0:48	a:65	A:97
	//注释：c++（//）	/**/(C语言)
	int i = 0;
	while (i < 10)
	{
		i++;
	}
	printf("%d\n", i);
	int m = 0;
	scanf("%d", &m);
	if (m = 0)
		printf("不行啊你\n");
	else
		printf("可以啊兄弟\n");
	char cll[5] = { 'a','b','c' };
	//不完全初始化，其余的为零
	//下表从零开始
	//常见关键字
	//auto 是自动的——自动创建自动销毁（省略掉了）局部变量都是auto修饰的
	//entern 声明外部符号
	//enum 枚举变量
	//register 寄存器关键词
	//define include 不是关键字 是预处理指令
	//typedef 类型重定义
	//static 静态的
	//1.修饰局部变量   static代替auto修饰int a，auto表示自动创建和销毁，那static应该表示只执行一次创建
	//2.修饰全局变量   只能在自己的源文件（.c）中使用
	//3.修饰函数       同上

	return 0;
}