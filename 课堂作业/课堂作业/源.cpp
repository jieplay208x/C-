#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//1.
//int main()
//{
//	cout << "输入学生成绩:" << endl;
//	int i = 0;
//	cin >> i;
//	cout << "学生等级为：";
//	if (i >= 60)
//	{
//		if (i < 70)
//		{
//			cout << "D" << endl;
//		}
//		else if (i < 80)
//		{
//			cout << "C" << endl;
//		}
//		else if (i < 90)
//		{
//			cout << "B" << endl;
//		}
//		else
//		{
//			cout << "A" << endl;
//		}
//	}
//	else
//	{
//		cout << "E" << endl;
//	}
//
//
//
//	system("pause");
//
//	return 0;
//}

//2.
//int Run(int x)
//{
//	if (x % 400 == 0 ||( x % 4 == 0 && x % 100 != 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 2;
//	}
//}
//int main()
//{
//	int y = 0;
//	int n = 0;
//	cout << "请输入年，月份：";
//	cin >> y >> n ;
//	int a=Run(y);//判断是否为闰年
//	if (a == 1)
//	{
//		switch (n)
//		{
//		case 1:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		case 2:
//			cout << y << "年" << n << "月有29天" << endl;	
//			break;
//		case 3:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		case 4:
//			cout << y << "年" << n << "月有30天" << endl;
//			break;
//		case 5:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		case 6:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		case 7:
//			cout << y << "年" << n << "月有30天" << endl;
//			break;
//		case 8:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		case 9:
//			cout << y << "年" << n << "月有30天" << endl;
//			break;
//		case 10:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		case 11:
//			cout << y << "年" << n << "月有30天" << endl;
//			break;
//		case 12:
//			cout << y << "年" << n << "月有31天" << endl;		
//			break;
//		default:
//			cout << "识别错误"<<endl;
//			break;
//		}
//	}
//	if (a == 2)
//	{
//		switch (n)
//		{
//		case 1:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		case 2:
//			cout << y << "年" << n << "月有28天" << endl;
//			break;
//		case 3:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		case 4:
//			cout << y << "年" << n << "月有30天" << endl;
//			break;
//		case 5:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		case 6:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		case 7:
//			cout << y << "年" << n << "月有30天" << endl;
//			break;
//		case 8:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		case 9:
//			cout << y << "年" << n << "月有30天" << endl;
//			break;
//		case 10:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		case 11:
//			cout << y << "年" << n << "月有30天" << endl;
//			break;
//		case 12:
//			cout << y << "年" << n << "月有31天" << endl;
//			break;
//		default:
//			cout << "识别错误" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//3.
//int main()
//{
//	int i = 0; int j = 0;
//	int n = 0;
//	cin >> n;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int sum_ = 1;
//		for (j = 1; j <= i; j++)
//		{
//			
//			sum_ = sum_ * j;
//		
//		}
//		sum = sum + sum_;
//	}
//	cout << sum << endl;
//	
//	system("pause");
//
//	return 0;
//
//}

//4.
int main()
{
	int x = 0;
	int y = 0;
	cin >> x >> y;
	if (x == y)
	{
		cout <<"最大公约数为：" << x << "\n最小公倍数为：" << x << endl;
	}
	if (x != y)
	{
		int min = (x > y ? y : x);
		while (x % min !=0 || y % min !=0 )
		{		
			min--;
		}
		cout << "最大公约数为：" << min << endl;
		int max = (x > y ? x : y);			
		while (max % x != 0 || max % y != 0)
		{								
			max++;
		}		
		cout << "最小公倍数为：" << max << endl;
	}
	system("pause");
	return 0;
}