#define _CRT_SECURE_NO_WARNINGS 1
#include"geam.h"
void geam()
{
	char arr[Hangs][Lies] = { 0 };//��Ų��úõ���
	char show[Hangs][Lies] = { 0 };//����Ų������


	//��ʼ������
	arr_C(arr, Hangs, Lies,'0');
	arr_C(show,Hangs,Lies, '*');

	//��ӡ����
	//arr_D(arr, Hang, Lie);
	arr_D(show, Hang, Lie);
	//����
	arr_ret(arr, Hang, Lie);
	//arr_D(arr, Hang, Lie);
	
	//����
	arr_P(arr,show, Hang, Lie);
}
void mun()
{
	printf("***********************************\n");
	printf("***********************************\n");
	printf("*********      1.play       *******\n");
	printf("*********      0.�˳���Ϸ   *******\n");
	printf("***********************************\n");
	printf("***********************************\n");
	printf("***********************************\n");
}
int main()
{
	
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		mun();
		printf("�����룺>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			geam();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���������룺>\n");
			break;
		}


	} while (input);



	return 0;
}
