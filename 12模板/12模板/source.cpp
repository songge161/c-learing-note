#include <iostream>
using namespace std;
#include <string>
//����ģ�壺���ͱ�̵���Ҫ��ʽ��������ģ����ƣ�1������ģ�� 2����ģ��
//��׼�﷨ template <				typename                                                   T>
//          ģ��      �����������ŵ��������ͣ�������class����           ͨ���������ͣ�ͨ��Ϊ��д��ĸ

#pragma region 1.1)����ģ��-��������
////�������ͽ����ĺ���
//void swapInt(int &a, int &b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
////�������������ͺ���
//void swapDouble(double &a,double &b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}
////����ģ��
//template <typename T>//����һ��ģ�壬���߱���������������T��Ҫ����,T��ͨ����������
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//���ַ�ʽʹ��ģ��
//	//1���Զ������Ƶ�
//	mySwap(a, b);
//	cout << "a-b  " << a << "-" << b << endl;
//	//2)��ʾָ������
//	mySwap<int>(a, b);
//	cout << "a-b  " << a << "-" << b << endl;		
//}	
#pragma endregion

#pragma region 1.2)����ģ��-��������
	////�Ӵ�С���� char int
	////�����㷨��
	//template<class T>
	//void mySwap(T& a, T& b) {
	//	T temp = a;
	//	a = b;
	//	b = temp;
	//}

	//template< class T >
	//void mySort(T arr[],int len) {
	//	for (int i = 0; i < len; i++)
	//	{
	//		int max =i;//�϶����ֵΪi
	//		for (int j = i + 1; j < len; j++) {
	//			if (arr[j] > arr[max]) {
	//				max = j;
	//			}
	//		}
	//		if (max != i) {
	//			//����max��i��Ԫ��
	//			mySwap(arr[max], arr[i]);
	//		}
	//	}
	//}

	//template<class T>
	//void printArray(T arr[],int len){
	//	for (int i = 0; i < len; i++) {
	//		cout << arr[i] << " ";
	//		if (i == len - 1) cout << endl;
	//	}
	//}

	//void test01() {
	//	//char����
	//	char charArr[] = "badcfe";
	//	int num = sizeof(charArr) / sizeof(char);
	//	mySort(charArr,num);
	//	printArray(charArr, num);
	//}
	//void test02() {
	//	//����Int����
	//	int arr[] = { 1,15,2,61,11,8 };
	//	int num = sizeof(arr) / sizeof(int);
	//	mySort(arr, num);
	//	printArray(arr, num);
	//}
	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion

#pragma region 1.3)��ͨ������ģ�������
//��ͨ���������Զ���������ת������ʽת������������ģ�壬�����Զ������Ƶ������ᷢ���Զ�����ת��,�����ʹ��ָ�����ͷ�ʽ�����Է���ת��
	//int myAdd01(int a, int b) {
	//	return a + b;
	//}
	////����ģ��
	//template<class T>
	//int myAdd02(T a, T b) {
	//	return a + b;
	//}
	//int main() {
	//	int a = 10;
	//	int b = 20;
	//	char c = 'c';
	//	cout << "a-c " << a << "-" << c << endl;
	//	cout<<myAdd01(a, c)<<endl;
	//	cout << (char)myAdd01(a, c) << endl;

	//	cout << myAdd02(a,b)<<endl;
	//	//cout << myAdd02(a, c);//�����޷�c��char��ת��Ϊint
	//	//��ʾָʾ����
	//	cout << myAdd02<int>( a, c)<<endl;

	//}
#pragma endregion

#pragma region 1.4)��ͨ�����ͺ���ģ��ĵ��ù���
//1�������ͨ������ģ�庯��������ʹ�ã�������ͨ����
//2������ʹ�ÿ�ģ������б�ǿ�Ƶ��ú���ģ��
//3������ģ��Ҳ��������
//4���������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
	//void myPrint(int a, int b) {
	//	cout << "��ͨ����" << endl;
	//}
	//template <class T>
	//void myPrint(T a, T b) {
	//	cout << "ģ�庯��" << endl;
	//}
	//template <class T>
	//	void myPrint(T a, T b, T c) {
	//		cout << "ģ�庯��++" << endl;
	//	}
	//	int main() {
	//		int a = 10;
	//		int b = 20;
	//		myPrint(a, b);
	//		myPrint<>(a, b);
	//		myPrint<>(a, b,100);
	//		myPrint(a, b,100); //�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
	//	}
#pragma endregion

#pragma region 1.5)ģ��ľ�����
//ģ��ľ�����
//ģ�岻�����ܵģ���Щ�ض����������ͣ���Ҫ�þ���ķ�ʽ����ʵ��
//�ԱȺ����Ƿ����
	//class Person {
	//public:
	//	string m_Name;
	//	int age;
	//	Person(string name, int age) {
	//		this->m_Name = name;
	//		this->age = age;
	//	}
	//};
	//template<class T>
	//bool myCompare(T& a, T& b) {
	//	if (a == b) {
	//		return true;
	//	}
	//	else { return false; }
	//}
	//void test01() {
	//	int a = 10;
	//	int b = 20;
	//	bool ret = myCompare(a, b);
	//	cout << ret<<endl;
	//}
	////2)���þ��廯Person�İ汾ʵ�ִ��룬�����Ż�����
	//template<> bool myCompare(Person& p1, Person& p2) {
	//	if (p1.m_Name == p2.m_Name && p1.age == p2.age) return 1;
	//	else return 0;
	//}
	//void test02() {
	//	Person p1("Tom", 10);
	//	Person p2("Tom", 10);
	//	bool ret = myCompare(p1, p2);
	//	cout << ret << endl;
	//}//����취1����������� 2)��

	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion

#pragma region 2.1)��ģ��ͺ���ģ�������
//1)��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//2)��ģ����ģ������б�����Ĭ�ϲ���
	//template<class NameType,class AgeType =int>//����=intΪĬ��Ϊint����==*ֻ����ģ��*==�������ں�����ʽ�����и��ģ�����������ΪĬ��ֵ
	//class Person { 
	//public:
	//	Person(NameType name,AgeType age) {
	//		this->m_Name = name;
	//		this->m_Age = age;
	//	}
	//	NameType m_Name;
	//	AgeType m_Age;
	//	void ShowPerson() {
	//		cout << "name " << m_Name << endl << "age" << m_Age << endl;
	//	}
	//};
	//int main() {
	//	//Person p1("sb", 24);//û�в����б���Ϊ��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
	//	Person<string,int> p1("sb",24);//ֻ��ʹ����ʾ������ʾָ������
	//	p1.ShowPerson();
	//	Person <string> p2("sb2", 33);
	//	p2.ShowPerson();
	//}
#pragma endregion

#pragma region 2.2)��ģ�崴��ʱ��
 //��ģ���ڳ�Ա������ʱ�Ŵ���
	//class Person1 {
	//public:
	//	void show1() {
	//		cout << "show2";
	//	}
	//};
	//class Person2 {
	//public:
	//	void show2() {
	//		cout << "show2";
	//	}
	//};
	//template<class T>
	//class MyClass {
	//public:
	//	T obj;
	//	//��ģ���еĳ�Ա����
	//	void func1() {
	//		obj.show1();
	//	}
	//	void func2() {
	//		obj.show2();
	//	}
	//};
	//int main() {
	//	MyClass<Person1> p1;
	//	p1.func1();
	//	//p1.func2();//func2����Person1�ĳ�Ա�����Ա���
	//}
#pragma endregion

#pragma region 2.3)��ģ���������������
//��ģ��ʵ�������������εķ�ʽ
//3�ִ��η�ʽ
// 1��ָ����������-ֱ����ʾ������������
// 2)����ģ�廯-�����������Ϊģ����д���
// 3)������ģ�廯 -�������������ģ�廯���д���
	//template <class T1, class T2>
	//class Person
	//{
	//public:
	//	Person(T1 name, T2 age) {
	//		this->m_Name = name;
	//		this->m_Age = age;
	//	}
	//	T1 m_Name;
	//	T2 m_Age;
	//	void show()
	//	{
	//		cout << "name " << m_Name << endl << "age " << m_Age << endl;
	//	}
	//};
	//// 1��ָ����������
	//void printPerson1(Person<string, int>&p) {
	//	p.show();
	//}
	//void test01(){
	//	Person<string, int>p("sb1", 24);
	//	printPerson1(p);
	//}

	//// 2)����ģ�廯
	//template<class T1, class T2>
	//void printPerson2(Person< T1, T2>& p) {
	//	p.show();
	//	cout << "T1����" << typeid(T1).name() << endl;
	//	cout << "T2����" << typeid(T2).name() << endl;
	//}
	//void test02() {
	//	Person<string, int>p("sb2", 24);
	//	printPerson2(p);
	//}
	//// 3)������ģ�廯
	//template<class T>
	//void printPerson3(T&p) {
	//	p.show();
	//	cout << "T����" << typeid(T).name() << endl;
	//}
	//void test03() {
	//	Person<string, int>p("sb3", 20);
	//	printPerson3(p);
	//}
	//int main() {
	//	test01();
	//	test02();
	//	test03();
	//}
#pragma endregion

#pragma region 2.4)��ģ����̳�
	//template<class T>
	//class Base {
	//public:
	//	T m;
	//};
	//class Son :public Base<int>  {//���ֱ��ʹ�ü̳б���ȱ�ٸ��ຯ��ģ������б�

	//};
	////��������ָ�������T���ͣ�����Ҳ��Ҫ����ģ��
	//template <class T1,class T2>
	//class Son2 :public Base <  T2 > {
	//public:
	//	Son2() {
	//		cout<<"T1����Ϊ"<< typeid(T1).name() << endl;
	//		cout << "T2����Ϊ" << typeid(T2).name() << endl;
	//	}
	//	T1 obj;
	//};
	//void test01() {
	//	Son s1;
	//	s1.m = 20;
	//	cout << s1.m << endl;
	//}
	//void test02() {
	//	Son2<int, char> s2;//int->obj���������ͣ�char->Base�м̳е�m����������
	//}

	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion

#pragma region 2.5)��ģ��ͳ�Ա����������ʵ��
	//template <class T1,class T2>
	//class Person {
	//public:
	//	Person(T1 name, T2 age);
	//	T1 m_Name;
	//	T2 m_Age;
	//	void showPerson();
	//};
	////���캯��������ʵ��
	//
	//template <class T1,class T2>
	//Person<T1,T2>::Person(T1 name, T2 age) {
	//	this->m_Name = name;
	//	this->m_Age = age;
	//}
	//template<class T1,class T2>
	//void Person<T1, T2>::showPerson() {
	//	cout << "name:" << this->m_Name << "\t age:" << this->m_Age << endl;
	//}
	//void test01() {
	//	Person<string, int> p("sb", 18);
	//	p.showPerson();
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 2.6)��ģ����ļ���д
//��ģ�����⣺��ģ���Ա��������ʱ�����ڵ��ý׶Σ����·��ļ����Ӳ���
//����취��1��ֱ�Ӱ���cppԴ�ļ���2��������ʵ��д��ͬһ���ļ��£����ĺ�׺��Ϊ.h

	////1)
	//#include "2.6Person.cpp"//cpp�а�����h�ļ�������ȫ������
	//
	////2)����cpp��h�ļ�д��һ�𣬺�׺����Ϊhpp,����׸��#include "2.6Person.hpp"
	//
	//
	//void test01() {
	//	Person<string, int> p("sb", 18);
	//	p.showPerson();
	//}
	//int main() {
	//	test01();
	//}

#pragma endregion

#pragma region 2.7)��ģ������Ԫ
//1��ȫ�ֺ�������ʵ�� 2������ʵ��
//ȫ�ֺ�������ʵ��

	////ͬ����ǰ�ñ�����֪������ִ����һ��
	//template<class T1,class T2>
	//class Person;
	////->��ǰ�ñ�����֪��
	//template<class T1, class T2>
	//void printPerson2(Person<T1, T2> p) {
	//	cout << "name:" << p.m_Name << "\t age:" << p.m_Age << endl;
	//}



	//template <class T1,class T2>
	//class Person {
	//	//ȫ�ֺ�������ʵ��
	//	friend void printPerson(Person<T1,T2> p) {
	//		cout << "name:" << p.m_Name << "\t age:" << p.m_Age << endl;
	//	}
	//	//��һ����ģ��Ĳ����б��
	//	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	//	friend void printPerson2<>(Person<T1, T2> p);//����ʵ��
	//public:
	//	Person(T1 name, T2 age) {
	//		this->m_Name=name;
	//		this->m_Age = age;
	//	}
	//private:
	//	T1 m_Name;
	//	T2 m_Age;
	//};

	//void test01() {
	//	Person<string, int>p("sb", 18);
	//	printPerson(p);
	//}
	//void test02() {
	//	Person<string, int>p("sb", 18);
	//	printPerson(p);
	//}
	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion

#pragma region 2.8)�������������װ
//#include "myArray.hpp"
//void printIntArray(MyArray<int>& arr) {
//	for (int i = 0; i < arr.getSize(); i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	MyArray<int> array1(10);
//	for (int i = 0; i < 10; i++)
//	{
//		array1.Push_Back(i);
//	}
//	cout << "array1��ӡ�����" << endl;
//	printIntArray(array1);
//}
//int main() {
//	void test01();
//	//�������⣬��ʱֹͣ����������ۿ�bվ����P184
//}
#pragma endregion
