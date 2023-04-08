#include <iostream>
#include <vector>//容器模板
#include <algorithm>//算法~
#include <string>
using namespace std;
//STL初识（Standrad Template Library）
//是一种泛型编程思想，目的是复用性提高
//STL广义上分为容器（containetr）算法（algorithm）迭代器（iterator）
//六大组件：容器，算法，迭代器，仿函数，适配器（配接器），空间配置器

#pragma region 1)容器算法迭代器初识-Vector
//void myPrint(int val) {
//	cout <<val << "\t";
//}
//void test01() {
//	vector<int> v;//Vector容器
//	v.push_back(10);//尾插
//	v.push_back(20);
//	v.push_back(70);
//	v.push_back(50);
//	//通过迭代器访问容器中的数据-迭代器类似于指针，指向需要解引用
//	vector<int>::iterator itBegin = v.begin();//起始迭代器，指向第一个元素
//	vector<int>::iterator itEnd = v.end();//指向容器的最后一个元素的下一位
//	//第一种遍历方式-while
//	cout << "第一种遍历方式";
//	while (itBegin!=itEnd)
//	{
//		cout << *itBegin << "\t";
//		itBegin++;
//	}
//	cout << endl;
//	//第二种遍历方式-for
//	cout << "第二种遍历方式";
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << "\t";
//	}
//	cout << endl;
//	//第三种遍历方式-for_each
//	cout << "第三种遍历方式";
//	for_each(v.begin(), v.end(), myPrint);//利用回调
//	cout << endl;
//}
//int main() {
//	test01();
//}

#pragma endregion

#pragma region 2)Vector存放自定义数据类型
//class Person {
//public:
//	Person(string name,int age) {
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	string m_Name;
//	int m_Age;
//};
//void test01() {
//	vector<Person> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	//向容器添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	//遍历数据
//	for (vector<Person>::iterator it = v.begin(); it < v.end(); it++) {
//		cout << "name:" << (*it).m_Name << "\tage:" << (*it).m_Age << endl;//*解引用后使用
//		cout << "name:" << it->m_Name << "\tage:" << it->m_Age << endl;//作为指针
//	}
//}
////存放自定义数据的指针
//void test02() {
//	vector<Person*> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	//向容器添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	//遍历容器
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "name:" << (*it)->m_Name << "\tage:" << (*it)->m_Age << endl;
//	}
//}
//int main() {
//	test01();
//	test02();
//}
#pragma endregion

#pragma region 3)Vector容器嵌套容器
void test01() {
	vector<vector<int>>v;
	//创建小容器
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	//向小容器添加数据
	for (int i = 0; i < 4; i++) {
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}
	//将小容器插入到大容器中
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	//通过大容器将所以数据遍历一遍
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
			cout << *vit << " ";
		}
		cout << endl;
	}
}
int main() {
	test01();
}
#pragma endregion
