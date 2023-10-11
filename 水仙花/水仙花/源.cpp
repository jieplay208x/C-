#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int S_x(int x)
{
	int a = x % 10;
	int b = a * a * a;
	if (x >= 10)
	{
		return S_x(x / 10) + b;
	}
}

int main()
{
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		int s = S_x(i);
		if (s == i)
		{
			cout << s << " ";
		}
	}
	cout << endl;

	system("pause");
	return 0;
}