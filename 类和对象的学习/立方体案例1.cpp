#include<iostream>
using namespace std;
//创建立方体类
class Cube
{
private://私有 成员属性有 长 宽 高

	//长
	int m_L;
	//宽
	int m_W;
	//高
	int m_H;
public://公共行为有 获取设置长宽高   获取面积 体积
	//长
	void setm_l(int l)
	{
		m_L = l;
	}
	int  getm_l()
	{
		return m_L;
	}
	//宽
	void setm_W(int w)
	{
		m_W = w;
	}
	int  getm_W()
	{
		return m_W;
	}
	//高
	void setm_H(int h)
	{
		m_H = h;
	}
	int getm_H()
	{
		return m_H;
	}
	//获取面积
	void getminaji()
	{
		int a = 0;
		a = (m_L * m_W) * 2 + (m_L * m_H) * 2 + (m_W * m_H) * 2;
		cout << "该立方体的面积为：[" << a << "]" << endl;
	}
	//获取体积
	void gettiji()
	{
		int a = 0;
		a = m_L * m_H * m_W;
		cout << "该立方体体积为： [" << a << "]" << endl;
	}
	//创建一个成员函数判断两个立方体是否相等
	bool siSameByClass(Cube& c2)
	{
		if (m_H == c2.getm_H() &&m_L== c2.getm_l() &&m_W== c2.getm_W())
		{
			return true;
		}
		else
		{
			return false;
		}
	}


};
//创建一个全局函数判断两个立方体是否相等
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getm_H() == c2.getm_H() && c1.getm_l() == c2.getm_l() && c1.getm_W() == c2.getm_W())
	{
		return true;
	}
	else
	{
		return false;
	}
}



int main()
{
	Cube c1;
	c1.setm_l(8);
	c1.setm_W(7);
	c1.setm_H(6);
	cout << "立方体的长为：" << c1.getm_l() << " 立方体的宽为：" 
		<< c1.getm_W() << " 立方体的高为：" << c1.getm_H() << endl;
	c1.getminaji();
	c1.gettiji();

	Cube c2;
	c2.setm_l(8);
	c2.setm_W(7);
	c2.setm_H(6);
	//利用全局函数判断
	bool ret = isSame(c1, c2);
	if (ret!=0)
	{
		cout << "全局函数判断；这两个立方体是相等的" << endl;
	}
	else
	{
		cout << "全局函数判断；这两个立方体是不相等的" << endl;
	}
	//利用成员函数判断
	 ret = c1.siSameByClass(c2);
		if (ret != 0)
		{
			cout << "成员函数判断；这两个立方体是相等的" << endl;
		}
		else
		{
			cout << "成员函数判断；这两个立方体是不相等的" << endl;
		}




	system("pause");
	return 0;
}
