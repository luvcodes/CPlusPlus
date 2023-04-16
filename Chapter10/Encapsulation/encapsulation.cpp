#include <iostream>
using namespace std;

// 设计一个圆类，求圆的周长
// 公式: 2*pi*r

class Circle
{
	// 访问权限
	public;
	
	// 属性
	int m_r;


	// 行为
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	// 通过圆类 创建具体的圆(对象)
	Circle c1;
	c1.m_r = 10;

	cout << "The perimiter is " << calculateZC() << endl;


	return 0;
}