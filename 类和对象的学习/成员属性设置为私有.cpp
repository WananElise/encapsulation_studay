#include<iostream>
using namespace std;
#include <string>
class person  //��Ա��������Ϊ˽��
{
private:
	string m_name;//�ɶ���д

	int m_age;//ֻ��

	string m_lover;//ֻд
public:
	void setName(string name)//д����
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
			cout << "���������" << endl;
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
	p1.setName("����");
	cout << "����Ϊ��" << p1.getName() << endl;
	p1.setAge(20);
	cout << "����Ϊ��" << p1.getAge()<< endl;
	p1.setlover("��ٻ");
	











	system("pause");
	return 0;
}