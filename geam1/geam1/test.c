#define _CRT_SECURE_NO_WARNINGS 1
#include"geam.h"
void num()
{
	printf("************************\n");
	printf("************************\n");
	printf("*****   1.play     *****\n");
	printf("*****   0.�˳���Ϸ *****\n");
	printf("************************\n");
	printf("************************\n");
}
void game()
{
	char arr[Hang][Lei];
	//��ʼ������
	arr_C(arr, Hang, Lei);
	//��ӡ����
	arr_D(arr, Hang, Lei);

	while (1)
	{
		//�������
		arr_R(arr, Hang, Lei);
		arr_D(arr, Hang, Lei);


		//��������
		arr_N(arr, Hang, Lei);
		arr_D(arr, Hang, Lei);
		//����Ӯ
		char ret=arr_P(arr,Hang,Lei);

		if (ret != 'C')
		{
			if (ret == '*')
			{
				printf("���Ӯ\n");
				break;
			}
			else if (ret == '#')
			{
				printf("����Ӯ\n");
				break;
			}
			else if (ret == 'Q')
			{
				printf("ƽ��\n");
				break;
			}
		}
	}


}
int main()

{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		num();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�����\n");
			break;
		default:
			printf("�벻Ҫ����Ϲ��лл��)\n");
			break;
		}

	} while (input);




	return 0;
}