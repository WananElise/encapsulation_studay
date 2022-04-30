#include "circle.h"

void Circle::setR(int r)
{
	m_R = r;
}
int Circle::getR()
{
	return m_R;
}
void Circle::set_Center(Point center)
{
	m_Center = center;

}
Point Circle::get_Center()
{
	return m_Center;
}

