#include<iostream>
using namespace std;
#include <string>
class person  //成员属性设置为私有
{
private:
	string m_name;//可读可写

	int m_age;//只读

	string m_lover;//只写
public:
	void setName(string name)//写姓名
	{
		m_name = name;
	}
	string getName()
	{
		return m_name;
	}
	int getAge()
	{
		
		return m_age;
	}
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			m_age = 0;
			cout << "你个老妖精" << endl;
			return;
		}
		m_age = age;
	}
	void setlover (string name)
	{
		m_lover = name;

	}




};













int main()
{

	person p1;
	p1.setName("张三");
	cout << "姓名为：" << p1.getName() << endl;
	p1.setAge(20);
	cout << "年龄为：" << p1.getAge()<< endl;
	p1.setlover("李倩");
	











	system("pause");
	return 0;
}