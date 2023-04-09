#include <iostream>
#include <set>
#include<string>
using namespace std;
//简介：
//所有元素都会在插入时自动被排序
//本质：
//set / multiset属于关联式容器，底层结构是用【二叉树】实现。
//set和multiset区别：
//set不允许容器中有重复的元素
//multiset允许容器中有重复的元素
void printSet(set<int>&s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
#pragma region 1)set构造和赋值
//构造：
//set<T> st; //默认构造函数：
//set(const set& st); //拷贝构造函数
//赋值：
//set& operator=(const set& st); //重载等号操作符

//void test01() {
//	set<int>s1;
//	s1.insert(10);//插入数据只有insert方式
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(30);//特点：自动排序并去重
//	printSet(s1);
//	set<int>s2(s1);
//	printSet(s2);
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 2)set容器的大小和交换
//函数原型：
//size(); //返回容器中元素的数目
//empty(); //判断容器是否为空
//swap(st); //交换两个集合容器


//void test01()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1的大小为： " << s1.size() << endl;//不能重新定义大小
//	}
//}
////交换
//void test02()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	set<int> s2;
//	s2.insert(100);
//	s2.insert(300);
//	s2.insert(200);
//	s2.insert(400);
//	cout << "交换前" << endl;
//	printSet(s1);
//	printSet(s2);
//	cout << endl;
//	cout << "交换后" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
#pragma endregion

#pragma region 3)set容器的插入和删除
//insert(elem); //在容器中插入元素。
//clear(); //清除所有元素
//erase(pos); //删除pos迭代器所指的元素，返回下一个元素的迭代器。
//erase(beg, end); //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
//erase(elem); //删除容器中值为elem的元素。


//void test01()
//{
//	set<int> s1;
//	//插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//	//删除
//	s1.erase(s1.begin());
//	printSet(s1);
//	s1.erase(30);
//	printSet(s1);
//	//清空
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
#pragma endregion

#pragma region 4)set查找和统计
//函数原型：
//find(key); //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//count(key); //统计key的元素个数

//void test01()
//{
//	set<int> s1;
//	//插入
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	//查找
//	set<int>::iterator pos = s1.find(30);
//	if (pos != s1.end())
//	{
//		cout << "找到了元素 ： " << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//	//统计
//	int num = s1.count(30);//对于set而言只有0或1（有）
//	cout << "num = " << num << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
#pragma endregion

#pragma region 5)set和multiset的区别
//区别：
//set不可以插入重复数据，而multiset可以
//set插入数据的同时会返回插入结果，表示插入是否成功
//multiset不会检测数据，因此可以插入重复数据

//void test01()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool> ret = s.insert(10);//对组
//	if (ret.second) {
//		cout << "第一次插入成功!" << endl;
//	}
//	else {
//		cout << "第一次插入失败!" << endl;
//	}
//	ret = s.insert(10);
//	if (ret.second) {
//		cout << "第二次插入成功!" << endl;
//	}
//	else {
//		cout << "第二次插入失败!" << endl;
//	}
//	//multiset
//	multiset<int> ms;
//	ms.insert(10);
//	ms.insert(10);
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
#pragma endregion

#pragma region 6)pair对组创建
//两种创建方式：
//pair<type, type> p(value1, value2);
//pair<type, type> p = make_pair(value1, value2);

//void test01()
//{
//	pair<string, int> p(string("Tom"), 20);//类似于字典
//	cout << "姓名： " << p.first << " 年龄： " << p.second << endl;
//	pair<string, int> p2 = make_pair("Jerry", 10);
//	cout << "姓名： " << p2.first << " 年龄： " << p2.second << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
#pragma endregion

#pragma region 7)set容器的内置类型指定排序规则
//利用仿函数，可以改变排序规则

//class MyCompare {
//public:
//	bool  operator()( int v1, int v2)const {
//		return v1 > v2;
//	}
//};
////set容器的排序
//void test01() {
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	printSet(s1);
//	//指定排序规则为从大到小
//	set<int,MyCompare>s2;
//	s2.insert(10);
//	s2.insert(20);
//	s2.insert(40);
//	s2.insert(30);
//	for (set<int,MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 8)set容器的自定义数据类型指定排序规则

//
//class Person {
//public:
//	Person(string name,int age) {
//		this->age = age;
//		this->name = name;
//	}
//	int age;
//	string name;
//};
//class comparePerson
//{
//public:
//	bool operator()(const Person& p1, const Person& p2) const
//	{
//		//按照年龄进行排序 降序
//		return p1.age > p2.age;
//	}
//};
//void test01() {
//	set<Person ,comparePerson>s;
//	Person p1("刘备", 23);
//	Person p2("关羽", 27);
//	Person p3("张飞", 25);
//	Person p4("赵云", 21);
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "姓名： " << it->name << " 年龄： " << it->age << endl;
//	}
//}
//int main() {
//	test01();
//}
#pragma endregion
