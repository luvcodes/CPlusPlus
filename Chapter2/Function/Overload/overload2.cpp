#include <iostream>
using namespace std;

// 函数重载的注意事项
// 1. 引用作为重载的条件
void func(int& a) // int & a = 10; // 不合法
{
	cout << "func() calling" << endl;
}

void func(const int& a) // const int &a = 10; // 合法
{
	cout << "func(const int & a) calling" << endl;
}

// 2. 函数重载碰到默认参数
void func2(int a, int b = 10)
{
	cout << "func2(int a, int b) calling" << endl;
}

void func2(int a)
{
	cout << "func2(int a) calling" << endl;
}

int main()
{
	//int a = 10;
	//func(a);
	//func(10); // 所以会调用第二个func
	
	//func2(10); // 当函数重载碰到默认参数，出现二义性，报错

	return 0;
}