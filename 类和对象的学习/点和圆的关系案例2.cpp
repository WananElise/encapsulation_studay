#include<iostream>
using namespace std;
#include "circle.h"
#include"point.h"
////点类
//class Point
//{
//private:
//	int m_Center;
//	int m_X;
//	int m_Y;
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
//};
////设计圆类
//class Circle
//{
//private:
//	int m_R;
//	Point m_Center;
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//	void set_Center(Point center)
//	{
//		m_Center = center;
//
//	}
//	Point get_Center()
//	{
//		return m_Center;
//	}
//
//};
//创建一个全局函数判断点与圆的位置关系
void isCircle(Circle& c, Point& p)
{
	//计算两点之间的距离
	int distance =
		(c.get_Center().getX() - p.getX()) * (c.get_Center().getX() - p.getX()) +
		(c.get_Center().getY() - p.getY()) * (c.get_Center().getY() - p.getY());
	//计算半径的平方
	int rDistance = c.getR() * c.getR();

	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance < rDistance)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}


}




int main()
{
	//创建一个圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.set_Center(center);

	//创建一个点
	Point p;
	p.setX(10);
	p.setY(9);
	//判断关系
	isCircle(c, p);

	system("pause");
	return 0;
}
