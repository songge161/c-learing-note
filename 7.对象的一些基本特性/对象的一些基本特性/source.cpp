#include <iostream>
using namespace std;
#include <string>
#pragma region 1���������Ϊ���Ա
////1���������Ϊ���ԱһЩע���
//class Phone {
//public:
//	string P_Brand;
//	Phone(string Pname) {
//		P_Brand = Pname;
//		cout << "Phone���캯��"<<endl;
//	}
//	~Phone() {
//		cout << "Phone��������" << endl;
//	}
//};
//class Person {
//public:
//	Person(string name, string Pname) :m_Name(name), m_Phone(Pname)//ͨ����������ֵ ����m_Phone(Pname)�ɵȼ���
//																	//Phone  m_Phone = Pname;
//	{
//		cout << "Person���캯��" << endl;
//	} 
//	~Person() {
//		cout << "Person��������" << endl;
//	}
//	//name
//	string m_Name;
//	//phoneNumber
//	Phone  m_Phone;
//};
////�������������Ϊ�����Ա�������ʱ���ȹ������������ڹ�������ep���ȴ���������࿪ʼ����Ȼ����ɸ������---��С�༯һ���ࣩ
////������������ڴ��ȴӴ�����Ȼ���ٲ��С��---------��ջ���ƣ��Ƚ����
//void test01() {
//	Person p("����", "Apple");
//	cout << p.m_Name << "����" << p.m_Phone.P_Brand << endl;
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 2)��̬��Ա-1.����
	////���壺�ڳ�Ա�����ͳ�Ա����ǰ����ؼ���static��Ϊ��̬��Ա
	////��̬��Ա�����ص㣺1�����ж��󶼹���ͬһ������ 2������׶η����ڴ� 3�����������������ʼ��
	//class Person {
	//public:
	//	static int m_A;
	//	int showB() {//��Ҫ�ú�������m_B���ʵõ�
	//		return m_B;
	//	}
	////��̬��Ա����Ҳ�з���Ȩ��
	//private:
	//	static int m_B;//������ʲ���
	//};
	//int Person::m_A = 100;
	//int Person::m_B = 100;
	//void test1() {
	//	Person p1;
	//	cout << p1.m_A<<endl;
	//	Person p2;
	//	p2.m_A = 200;
	//	cout << p2.m_A << endl;
	//}
	////��̬��Ա����������ĳ�������ϣ����ж��󶼹���ͬһ������
	////��˾�̬��Ա���������ַ��ʷ�ʽ

	//void test2() {
	//	//1��ͨ��������� 
	//	Person p;
	//	cout << p.m_A << endl;
	//	cout << p.showB() << endl;
	//	//2��ͨ���������з���
	//	cout << Person::m_A << endl;
	//}
	//int main() {
	//	//test1();
	//	test2();
	//}
#pragma endregion

#pragma region 2)��̬��Ա-1.����
//���ж��󶼹���ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	//class Person {
	//public:
	//	static void func() {
	//		m_A = 100;
	//		cout << "��̬����������"<<m_A << endl;
	//	}
	//	static int m_A;
	//private:
	//	static void func() {

	//	}//�����޷�����˽�е�
	//};
	//int Person::m_A = 0;
	//void test01() {
	//	//1��ͨ��������з���
	//	Person p;
	//	p.func();
	//	//2)ͨ���������з���
	//	Person::func();
	//}
	//int main() {
	//	test01();
	//	}
#pragma endregion

#pragma region 3)��Ա�����ͳ�Ա�����ֿ��洢
	////��C++��,1)��ĳ�Ա�����ͳ�Ա�����ֿ��洢2)ֻ�зǾ�̬��Ա������������Ķ�����
	//class Person{
	//	int m_A;//�Ǿ�̬��Ա����-������Ķ����ϵ�����
	//	static int m_B;//��̬��Ա����-��������Ķ����ϵ�����
	//	void func() {};//�Ǿ�̬��Ա����-��������Ķ����ϵ�����
	//	static void func2() {}//��̬��Ա����-��������Ķ����ϵ�����
	//};
	//int Person::m_B=100;
	//void test01() {//��Person��������Ϊ��ʱʵ��
	//	Person p;
	//	cout << "empty object sizeof:" << sizeof(p) << endl;//�ն����ڴ�Ϊ1byte��Ϊ�����ֿն���ռ���ڴ��λ�ã����Ի�洢һ�ֽڵ�ַ��Ϣ
	//}
	//void test02() {//�ǿն���
	//	Person p;
	//	cout << "sizeof p:" << sizeof(p);
	//}
	//int main() {
	//	//test01();
	//	test02();
	//}

#pragma endregion

#pragma region 4)thisָ��
	////thisָ��ָ�򱻵��ó�Ա���������Ķ���
	////��;��1)��̬�ͳ�Ա����ͬ�� a=this.a
	////2)��ķǾ�̬��Ա�������ض�������return *this(����this����Ϊ��ַ����*������)
	//class Person
	//{
	//public:
	//	int age;
	//	Person(int age) {
	//		this->age = age;
	//	}
	//	Person& ageAdd(Person &p) {
	//		this->age += p.age;
	//		return *this;
	//	}
	//
	//private:

	//};

	//void test() {
	//	Person p1(10);
	//	Person p2(10);
	//	p2.ageAdd(p1).ageAdd(p1);//��ʽ���˼��
	//	cout << p2.age;
	//}
	//int main() {
	//	test();
	//}
#pragma endregion

#pragma region 5)��ָ����ʳ�Ա����
	//class Person {
	//public:
	//	void showClassName() {
	//		cout << "perSon class" << endl;
	//	}
	//	void showPersonAge() {
	//		if (this == NULL) {
	//			return;//Ԥ������
	//		}
	//		//����ԭ���Ǵ���ָ��Ϊ��
	//		cout << "age=" <<this->m_Age<< endl;
	//	}
	//	int m_Age;
	//};
	//void test01() {
	//	Person* p=NULL;
	//	p->showClassName();//���Է������
	//	p->showPersonAge();//�޷�����
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 6)const���γ�Ա����
	////��������1���������ڲ����޸ĳ�Ա���ԣ�2����Ա���������ӹؼ���mutable�󳣺�������Ȼ�����޸ĳ�Ա����
	////������:1)������ǰ��const 2��������ֻ�ܵ��ó�����
	////������
	//class Person {
	//public:
	//	void ShowPerson() const //�ڱ��ʽ���const��ʾ�ú��������޸ĳ�Ա���ԣ����ε��Ǻ����Դ���thisָ�루ָ�볣��-ָ�򲻿ɸ��ģ�������constʹ��ָ���ֵҲ���ɸ��ġ�
	//	{
	//		//m_A = 100;  //��佫�����
	//		m_B = 100;//��佫�������
	//		cout << "A:" << m_A << "|B:" << m_B<<endl;
	//	}
	//	void func() {//ͬ���ģ����������Կɱ䣨mutable��

	//	}
	//	int m_A;
	//	mutable int m_B;//�ӹؼ���mutable�󳣺�������Ȼ�����޸ĳ�Ա����
	//};
	//void test01() {
	//	Person p;
	//	p.ShowPerson();
	//}
	////������

	//void test02() {
	//	const Person p; //�������޸�ָ��ָ���ֵ
	//	//p.m_A = 100;//������
	//	p.m_B = 100;//���ᱨ��
	//	p.ShowPerson();
	//	//������ֻ�ܵ��ó�����
	//	//p.func(); //���������ܵ�����ͨ����
	//}
	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion
