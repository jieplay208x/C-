#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ�-4���ֽڣ���ַ��ʾ��һ���ֽ�
//	printf("%p", &a);//%pר��������ӡ��ַ��
//	
//	int * pa = &a;//pa��������ŵ�ַ�ģ���C������pa����ָ�����
//
//	//*˵��pa��ָ�����
//	//int ˵��paִ�еĶ�����int���͵�
//	//*pa=a;pa=&a;
//	//*�����Ų�����
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
	struct human jinson = {"jinson",87,"ʷ����"};//�ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %s", jinson.name, jinson.dj, jinson.zhongzhu);//�ṹ�����.��Ա����
	struct human * pj = &jinson;
	printf("2: %s %d %s", (*pj).name, (*pj).dj, (*pj).zhongzhu);
	printf("3: %s %d %s", pj->name, pj->dj, pj->zhongzhu);
	return 0;

}