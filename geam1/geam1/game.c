#define _CRT_SECURE_NO_WARNINGS 1
#include"geam.h"

//��ʼ������
void arr_C(char arr[Hang][Lei], int hang, int lei)
{
	int i = 0, j = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lei; j++)
		{
			arr[i][j] = ' ';
		}
	}


}
//��ӡ����
void arr_D(char arr[Hang][Lei], int hang, int lei)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lei; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < lei - 1)
				printf("|");
		}
		printf("\n");
		if (i < hang - 1)

		{
			for (k = 0; k < lei; k++)
			{

				printf("---");
				if (k < lei - 1)
					printf("|");

			}
			printf("\n");

		}


	}
}
//�������
void arr_R(char arr[Hang][Lei], int hang, int lei)
{
	int i = 0;	
	int j = 0;
	printf("��������룺");
	//scanf("%d%d",&i ,& j);
	//�ж�i,j�ķ�Χ�Ƿ����
	
	while (1)
	{
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= hang && j >= 1 && j <= lei)
		{
			//�ж��Ƿ�ռ��
			if (arr[i - 1][j - 1] == ' ')
			{
				arr[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("��Ϲ�������䣺\n");
				
			}
		}
		else
		{
			printf("��ѧ������ʦ�̵ģ����䣺\n");
			
		}
	}
	
	

}
//��������
void arr_N(char arr[Hang][Lei], int hang, int lei)
{
	printf("�������룺\n");
	while (1)
	{
		int i = rand() % hang;
		int j = rand() % lei;
		if (arr[i][j] == ' ')
		{
			arr[i][j] = '#';
			break;
		}
	}

}
//�Ƿ���
int arr_M(char arr[Hang][Lei], int hang, int lei)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lei; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;//û��
			}
		}
	}
	return 1;//����
}
//�ж���Ӯ
char arr_P(char arr[Hang][Lei], int hang, int lei)
{
	int i = 0;
	//����
	for (i = 0; i < hang; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]&&arr[i][1]!=' ')
		{
			return arr[i][1];
		}
	}
	//����
	for (i = 0; i < lei; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]&&arr[1][i]!=' ')
		{
			return arr[1][i];
		}
	}
	//�Խ���
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	int ret = arr_M(arr,hang,lei);//�Ƿ�������Ϊ1������Ϊ0
	if (ret == 1)
	{
		return 'Q';
	}
	return 'C';

}
