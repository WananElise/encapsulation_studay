#include<iostream>
using namespace std;
const double pi = 3.14;
//���һ��Բ����Բ���ܳ�
//��ʽ :  2 * pi * �뾶 
//cliss �������һ����
class circle
{
	//����Ȩ��
	//����Ȩ��
 public:

	//����
	 int m_r;

	//��Ϊ
	 double calculatezc()
	 {
		 return 2 * pi * m_r;
	 }
};



int main()
{
	circle c1;
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ��"<<c1.calculatezc() << endl;

















	system("pause");
	return 0;
}