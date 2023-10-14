#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//#include<stdio.h>
//#include<Windows.h>
int main()
{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}

	//system("color 01");
	//float x, y, a;
	//for (y = 1.5f; y > -1; y -= 0.1f)
	//{
	//	for (x = -1.5f; x < 1.5f; x += 0.05f)
	//	{
	//		a = x * x + y * y - 1;
	//		putchar(a * a * a - x * x * y * y * y < 0.0f ? '*' : ' ');
	//	}
	//	Sleep(35);
	//	putchar('\n');
	//}

	//ÇÃ×À×Ó
	//int i = 0;
	//int m = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 10 == 7 || i % 7 == 0 || (i / 10) == 7)
	//	{
	//		cout << "ÇÃ×À×Ó ";
	//		m++;
	//	}
	//	else
	//	{
	//		cout << i << ' ';
	//	}
	//}
	//cout << m;
	int i = 0;
	int j = 0;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			cout << '*'<<' ';
		}
		cout << endl;
	}
	cout << "------------------------" << endl;
	int arr[10][10] = { (0,0) };
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			arr[i][j] = '*';
			printf("%c ", arr[i][j]);
		}
		putchar('\n');
	}
	int x, y, z;
	for (x = 1; x < 10; x++)
	{
		for (y = 1; y <= x; y++)
		{
			cout << y << '*' << x << '=' << y * x<<'\t';
		}
		cout << endl;
	}
	for (i = 1; i < 101; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}

		cout << i << endl;
	}

	system("pause");
	return 0;
}