#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	//short a = 100000;

	//int b = 100000;

	//cout << a << endl;
	//cout << b << endl;
	float f1 = 3.1415926f;//系统默认为小数为双精度，不+f会多做一步转换。
	cout << f1 << endl;

	double d1 = 3.1415926;
	cout << d1 << endl;


	system("pause");
	return 0;
}