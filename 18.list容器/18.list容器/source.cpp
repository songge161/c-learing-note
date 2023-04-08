#include<iostream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
//链表（list）是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的
//链表的组成：链表由一系列结点组成
//结点的组成：一个是存储数据元素的数据域，另一个是存储下一个结点地址的指针域
//STL中的链表是一个双向循环链表
//由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持前移和后移，属于双向迭代器
//list的优点：
//采用动态存储分配，不会造成内存浪费和溢出
//链表执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素
//list的缺点：
//链表灵活，但是空间(指针域) 和 时间（遍历）额外耗费较大
//List有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的。


void printList(const list<int>&l){
	for (list<int>::const_iterator it=l.begin(); it != l.end(); it++) {
		cout << *(it) << " ";
	}
	cout << endl;
}


#pragma region 1)list构造函数
//函数原型：
//list<T> lst; //list采用采用模板类实现,对象的默认构造形式：
//list(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身。
//list(n, elem); //构造函数将n个elem拷贝给本身。
//list(const list& lst); //拷贝构造函数

//void printList(const list<int>&l){
//	for (list<int>::const_iterator it=l.begin(); it != l.end(); it++) {
//		cout << *(it) << " ";
//	}
//	cout << endl;
//}
//void test01(){
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	//遍历容器
//	printList(l1);
//	list<int>l2(l1.begin(), l1.end());
//	printList(l2);
//	list<int>l3(l2);
//	printList(l3);
//	list<int>l4(10, 1000);
//	printList(l4);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 2)list赋值和交换
//函数原型：
//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem); //将n个elem拷贝赋值给本身。
//list& operator=(const list& lst); //重载等号操作符
//swap(lst); //将lst与本身的元素互换。


//void test01() {
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	printList(l1);
//	list<int>l2;
//	l2 = l1;//=赋值
//	printList(l2);
//	list<int>l3;
//	l3.assign(l2.begin(), l2.end());
//	printList(l3);
//	list<int>l4;
//	l4.assign(10, 100);
//	printList(l4);
//
//}
//void test02() {
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	list <int>l2;
//	l2.assign(10, 100);
//	cout<<"交换前l1-l2:"<<endl;
//	printList(l1);
//	printList(l2);
//	l1.swap(l2);
//	cout << "交换后l1-l2:"<<endl;
//	printList(l1);
//	printList(l2);
//}
//int main() {
//	test02();
//}
#pragma endregion

#pragma region 3)list的大小操作
//函数原型：
//size(); //返回容器中元素的个数
//empty(); //判断容器是否为空
//resize(num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
////如果容器变短，则末尾超出容器长度的元素被删除。
//resize(num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
////如果容器变短，则末尾超出容器长度的元素被删除。

//void test01() {
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	printList(l1);
//	if (l1.empty()) {
//		cout << "l1为空" << endl;
//	}
//	else
//	{
//		cout << "l1不为空" << endl;
//		cout << "l1的个数" << l1.size() << endl;
//
//	}
//	//重新指定大小
//	l1.resize(5,1);
//	printList(l1);
//	l1.resize(3);
//	printList(l1);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 4)list的插入和删除
//函数原型：
//push_back(elem);//在容器尾部加入一个元素
//pop_back();//删除容器中最后一个元素
//push_front(elem);//在容器开头插入一个元素
//pop_front();//从容器开头移除第一个元素
//insert(pos, elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
//insert(pos, n, elem);//在pos位置插入n个elem数据，无返回值。
//insert(pos, beg, end);//在pos位置插入[beg,end)区间的数据，无返回值。
//clear();//移除容器的所有数据
//erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置。
//erase(pos);//删除pos位置的数据，返回下一个数据的位置。
//remove(elem);//删除容器中所有与elem值匹配的元素。

//void test01() {
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//	printList(L);
//	//删除
//	L.pop_front();
//	L.pop_back();
//	//插入
//	list<int>::iterator it = L.begin();
//	L.insert(it++, 1000);
//	printList(L);
//	//删除
//	it = L.begin();
//	L.erase(++it);
//	printList(L);
//	L.push_back(1000);
//	L.remove(1000);
//	printList(L);
//	L.clear();
//	printList(L);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 5）list数据存取
//函数原型：
//front(); //返回第一个元素。
//back(); //返回最后一个元素。


//void test01() {
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	//list容器中不可以通过[]或者at方式访问数据-list为链表，不是连续空间存储，需要单个访问
//	printList(l1);
//	cout << "第一个元素" << l1.front() << endl;
//	cout << "最后一个元素" << l1.back() << endl;
//
//	//验证迭代器是不支持随机访问的
//	list<int>::iterator it = l1.begin();
//	it++;
//	it--;
//	//it = it + 1; //报错，不支持随机访问
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 6)list反转和排序
//函数原型：
//reverse(); //反转链表
//sort(); //链表排序

//void test01() {
//	//反转
//	list<int>l1;
//	l1.push_back(1);
//	l1.push_back(2);
//	l1.push_back(3);
//	l1.push_back(4);
//	l1.push_back(5);
//	printList(l1);
//	l1.reverse();
//	printList(l1);
//}
//bool myCompare(int v1,int v2) {
//	//降序 就让第一个数＞第二个数
//	return v1 > v2;
//}
////排序
//void test02() {
//	list<int>l1;
//	l1.push_back(1);
//	l1.push_back(4);
//	l1.push_back(3);
//	l1.push_back(2);
//	l1.push_back(5);
//	list<int>l2(l1);
//	printList(l1);
//	//内部的排序算法
//	l1.sort();
//	printList(l1);
//	//sort(l2.begin(), l2.end());//不支持外部的随机访问算法
//	//printList(l2);
//
//	//降序
//	l1.sort(myCompare);
//	printList(l1);
//}
//int main() {
//	test02();
//}
#pragma endregion

#pragma region 7)list排序案例
//案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
//排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序

class Person {
public:
	Person(string name,int age,int height) {
		this->m_Age = age;
		this->m_Height = height;
		this->m_Name = name;
	}
	int m_Age;
	int m_Height;
	string m_Name;
};
void printPList(list<Person>&L) {
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
		cout << (*it).m_Name << "年龄" << (*it).m_Age << " 身高" << it->m_Height<<endl;
	}
}
//指定排序规则
bool comparePerson(Person &p1,Person&p2) {
	//按照年龄进行升序
	if (p1.m_Age == p2.m_Age) {
		return p1.m_Height > p2.m_Height;
	}
	return p1.m_Age < p2.m_Age;
}
void test01() {
	list<Person> L;
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	printPList(L);
	//排序
	cout << "按年龄排序并在按相同年龄以身高降序排序后" << endl;
	L.sort(comparePerson);
	printPList(L);
}
int main() {
	test01();
}
#pragma endregion
