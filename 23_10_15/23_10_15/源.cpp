#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void my_strcpy(char* dest, char* stc)
//{
//	while (*stc != '\0')
//	{
//		*dest = *stc;
//		dest++;
//		stc++;
//	}
//	*dest = *stc;
//
//}
//void my_strcpy(char* dest, char* stc)
//{
//	while (*stc != '\0')
//	{
//		*dest++ = *stc++;
//	}
//	*dest = *stc;
//
//}
void my_strcpy(char* dest, char* stc)
{
	while (*dest++ = *stc++)
	{
		;
	}	
}
int main() 
{
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//for (i = 0; i <= 12; i++)
	//{
	//	arr[i] = 0;
	//	printf("hehe\n");
	//}

	char arr1[10] = "xxxxxxx";
	char arr2[] = " hehe ";
	my_strcty(arr1, arr2);
	//strcpy(arr1, arr2);
	printf("%s", arr1);


	return 0;

}