#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;
class Students{
	//����Ȩ�� 1��public ����Ȩ�ޣ�2��protected ����Ȩ�� ��3��private ˽��Ȩ�ޡ�
	//Ȩ����       �����Ƿ���Է���           �����Ƿ���Է��� ��1/0��			�ܷ�̳ж����ʸ�����	���÷���
	//public			1								1							1					
	//protected			1								0							1					
	//private			1								0							0					
public:
	string m_Name;
	int m_Id;
	void showStudent() {
		cout << "name:" << m_Id << "name:" << m_Name << endl;
	}
	Students() {//����
		this->m_Id = 0;
		this->m_Name ="not found";
	}
	Students(string name,int id) {//����
		this->m_Id = id;
		this->m_Name = name;
	}
	void setInf(string name,int id) {//ֱ�Ӻ�����ֵ
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