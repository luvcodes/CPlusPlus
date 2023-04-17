#include "circle.h"

// set radius
void Circle::setR(int r)
{
	m_R = r;
}
// get radius
int Circle::getR()
{
	return m_R;
}
// set circle center
void Circle::setCenter(Point center)
{
	m_Center = center;
}
// get circle center
Point Circle::getCenter()
{
	return m_Center;
}