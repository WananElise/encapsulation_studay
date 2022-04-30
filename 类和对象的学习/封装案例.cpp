#include <iostream>
using namespace std;
class student
{
 public:

	 string m_name;
	 int m_id;

 void showstudent()
  {
	 cout << "学生姓名：" << m_name << " 学生号：" << m_id << endl;

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
	c1.setname("张三");
	c1.setid(10);
	c1.showstudent();

















	system("pause");
	return 0;
}