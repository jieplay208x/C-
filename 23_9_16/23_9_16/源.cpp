#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	///*printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);*/
//	//int i = 0;
//	///*for (i = 0; i < 10; i++)
//	//{
//	//	printf("arr[%d]=%p\n", i, &arr[i]); 
//	//}*/
//	//int* p = arr;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;
//	//}
//
//	
//
//
//
//	return 0;
//}
//冒泡函数
void mpp(int arr[], int x)
{
	int i = 0;
	for (i = 0; i < x-1; i++)
	{
		int j = 0;
		int m = 1;
		for (j = 0; j < x - i - 1; j++) //一个泡沫过程
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j ] = arr[j+1];
				arr[j + 1] = tmp;
				m = 0;
			}
		}
		if (m == 1)
		{
			break;
		}
	
	}


}

int mian()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	mpp(arr, n);
	


	return 0;

}