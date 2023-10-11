#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int ADD(int x, int y);
	int a, b, c;
	cin >> a >> b;
	c=ADD(a, b);
	cout << "a+b=" << c << endl;
	return 0;
}
int ADD(int x, int y)
{
	int z;
	z = x + y;
	return z;
}