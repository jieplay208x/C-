#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAX 10000
extern int sb;
int main()
{
	//int a;���Ƽ�
	//int b;���Ƽ�
	//int a=0;//�Ƽ�
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
	//sizeof�����������ͻ��߱�����ռ�ռ�Ĵ�С
	printf("%d ", sizeof(int));
	printf("%d ", sizeof(short));
	printf("%d ", sizeof(char));
	printf("%d ", sizeof(long));
	printf("%d ", sizeof(long long));
	printf("%d ", sizeof(float));
	printf("%d \n", sizeof(double));

	printf("%d ", sb);
	char arr1[] = "abc";//��β\0��ʡ���˼��㳤��ʱ������
	char arr2[] = { 'a', 'b','c' };
	printf("%d \n", strlen(arr1));
	printf("%d \n", strlen(arr2));
	//����
	//1.���泣��
	3.14;
	10;
	'a';
	"abc";
	//2.������
	//const���εĳ�����
	const int c = 2023;
	//���г����ԣ����ɸ��ģ��䱾���Ǳ�����
	//3.#define ����ı�ʶ������(���ɲ��ɸ���)
	int d = MAX;
	printf("%d \n", d);
	//4.4ö�ٳ���
	enum dengji
	{
		SR = 5,
		SSR
	};
	enum dengji w = SSR;

	printf("%d \n", w);
	//����֪ʶ��ϰ��%d��Ӧ���� %c��Ӧ�ַ��� %s��Ӧ�ַ���
	//ת���ַ���\n \r(�س�) \t��ˮƽ�Ʊ���� \xdd \ddd \a \b���˸���� \����ֱ�Ʊ����
	//ASCII���������
	//0:48	a:65	A:97
	//ע�ͣ�c++��//��	/**/(C����)
	int i = 0;
	while (i < 10)
	{
		i++;
	}
	printf("%d\n", i);
	int m = 0;
	scanf("%d", &m);
	if (m = 0)
		printf("���а���\n");
	else
		printf("���԰��ֵ�\n");
	char cll[5] = { 'a','b','c' };
	//����ȫ��ʼ���������Ϊ��
	//�±���㿪ʼ
	//�����ؼ���
	//auto ���Զ��ġ����Զ������Զ����٣�ʡ�Ե��ˣ��ֲ���������auto���ε�
	//entern �����ⲿ����
	//enum ö�ٱ���
	//register �Ĵ����ؼ���
	//define include ���ǹؼ��� ��Ԥ����ָ��
	//typedef �����ض���
	//static ��̬��
	//1.���ξֲ�����   static����auto����int a��auto��ʾ�Զ����������٣���staticӦ�ñ�ʾִֻ��һ�δ���
	//2.����ȫ�ֱ���   ֻ�����Լ���Դ�ļ���.c����ʹ��
	//3.���κ���       ͬ��

	return 0;
}