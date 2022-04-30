#include<iostream>
using namespace std;
const double pi = 3.14;
//设计一个圆类求圆的周长
//公式 :  2 * pi * 半径 
//cliss 代表设计一个类
class circle
{
	//访问权限
	//公共权限
 public:

	//属性
	 int m_r;

	//行为
	 double calculatezc()
	 {
		 return 2 * pi * m_r;
	 }
};



int main()
{
	circle c1;
	c1.m_r = 10;
	cout << "圆的周长为："<<c1.calculatezc() << endl;

















	system("pause");
	return 0;
}