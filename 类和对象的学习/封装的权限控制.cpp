#include <iostream>
using namespace std;
//创建一个人类
class person
{
 
 public:
	 //公共权限
	 string name;
protected:
	//保护权限
	string car;
private:
	//私有权限
	int pssword;

	void func()
	{
		name = "张三";//姓名
		car = "拖拉机";//汽车
		pssword = 123456;//银行卡密码

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
	p1.name = "李四";
	//p1.car = "奔驰";
	p1.setcar("奔驰");
     int a = 100;
	system("pause");
	return 0;
}