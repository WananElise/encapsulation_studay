#include <iostream>
using namespace std;
class student
{
 public:

	 string m_name;
	 int m_id;

 void showstudent()
  {
	 cout << "ѧ��������" << m_name << " ѧ���ţ�" << m_id << endl;

  }
 void setname(string name)
 {
	 m_name = name;

 }
 void setid(int id)
 {
	 m_id = id;
 }
};


int main()
{
	student c1;
	c1.setname("����");
	c1.setid(10);
	c1.showstudent();

















	system("pause");
	return 0;
}