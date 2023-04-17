#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class Circle
{
public:
	// set radius
	void setR(int r);
	// get radius
	int getR();
	// set circle center
	void setCenter(Point center);
	// get circle center
	Point getCenter();
	
private:
	int m_R;
	// 在类中可以让另一个类 作为本类中的成员
	Point m_Center; // 圆心
};