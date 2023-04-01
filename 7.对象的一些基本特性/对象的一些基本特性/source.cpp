#include <iostream>
using namespace std;
#include <string>
#pragma region 1）类对象作为类成员
////1）类对象作为类成员一些注意点
//class Phone {
//public:
//	string P_Brand;
//	Phone(string Pname) {
//		P_Brand = Pname;
//		cout << "Phone构造函数"<<endl;
//	}
//	~Phone() {
//		cout << "Phone析构函数" << endl;
//	}
//};
//class Person {
//public:
//	Person(string name, string Pname) :m_Name(name), m_Phone(Pname)//通过：来赋初值 其中m_Phone(Pname)可等价于
//																	//Phone  m_Phone = Pname;
//	{
//		cout << "Person构造函数" << endl;
//	} 
//	~Person() {
//		cout << "Person析构函数" << endl;
//	}
//	//name
//	string m_Name;
//	//phoneNumber
//	Phone  m_Phone;
//};
////当其他类对象作为本类成员，构造的时候先构造其他对象，在构造自身（ep：先从最基本的类开始构造然后组成更大的类---多小类集一大类）
////析构函数清除内存先从大类拆分然后再拆分小类---------与栈类似，先进后出
//void test01() {
//	Person p("张三", "Apple");
//	cout << p.m_Name << "拿着" << p.m_Phone.P_Brand << endl;
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 2)静态成员-1.变量
	////定义：在成员变量和成员函数前加入关键字static称为静态成员
	////静态成员变量特点：1）所有对象都共享同一个数据 2）编译阶段分配内存 3）类内声明，类外初始化
	//class Person {
	//public:
	//	static int m_A;
	//	int showB() {//需要用函数来让m_B访问得到
	//		return m_B;
	//	}
	////静态成员变量也有访问权限
	//private:
	//	static int m_B;//类外访问不到
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
	////静态成员变量不属于某个对象上，所有对象都共享同一份数据
	////因此静态成员变量有两种访问方式

	//void test2() {
	//	//1）通过对象访问 
	//	Person p;
	//	cout << p.m_A << endl;
	//	cout << p.showB() << endl;
	//	//2）通过类名进行访问
	//	cout << Person::m_A << endl;
	//}
	//int main() {
	//	//test1();
	//	test2();
	//}
#pragma endregion

#pragma region 2)静态成员-1.函数
//所有对象都共享同一个函数
//静态成员函数只能访问静态成员变量
	//class Person {
	//public:
	//	static void func() {
	//		m_A = 100;
	//		cout << "静态函数调用了"<<m_A << endl;
	//	}
	//	static int m_A;
	//private:
	//	static void func() {

	//	}//类外无法访问私有的
	//};
	//int Person::m_A = 0;
	//void test01() {
	//	//1）通过对象进行访问
	//	Person p;
	//	p.func();
	//	//2)通过类名进行访问
	//	Person::func();
	//}
	//int main() {
	//	test01();
	//	}
#pragma endregion

#pragma region 3)成员变量和成员函数分开存储
	////在C++中,1)类的成员变量和成员函数分开存储2)只有非静态成员变量才属于类的对象上
	//class Person{
	//	int m_A;//非静态成员变量-属于类的对象上的数据
	//	static int m_B;//静态成员变量-不属于类的对象上的数据
	//	void func() {};//非静态成员函数-不属于类的对象上的数据
	//	static void func2() {}//静态成员函数-不属于类的对象上的数据
	//};
	//int Person::m_B=100;
	//void test01() {//当Person对象内容为空时实现
	//	Person p;
	//	cout << "empty object sizeof:" << sizeof(p) << endl;//空对象内存为1byte；为了区分空对象占用内存的位置，所以会存储一字节地址信息
	//}
	//void test02() {//非空对象
	//	Person p;
	//	cout << "sizeof p:" << sizeof(p);
	//}
	//int main() {
	//	//test01();
	//	test02();
	//}

#pragma endregion

#pragma region 4)this指针
	////this指针指向被调用成员函数所属的对象
	////用途：1)形态和成员变量同名 a=this.a
	////2)类的非静态成员函数返回对象本身，用return *this(其中this返回为地址，用*解引用)
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
	//	p2.ageAdd(p1).ageAdd(p1);//链式编程思想
	//	cout << p2.age;
	//}
	//int main() {
	//	test();
	//}
#pragma endregion

#pragma region 5)空指针访问成员函数
	//class Person {
	//public:
	//	void showClassName() {
	//		cout << "perSon class" << endl;
	//	}
	//	void showPersonAge() {
	//		if (this == NULL) {
	//			return;//预防出错
	//		}
	//		//报错原因是传入指针为空
	//		cout << "age=" <<this->m_Age<< endl;
	//	}
	//	int m_Age;
	//};
	//void test01() {
	//	Person* p=NULL;
	//	p->showClassName();//可以访问输出
	//	p->showPersonAge();//无法访问
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 6)const修饰成员函数
	////常函数：1）常函数内不可修改成员属性；2）成员属性声明加关键字mutable后常函数中依然可以修改成员属性
	////常对象:1)常对象前加const 2）常对象只能调用常函数
	////常函数
	//class Person {
	//public:
	//	void ShowPerson() const //在表达式后加const表示该函数不可修改成员属性，修饰的是函数自带的this指针（指针常量-指向不可更改），加入const使其指向的值也不可更改、
	//	{
	//		//m_A = 100;  //这句将会出错
	//		m_B = 100;//这句将不会出错
	//		cout << "A:" << m_A << "|B:" << m_B<<endl;
	//	}
	//	void func() {//同样的，函数不可以可变（mutable）

	//	}
	//	int m_A;
	//	mutable int m_B;//加关键字mutable后常函数中依然可以修改成员属性
	//};
	//void test01() {
	//	Person p;
	//	p.ShowPerson();
	//}
	////常对象

	//void test02() {
	//	const Person p; //不允许修改指针指向的值
	//	//p.m_A = 100;//将报错
	//	p.m_B = 100;//不会报错
	//	p.ShowPerson();
	//	//常对象只能调用常函数
	//	//p.func(); //将报错，不能调用普通函数
	//}
	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion
