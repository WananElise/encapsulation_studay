#include<iostream>
using namespace std;
#include "circle.h"
#include"point.h"
////����
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
////���Բ��
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
//����һ��ȫ�ֺ����жϵ���Բ��λ�ù�ϵ
void isCircle(Circle& c, Point& p)
{
	//��������֮��ľ���
	int distance =
		(c.get_Center().getX() - p.getX()) * (c.get_Center().getX() - p.getX()) +
		(c.get_Center().getY() - p.getY()) * (c.get_Center().getY() - p.getY());
	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();

	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance < rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}


}




int main()
{
	//����һ��Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.set_Center(center);

	//����һ����
	Point p;
	p.setX(10);
	p.setY(9);
	//�жϹ�ϵ
	isCircle(c, p);

	system("pause");
	return 0;
}
