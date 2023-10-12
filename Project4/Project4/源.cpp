#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<Windows.h>
int main()
{
	system("color 01");
	float x, y, a;
	for (y = 1.5f; y > -1; y -= 0.1f)
	{
		for (x = -1.5f; x < 1.5f; x += 0.05f)
		{
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y < 0.0f ? '*' : ' ');
		}
		Sleep(15);
		putchar('\n');
	}

	system("pause");
	return 0;
}