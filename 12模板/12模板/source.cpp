#include <iostream>
using namespace std;
#include <string>
//函数模板：泛型编程的主要方式，有两种模板机制：1）函数模板 2）类模板
//标准语法 template <				typename                                                   T>
//          模板      表面其后面符号的数据类型，可以用class代替           通用数据类型，通常为大写字母

#pragma region 1.1)函数模板-交换函数
////两个整型交换的函数
//void swapInt(int &a, int &b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
////交换两个浮点型函数
//void swapDouble(double &a,double &b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}
////函数模板
//template <typename T>//声明一个模板，告诉编译器后面代码紧跟T不要报错,T是通用数据类型
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//两种方式使用模板
//	//1）自动类型推到
//	mySwap(a, b);
//	cout << "a-b  " << a << "-" << b << endl;
//	//2)显示指定类型
//	mySwap<int>(a, b);
//	cout << "a-b  " << a << "-" << b << endl;		
//}	
#pragma endregion

#pragma region 1.2)函数模板-数组排序
	////从大到小排序 char int
	////排序算法：
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
	//		int max =i;//认定最大值为i
	//		for (int j = i + 1; j < len; j++) {
	//			if (arr[j] > arr[max]) {
	//				max = j;
	//			}
	//		}
	//		if (max != i) {
	//			//交换max和i的元素
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
	//	//char数组
	//	char charArr[] = "badcfe";
	//	int num = sizeof(charArr) / sizeof(char);
	//	mySort(charArr,num);
	//	printArray(charArr, num);
	//}
	//void test02() {
	//	//测试Int数组
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

#pragma region 1.3)普通函数和模板的区别
//普通函数可以自动进行类型转换（隐式转换），而函数模板，利用自动类型推导，不会发生自动类型转换,但如果使用指定类型方式，可以发生转换
	//int myAdd01(int a, int b) {
	//	return a + b;
	//}
	////函数模板
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
	//	//cout << myAdd02(a, c);//报错，无法c（char）转化为int
	//	//显示指示类型
	//	cout << myAdd02<int>( a, c)<<endl;

	//}
#pragma endregion

#pragma region 1.4)普通函数和函数模板的调用规则
//1）如果普通函数和模板函数都可以使用，优先普通函数
//2）可以使用空模板参数列表强制调用函数模板
//3）函数模板也可以重载
//4）如果函数模板可以产生更好的匹配，优先调用函数模板
	//void myPrint(int a, int b) {
	//	cout << "普通函数" << endl;
	//}
	//template <class T>
	//void myPrint(T a, T b) {
	//	cout << "模板函数" << endl;
	//}
	//template <class T>
	//	void myPrint(T a, T b, T c) {
	//		cout << "模板函数++" << endl;
	//	}
	//	int main() {
	//		int a = 10;
	//		int b = 20;
	//		myPrint(a, b);
	//		myPrint<>(a, b);
	//		myPrint<>(a, b,100);
	//		myPrint(a, b,100); //如果函数模板可以产生更好的匹配，优先调用函数模板
	//	}
#pragma endregion

#pragma region 1.5)模板的局限性
//模板的局限性
//模板不是万能的，有些特定的数据类型，需要用具体的方式特殊实现
//对比函数是否相等
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
	////2)利用具体化Person的版本实现代码，具体优化调用
	//template<> bool myCompare(Person& p1, Person& p2) {
	//	if (p1.m_Name == p2.m_Name && p1.age == p2.age) return 1;
	//	else return 0;
	//}
	//void test02() {
	//	Person p1("Tom", 10);
	//	Person p2("Tom", 10);
	//	bool ret = myCompare(p1, p2);
	//	cout << ret << endl;
	//}//解决办法1）运算符重载 2)↑

	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion

#pragma region 2.1)类模板和函数模板的区别
//1)类模板没有自动类型推导使用方式
//2)类模板在模板参数列表中有默认参数
	//template<class NameType,class AgeType =int>//其中=int为默认为int类型==*只限类模板*==，可以在后续显式类型中更改，若不更改则为默认值
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
	//	//Person p1("sb", 24);//没有参数列表，因为类模板没有自动类型推导使用方式
	//	Person<string,int> p1("sb",24);//只能使用显示类型显示指定类型
	//	p1.ShowPerson();
	//	Person <string> p2("sb2", 33);
	//	p2.ShowPerson();
	//}
#pragma endregion

#pragma region 2.2)类模板创建时机
 //类模板在成员被调用时才创建
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
	//	//类模板中的成员函数
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
	//	//p1.func2();//func2不是Person1的成员，所以报错
	//}
#pragma endregion

#pragma region 2.3)类模板对象做函数参数
//类模板实例化，向函数传参的方式
//3种传参方式
// 1）指定传入类型-直接显示对象数据类型
// 2)参数模板化-将对象参数变为模板进行传递
// 3)整个类模板化 -将这个对象类型模板化进行传递
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
	//// 1）指定传入类型
	//void printPerson1(Person<string, int>&p) {
	//	p.show();
	//}
	//void test01(){
	//	Person<string, int>p("sb1", 24);
	//	printPerson1(p);
	//}

	//// 2)参数模板化
	//template<class T1, class T2>
	//void printPerson2(Person< T1, T2>& p) {
	//	p.show();
	//	cout << "T1类型" << typeid(T1).name() << endl;
	//	cout << "T2类型" << typeid(T2).name() << endl;
	//}
	//void test02() {
	//	Person<string, int>p("sb2", 24);
	//	printPerson2(p);
	//}
	//// 3)整个类模板化
	//template<class T>
	//void printPerson3(T&p) {
	//	p.show();
	//	cout << "T类型" << typeid(T).name() << endl;
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

#pragma region 2.4)类模板与继承
	//template<class T>
	//class Base {
	//public:
	//	T m;
	//};
	//class Son :public Base<int>  {//如果直接使用继承报错缺少父类函数模板参数列表

	//};
	////如果想灵活指定父类的T类型，子类也需要变类模板
	//template <class T1,class T2>
	//class Son2 :public Base <  T2 > {
	//public:
	//	Son2() {
	//		cout<<"T1类型为"<< typeid(T1).name() << endl;
	//		cout << "T2类型为" << typeid(T2).name() << endl;
	//	}
	//	T1 obj;
	//};
	//void test01() {
	//	Son s1;
	//	s1.m = 20;
	//	cout << s1.m << endl;
	//}
	//void test02() {
	//	Son2<int, char> s2;//int->obj的数据类型，char->Base中继承的m的数据类型
	//}

	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion

#pragma region 2.5)类模板和成员函数的类外实现
	//template <class T1,class T2>
	//class Person {
	//public:
	//	Person(T1 name, T2 age);
	//	T1 m_Name;
	//	T2 m_Age;
	//	void showPerson();
	//};
	////构造函数的类外实现
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

#pragma region 2.6)类模板分文件编写
//类模板问题：类模板成员函数创建时机是在调用阶段，导致分文件链接不到
//解决办法：1）直接包含cpp源文件，2）声明和实现写在同一个文件下，更改后缀名为.h

	////1)
	//#include "2.6Person.cpp"//cpp中包含了h文件，所以全包含了
	//
	////2)将上cpp和h文件写在一起，后缀名改为hpp,不再赘述#include "2.6Person.hpp"
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

#pragma region 2.7)类模板与友元
//1）全局函数类内实现 2）类外实现
//全局函数类外实现

	////同样提前让编译器知道才能执行下一行
	//template<class T1,class T2>
	//class Person;
	////->提前让编译器知道
	//template<class T1, class T2>
	//void printPerson2(Person<T1, T2> p) {
	//	cout << "name:" << p.m_Name << "\t age:" << p.m_Age << endl;
	//}



	//template <class T1,class T2>
	//class Person {
	//	//全局函数类内实现
	//	friend void printPerson(Person<T1,T2> p) {
	//		cout << "name:" << p.m_Name << "\t age:" << p.m_Age << endl;
	//	}
	//	//加一个空模板的参数列表↓
	//	//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
	//	friend void printPerson2<>(Person<T1, T2> p);//类外实现
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

#pragma region 2.8)案例：数组类封装
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
//	cout << "array1打印输出：" << endl;
//	printIntArray(array1);
//}
//int main() {
//	void test01();
//	//存在问题，暂时停止，若复视请观看b站黑马P184
//}
#pragma endregion
