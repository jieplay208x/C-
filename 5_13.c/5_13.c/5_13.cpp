#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;//a在内存中要分配空间-4个字节，地址显示第一个字节
//	printf("%p", &a);//%p专门用来打印地址的
//	
//	int * pa = &a;//pa是用来存放地址的，在C语言中pa叫作指针变量
//
//	//*说明pa是指针变量
//	//int 说明pa执行的对象是int类型的
//	//*pa=a;pa=&a;
//	//*解引号操作符
//	
//	return 0;
//}
struct human
{
	char name[20];
	int dj;
	char zhongzhu[20];
};
int main()
{
	struct human jinson = {"jinson",87,"史莱克"};//结构体的创建和初始化
	printf("1: %s %d %s", jinson.name, jinson.dj, jinson.zhongzhu);//结构体变量.成员变量
	struct human * pj = &jinson;
	printf("2: %s %d %s", (*pj).name, (*pj).dj, (*pj).zhongzhu);
	printf("3: %s %d %s", pj->name, pj->dj, pj->zhongzhu);
	return 0;

}