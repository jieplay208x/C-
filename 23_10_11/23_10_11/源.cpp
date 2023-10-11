#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#define L 19
int main()
{
	int i, j, m, n;
	n = m = L / 2 + 1;
	for (i = 1; i <= L/2+1; i++)
	{
		for (j = 1; j <= L; j++)
		{
			if (m <= L && n >= 1)
			{
				//cout<<(j <= m && j >= n) ? '* ' : ' ';
				if (j <= m && j >= n)
				{
					cout << '*';
				}
				else
				{
					cout << ' ';
				}
			}
		}
		m++;
		n--;
		cout << endl;
	}
	m = m - 1;
	n = n + 1;
	for (i = 1; i <= L / 2 + 1; i++)
	{
		for (j = 1; j <= L; j++)
		{
			if (m <= L && n >= 1)
			{
				//cout<<(j <= m && j >= n) ? '* ' : ' ';
				if (j <= m && j >= n)
				{
					cout << '*';
				}
				else
				{
					cout << ' ';
				}
			}
		}
		m--;
		n++;

		cout << endl;
	}
	system("pause");
	return 0;
}