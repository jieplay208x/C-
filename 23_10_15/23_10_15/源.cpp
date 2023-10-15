#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
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
//char *  my_strcpy(char* dest,const char* stc)
//{
//	assert(dest != NULL);
//	assert(stc != NULL);
//
//	while (*dest++ = *stc++)
//	{
//		;
//	}	
//}
size_t  my_strlen(const char* arr)
{
	assert(arr != NULL);
	//assert(arr);
	size_t  count = 0;
	while (*arr++ != 0)
	{
		count++;
	}
	return count;
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

	//char arr1[10] = "xxxxxxx";
	//char arr2[] = " hehe ";

	////strcpy(arr1, arr2);
	//printf("%s", my_strcpy(arr1, arr2));



	
	char arr[] = "abcdef";
	printf("%d ", my_strlen(arr));

	return 0;

}