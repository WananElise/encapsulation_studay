#include<iostream>
using namespace std;
//������������
class Cube
{
private://˽�� ��Ա������ �� �� ��

	//��
	int m_L;
	//��
	int m_W;
	//��
	int m_H;
public://������Ϊ�� ��ȡ���ó����   ��ȡ��� ���
	//��
	void setm_l(int l)
	{
		m_L = l;
	}
	int  getm_l()
	{
		return m_L;
	}
	//��
	void setm_W(int w)
	{
		m_W = w;
	}
	int  getm_W()
	{
		return m_W;
	}
	//��
	void setm_H(int h)
	{
		m_H = h;
	}
	int getm_H()
	{
		return m_H;
	}
	//��ȡ���
	void getminaji()
	{
		int a = 0;
		a = (m_L * m_W) * 2 + (m_L * m_H) * 2 + (m_W * m_H) * 2;
		cout << "������������Ϊ��[" << a << "]" << endl;
	}
	//��ȡ���
	void gettiji()
	{
		int a = 0;
		a = m_L * m_H * m_W;
		cout << "�����������Ϊ�� [" << a << "]" << endl;
	}
	//����һ����Ա�����ж������������Ƿ����
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
//����һ��ȫ�ֺ����ж������������Ƿ����
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
	cout << "������ĳ�Ϊ��" << c1.getm_l() << " ������Ŀ�Ϊ��" 
		<< c1.getm_W() << " ������ĸ�Ϊ��" << c1.getm_H() << endl;
	c1.getminaji();
	c1.gettiji();

	Cube c2;
	c2.setm_l(8);
	c2.setm_W(7);
	c2.setm_H(6);
	//����ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);
	if (ret!=0)
	{
		cout << "ȫ�ֺ����жϣ�����������������ȵ�" << endl;
	}
	else
	{
		cout << "ȫ�ֺ����жϣ��������������ǲ���ȵ�" << endl;
	}
	//���ó�Ա�����ж�
	 ret = c1.siSameByClass(c2);
		if (ret != 0)
		{
			cout << "��Ա�����жϣ�����������������ȵ�" << endl;
		}
		else
		{
			cout << "��Ա�����жϣ��������������ǲ���ȵ�" << endl;
		}




	system("pause");
	return 0;
}
