#include <iostream>
#include <vector>//����ģ��
#include <algorithm>//�㷨~
#include <string>
using namespace std;
//STL��ʶ��Standrad Template Library��
//��һ�ַ��ͱ��˼�룬Ŀ���Ǹ��������
//STL�����Ϸ�Ϊ������containetr���㷨��algorithm����������iterator��
//����������������㷨�����������º�����������������������ռ�������

#pragma region 1)�����㷨��������ʶ-Vector
//void myPrint(int val) {
//	cout <<val << "\t";
//}
//void test01() {
//	vector<int> v;//Vector����
//	v.push_back(10);//β��
//	v.push_back(20);
//	v.push_back(70);
//	v.push_back(50);
//	//ͨ�����������������е�����-������������ָ�룬ָ����Ҫ������
//	vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ���һ��Ԫ��
//	vector<int>::iterator itEnd = v.end();//ָ�����������һ��Ԫ�ص���һλ
//	//��һ�ֱ�����ʽ-while
//	cout << "��һ�ֱ�����ʽ";
//	while (itBegin!=itEnd)
//	{
//		cout << *itBegin << "\t";
//		itBegin++;
//	}
//	cout << endl;
//	//�ڶ��ֱ�����ʽ-for
//	cout << "�ڶ��ֱ�����ʽ";
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << "\t";
//	}
//	cout << endl;
//	//�����ֱ�����ʽ-for_each
//	cout << "�����ֱ�����ʽ";
//	for_each(v.begin(), v.end(), myPrint);//���ûص�
//	cout << endl;
//}
//int main() {
//	test01();
//}

#pragma endregion

#pragma region 2)Vector����Զ�����������
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
//	//�������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	//��������
//	for (vector<Person>::iterator it = v.begin(); it < v.end(); it++) {
//		cout << "name:" << (*it).m_Name << "\tage:" << (*it).m_Age << endl;//*�����ú�ʹ��
//		cout << "name:" << it->m_Name << "\tage:" << it->m_Age << endl;//��Ϊָ��
//	}
//}
////����Զ������ݵ�ָ��
//void test02() {
//	vector<Person*> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	//�������������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	//��������
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "name:" << (*it)->m_Name << "\tage:" << (*it)->m_Age << endl;
//	}
//}
//int main() {
//	test01();
//	test02();
//}
#pragma endregion

#pragma region 3)Vector����Ƕ������
void test01() {
	vector<vector<int>>v;
	//����С����
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	//��С�����������
	for (int i = 0; i < 4; i++) {
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}
	//��С�������뵽��������
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	//ͨ�����������������ݱ���һ��
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
