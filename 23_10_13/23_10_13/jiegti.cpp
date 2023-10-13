#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct book
//{
//	char name[20];
//};
struct stu
{
	//struct book c;
	char name[20];
	int us;

};
void print1(struct stu x)
{
	printf("%s %d\n", x.name, x.us);
}
void print2(struct stu* x)
{
	printf("%s %d\n", x->name, x->us);
}
int main()
{
	struct stu X = {  "向日葵",50};
	//printf("%s %s %d\n", X.c.name,X.name, X.us); 
	//指针访问
	print1(X);
	/*struct stu* p = &X;*/
	//printf("%s %s %d\n",p->c.name, p->name, p->us);
	print2(&X);
	return 0;
}