#include <iostream>
using namespace std;
//����һ������
class person
{
 
 public:
	 //����Ȩ��
	 string name;
protected:
	//����Ȩ��
	string car;
private:
	//˽��Ȩ��
	int pssword;

	void func()
	{
		name = "����";//����
		car = "������";//����
		pssword = 123456;//���п�����

	}
public:
	void setcar(string car)
	{
		car = name;

	}

};


int main()
{
	person p1;
	p1.name = "����";
	//p1.car = "����";
	p1.setcar("����");
     int a = 100;
	system("pause");
	return 0;
}