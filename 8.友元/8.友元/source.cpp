#include <iostream>
using namespace std;
#include <string>
//��Ԫ-��ȫ�ֺ���/��/��Ա���� ����Ԫ
#pragma region 1��ȫ�ֺ�������Ԫ
	//class Building//��������
	//{
	//	friend void  goodGuy(Building& building);//��Ԫ�����Է��ʶ����е�˽�г�Ա
	//	friend void  goodGuy2(Building *building);
	//public:
	//	string m_SittingRoom;
	//	Building() {
	//		m_SittingRoom = "����";
	//		m_BedRoom = "����";
	//	};

	//private:
	//	string m_BedRoom;
	//};
	////ȫ�ֺ���
	// void  goodGuy(Building &building)//1������
	// {
	//	cout << "���ڷ���" << building.m_SittingRoom << endl;
	//	cout << "���ڷ���" << building.m_BedRoom << endl;
	// }
	// void  goodGuy2(Building * building)//2)ָ��
	// {
	//	 cout << "���ڷ���" << building->m_SittingRoom << endl;
	//	 cout << "���ڷ���" << building->m_BedRoom << endl;
	// }
	//int main() {
	//	Building b;
	//	goodGuy(b);
	//	goodGuy2(&b);
	//}
#pragma endregion

#pragma region 2)������Ԫ
	////һ������Է�����һ�����˽�г�Ա
	//class Building;
	//class GoodGuy {
	//public:
	//	GoodGuy();
	//	void Visit();//����Building���е�����
	//	Building* building;
	//};
	//class Building {
	//	friend class GoodGuy;//Goodguy�Ǳ������Ԫ�࣬���Է��ʱ����˽�г�Ա
	//public:
	//	Building();
	//	string m_SittingRoom;
	//private:
	//	string m_BedRoom;
	//};
	////����д��Ա����
	//Building::Building() {
	//	m_BedRoom = "����";
	//	m_SittingRoom = "����";
	//}
	//GoodGuy::GoodGuy() {
	//	//����һ��������Ķ���
	//	building = new Building; 
	//}
	//void GoodGuy::Visit() {
	//	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	//	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
	//}
	//void test01() {
	//	GoodGuy g;
	//	g.Visit();
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 3)��Ա��������Ԫ
class Building;
class GoodGuy {
public:
	GoodGuy();
	void visit();//�ó�Ա��������Building��˽�г�Ա
	void visit2();//��Ϊ��ͨ�ĳ�Ա����
	Building* building;
};
class Building {
	friend void GoodGuy::visit();//�ó�Ա��������Building��˽�г�Ա����Ϊ��Ԫ��Ա����;
public:
	Building();
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//����ʵ��
Building::Building(){
	m_BedRoom = "����";
	m_SittingRoom = "����";
}
GoodGuy::GoodGuy() {
	building = new Building;
}
void GoodGuy::visit() {
	cout << "visit���ڷ��ʣ�" << building->m_SittingRoom<<endl;
	cout << "visit���ڷ��ʣ�" << building->m_BedRoom<<endl;
}
void GoodGuy::visit2() {
	cout << "visit2���ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "visit2���ڷ��ʣ�" << building->m_BedRoom << endl; //�޷�����
}
void test01() {
	GoodGuy g;
	g.visit();
	g.visit2();
}
int main() {
	test01();
}
#pragma endregion
