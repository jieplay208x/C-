#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, max;
	cin >> a >> b >> c;
	if (a != b && a != c)
	{
		if (a > b && a > c)
		{
			max = a;
		}
		else if (b > a && b > c)
		{
			max = b;
		}
		else
		{
			max = c;
		}

	}
	else if(a==b&&a==c)
	{
		cout << "a=b=c ";
		max = a;
	}
	else
	{
		if (a > b||a > c)
		{
			max = a;
		}
		else if (b > a || b > c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}
	cout << max << endl;
	
	system("pause");

	return 0;
}