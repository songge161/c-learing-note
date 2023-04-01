#include <iostream>
using namespace std;
#include <string>
//友元-》全局函数/类/成员函数 做友元
#pragma region 1）全局函数做友元
	//class Building//建筑物类
	//{
	//	friend void  goodGuy(Building& building);//友元，可以访问对象中的私有成员
	//	friend void  goodGuy2(Building *building);
	//public:
	//	string m_SittingRoom;
	//	Building() {
	//		m_SittingRoom = "客厅";
	//		m_BedRoom = "卧室";
	//	};

	//private:
	//	string m_BedRoom;
	//};
	////全局函数
	// void  goodGuy(Building &building)//1）引用
	// {
	//	cout << "正在访问" << building.m_SittingRoom << endl;
	//	cout << "正在访问" << building.m_BedRoom << endl;
	// }
	// void  goodGuy2(Building * building)//2)指针
	// {
	//	 cout << "正在访问" << building->m_SittingRoom << endl;
	//	 cout << "正在访问" << building->m_BedRoom << endl;
	// }
	//int main() {
	//	Building b;
	//	goodGuy(b);
	//	goodGuy2(&b);
	//}
#pragma endregion

#pragma region 2)类做友元
	////一个类可以访问另一个类的私有成员
	//class Building;
	//class GoodGuy {
	//public:
	//	GoodGuy();
	//	void Visit();//访问Building类中的属性
	//	Building* building;
	//};
	//class Building {
	//	friend class GoodGuy;//Goodguy是本类的友元类，可以访问本类的私有成员
	//public:
	//	Building();
	//	string m_SittingRoom;
	//private:
	//	string m_BedRoom;
	//};
	////类外写成员函数
	//Building::Building() {
	//	m_BedRoom = "卧室";
	//	m_SittingRoom = "客厅";
	//}
	//GoodGuy::GoodGuy() {
	//	//创建一个建筑物的对象
	//	building = new Building; 
	//}
	//void GoodGuy::Visit() {
	//	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	//	cout << "好基友正在访问：" << building->m_BedRoom << endl;
	//}
	//void test01() {
	//	GoodGuy g;
	//	g.Visit();
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 3)成员函数做友元
class Building;
class GoodGuy {
public:
	GoodGuy();
	void visit();//让成员函数访问Building的私有成员
	void visit2();//该为普通的成员函数
	Building* building;
};
class Building {
	friend void GoodGuy::visit();//让成员函数访问Building的私有成员，成为友元成员函数;
public:
	Building();
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//类外实现
Building::Building(){
	m_BedRoom = "卧室";
	m_SittingRoom = "客厅";
}
GoodGuy::GoodGuy() {
	building = new Building;
}
void GoodGuy::visit() {
	cout << "visit正在访问：" << building->m_SittingRoom<<endl;
	cout << "visit正在访问：" << building->m_BedRoom<<endl;
}
void GoodGuy::visit2() {
	cout << "visit2正在访问：" << building->m_SittingRoom << endl;
	//cout << "visit2正在访问：" << building->m_BedRoom << endl; //无法访问
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
