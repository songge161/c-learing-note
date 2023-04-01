#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;
class Students{
	//访问权限 1）public 公共权限；2）protected 保护权限 ；3）private 私有权限。
	//权限名       类内是否可以访问           类外是否可以访问 （1/0）			能否继承而访问父内容	适用方面
	//public			1								1							1					
	//protected			1								0							1					
	//private			1								0							0					
public:
	string m_Name;
	int m_Id;
	void showStudent() {
		cout << "name:" << m_Id << "name:" << m_Name << endl;
	}
	Students() {//构造
		this->m_Id = 0;
		this->m_Name ="not found";
	}
	Students(string name,int id) {//构造
		this->m_Id = id;
		this->m_Name = name;
	}
	void setInf(string name,int id) {//直接函数赋值
		m_Name = name;
		m_Id = id;
	}
};
int main() {
	Students s1("s1",211);
	s1.showStudent();
	Students s2;
	s2.showStudent();
	s2.setInf("haha", 10);
	s2.showStudent();
}