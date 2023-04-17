#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"

// 判断点和圆关系案例
// 点类
//class Point
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};

// 圆类
//class Circle
//{
//public:
//	// set radius
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	// get radius
//	int getR()
//	{
//		return m_R;
//	}
//	// set circle center
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	// get circle center
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;
//	// 在类中可以让另一个类 作为本类中的成员
//	Point m_Center; // 圆心
//};

// 判断点和圆关系
void isInCircle(Circle& c, Point& p)
{
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	
	int rDistance = c.getR() * c.getR();

	if (distance == rDistance)
	{
		cout << "The point is on the circle" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "THe point is outside of the circle" << endl;
	}
	else {
		cout << "The point is inside of the circle" << endl;
	}
}


int main()
{
	// 创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	// 创建点
	Point p;
	p.setX(10);
	p.setY(10);

	isInCircle(c, p);


	return 0;
}