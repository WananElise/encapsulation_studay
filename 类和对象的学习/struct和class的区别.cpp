#include <iostream>
using namespace std;
#include <string>
//结构体
struct person1
{
	string name;
	int age;
	string sex;


}s_p;
class person2
{
	string name;
	int age;
	string sex;

};




int main()
{
	s_p.name = "张三";

	person2 c_p;//结构体默认权限是公共 public；
	//c_p.name = "张三";//class的默认权限是私人private；




















	system("pause");
	return 0;
}