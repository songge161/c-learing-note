#include <iostream>
#include <set>
#include<string>
using namespace std;
//��飺
//����Ԫ�ض����ڲ���ʱ�Զ�������
//���ʣ�
//set / multiset���ڹ���ʽ�������ײ�ṹ���á���������ʵ�֡�
//set��multiset����
//set���������������ظ���Ԫ��
//multiset�������������ظ���Ԫ��
void printSet(set<int>&s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
#pragma region 1)set����͸�ֵ
//���죺
//set<T> st; //Ĭ�Ϲ��캯����
//set(const set& st); //�������캯��
//��ֵ��
//set& operator=(const set& st); //���صȺŲ�����

//void test01() {
//	set<int>s1;
//	s1.insert(10);//��������ֻ��insert��ʽ
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(30);//�ص㣺�Զ�����ȥ��
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

#pragma region 2)set�����Ĵ�С�ͽ���
//����ԭ�ͣ�
//size(); //����������Ԫ�ص���Ŀ
//empty(); //�ж������Ƿ�Ϊ��
//swap(st); //����������������


//void test01()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	if (s1.empty())
//	{
//		cout << "s1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�СΪ�� " << s1.size() << endl;//�������¶����С
//	}
//}
////����
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
//	cout << "����ǰ" << endl;
//	printSet(s1);
//	printSet(s2);
//	cout << endl;
//	cout << "������" << endl;
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

#pragma region 3)set�����Ĳ����ɾ��
//insert(elem); //�������в���Ԫ�ء�
//clear(); //�������Ԫ��
//erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
//erase(beg, end); //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
//erase(elem); //ɾ��������ֵΪelem��Ԫ�ء�


//void test01()
//{
//	set<int> s1;
//	//����
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//	//ɾ��
//	s1.erase(s1.begin());
//	printSet(s1);
//	s1.erase(30);
//	printSet(s1);
//	//���
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

#pragma region 4)set���Һ�ͳ��
//����ԭ�ͣ�
//find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//count(key); //ͳ��key��Ԫ�ظ���

//void test01()
//{
//	set<int> s1;
//	//����
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	//����
//	set<int>::iterator pos = s1.find(30);
//	if (pos != s1.end())
//	{
//		cout << "�ҵ���Ԫ�� �� " << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//	//ͳ��
//	int num = s1.count(30);//����set����ֻ��0��1���У�
//	cout << "num = " << num << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
#pragma endregion

#pragma region 5)set��multiset������
//����
//set�����Բ����ظ����ݣ���multiset����
//set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//multiset���������ݣ���˿��Բ����ظ�����

//void test01()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool> ret = s.insert(10);//����
//	if (ret.second) {
//		cout << "��һ�β���ɹ�!" << endl;
//	}
//	else {
//		cout << "��һ�β���ʧ��!" << endl;
//	}
//	ret = s.insert(10);
//	if (ret.second) {
//		cout << "�ڶ��β���ɹ�!" << endl;
//	}
//	else {
//		cout << "�ڶ��β���ʧ��!" << endl;
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

#pragma region 6)pair���鴴��
//���ִ�����ʽ��
//pair<type, type> p(value1, value2);
//pair<type, type> p = make_pair(value1, value2);

//void test01()
//{
//	pair<string, int> p(string("Tom"), 20);//�������ֵ�
//	cout << "������ " << p.first << " ���䣺 " << p.second << endl;
//	pair<string, int> p2 = make_pair("Jerry", 10);
//	cout << "������ " << p2.first << " ���䣺 " << p2.second << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}
#pragma endregion

#pragma region 7)set��������������ָ���������
//���÷º��������Ըı��������

//class MyCompare {
//public:
//	bool  operator()( int v1, int v2)const {
//		return v1 > v2;
//	}
//};
////set����������
//void test01() {
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	printSet(s1);
//	//ָ���������Ϊ�Ӵ�С
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

#pragma region 8)set�������Զ�����������ָ���������

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
//		//��������������� ����
//		return p1.age > p2.age;
//	}
//};
//void test01() {
//	set<Person ,comparePerson>s;
//	Person p1("����", 23);
//	Person p2("����", 27);
//	Person p3("�ŷ�", 25);
//	Person p4("����", 21);
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << "������ " << it->name << " ���䣺 " << it->age << endl;
//	}
//}
//int main() {
//	test01();
//}
#pragma endregion
