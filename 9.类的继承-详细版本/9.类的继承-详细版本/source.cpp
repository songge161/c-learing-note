#include<iostream>
using namespace std;

#pragma region 1）三种继承方式
//继承方式1）public继承;2)protected继承 ；3）private继承
//不同继承会改变子类的优先级，ep：protected继承会让pulibc变为protected
	////公共继承
	//class Base1 {
	//public:
	//	int a;
	//protected:
	//	int b;
	//private:
	//	int c;
	//};
	//class Son1:public Base1{
	//public:
	//	void func() {
	//		cout << a << "--" << b<<endl;
	//		//但是c无法访问
	//	}
	//};
	//void test01() {
	//	Son1 s1;
	//	s1.a = 100;
	//	//s1.b 不可访问，父类是保护权限
	//}
	////保护继承
	//class Base2{
	//public:
	//	int a;
	//protected:
	//	int b;
	//private:
	//	int c;
	//};
	//class Son2:protected Base2 {
	//public:
	//	void func() {
	//		a = 100;//父类public到子类为protected
	//		b = 100;
	//		//c=100 //不可访问
	//	}
	//};
	//void test02() {
	//	Son2 s1;
	//	//s1.a = 100;不可访问，受到保护，类外访问不到
	//}
	////私有继承
	//class Base3 {
	//public:
	//	int a;
	//protected:
	//	int b;
	//private:
	//	int c;
	//};
	//class Son3:private Base3 {
	//public:
	//	void func() {
	//		a = 100;
	//		b = 100;//a,b到子类都变为私有成员
	//		//c=100 父类的私有子类不可访问
	//	}
	//};
	//class GrandSon:public Son3 {
	//	void func() {
	//		//a=100//a,b,c均无法访问
	//	}
	//};
	//void test03() {
	//	Son3 s1;
	//	//s1.a = 100; a,b,c均为私有成员，类外无法访问
	//}
	//int main() {
	//
	//}
#pragma endregion

#pragma region 2）继承中的对象模型
	////拓展：查看类的对象的分布模型
	////1）再开始菜单中找到VS2019文件夹，找到 developer command prompt；
	////2)确认项目文件地点，如果不同盘先切换盘符 X: 其中X为盘名,然后cd进入项目根目录
	////3)查看命令 cl /d1 reportSingleClassLayout[ClassName] [FileName->以cpp结尾]
	//class Base {
	//public:
	//	int a;
	//protected:
	//	int b;
	//private:
	//	int c;
	//};
	//class Son :public Base {
	//	//父类的所有非静态成员属性都会被子类继承下去
	//	//父类的私有成员属性是被编译器隐藏了，无法访问，但是被继承了
	//public:
	//	int d;
	//};
	//void test01() {
	//	cout << sizeof(Son);//16
	//}
	//int main() {
	//	test01();
	//
	//}
#pragma endregion

#pragma region 3)构造和析构的在继承中的顺序
	//class Base {
	//public:
	//	Base() {
	//		cout << "base构造"<<endl;
	//	}
	//	~Base() {
	//		cout << "base析构" << endl;
	//	}
	//};
	//class Son :public Base {
	//public:
	//	Son(){
	//		cout << "son构造" << endl;
	//	}
	//	~Son() {
	//		cout << "son析构"<<endl;
	//	}
	//};
	//void test01() {
	//	//Base b;//base构造 base析构
	//	Son s;
	//	//先构造父类再构造子类，先析构子类再析构父类【先进后出】
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 4）同名成员的处理方式
//访问子类同名成员-直接访问
//访问父类同名成员-需要加作用域

//继承同名成员/函数处理
	//class Base {
	//public:
	//	Base() {
	//		a = 100;
	//	}
	//	int a;
	//	void func() {
	//		cout << "b.func"<<endl;
	//	}
	//	void func(int a) {
	//		cout << "b.func--重载的" << endl;
	//	}
	//};
	//class Son :public Base {
	//public:
	//	Son() {
	//		a = 200;
	//	}
	//	int a;
	//	void func() {
	//		cout << "s.func" << endl;
	//	}
	//};

	//void test01() {
	//	Son s;
	//	cout<<"Son.a:"<<s.a<<endl;//子类的a
	//	cout << "Son[Base.a]:" << s.Base::a<<endl;//子类中父类继承的a，需要加作用域
	//}
	//void test02() {
	//	Son s;
	//	s.func();//子类函数
	//	s.Base::func();//子类中的父类函数
	//	//s.func(1);不能调用
	//	//如果子类中出现和父类同名的成员函数，子类的同名成员函数会隐藏掉父类中所有的同名成员函数
	//	//如果想访问需要加作用域
	//	s.Base::func(1);
	//}
	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion

#pragma region 5）继承同名静态成员的处理方式
	////处理方式一致
	////访问子类同名成员-直接访问
	////访问父类同名成员-需要加作用域
	////继承中的同名静态成员处理方式
	//class Base {
	//public:
	//	static int a;
	//	static void func() {
	//		cout << "B"<<endl;
	//	}
	//	static void func(int a) {
	//		cout << "B-c" << endl;
	//	}
	//};
	//int Base::a = 100;
	//class Son :public Base {
	//public:
	//	static int a;
	//	static void func() {
	//		cout << "S"<<endl;
	//	}
	//
	//};
	//int Son::a = 200;
	////同名静态成员属性
	//void test01() {
	//	Son s;
	//	//1通过对象访问
	//	cout << "a:"<<s.a<<endl;
	//	cout << "a-Base:" << s.Base::a<< endl;
	//	//2通过类名访问
	//	cout << "className Son:" << Son::a<<endl;
	//	cout << "className Base:" << Son::Base::a << endl;
	//}
	////同名静态成员函数
	//void test02() {
	//	Son s;
	//	//1通过对象访问
	//	s.func();
	//	s.Base::func();
	//	//2通过类名访问
	//	Son::func();
	//	Son::Base::func();
	//	//如果想访问父类被隐藏的同名成员需要加作用域
	//	Son::Base::func(100);
	//}
	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion

#pragma region 6）多继承语法
	////一个类允许继承多个类 
	//class Base1 {
	//public:
	//	int a;
	//	Base1() {
	//		a = 100;
	//	}
	//};
	//class Base2 {
	//public:
	//	int a;
	//	int b;
	//	Base2() {
	//		a = 150;
	//		b = 100;
	//	}
	//};
	////子类继承B1和B2
	//class Son :public Base1, public Base2 {
	//public:
	//	int c;
	//	int d;
	//	Son() {
	//		int c=300;
	//		int d = 400;
	//	}
	//};
	//void test01() {
	//	Son s;
	//	cout << "sizeof Son=" << sizeof(s)<<endl;
	//	cout << "a-b1:" << s.Base1::a << endl;//如果出现同名成员需要加作用域区分
	//	cout << "a-b2:" << s.Base2::a << endl;
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 7）菱形继承
//特点：两个派生类继承一个基类，某个类继承这两个派生类 A-[(B-D)&(C-D)],需要解决二义性
class Animal {
public:
	int age;
};
//利用虚继承可以解决菱形继承的问题
class Sheep:virtual public Animal {//虚继承virtual，此时Animal类为虚基类

};
class Camel :virtual public Animal {

};
class Cnm :public Sheep, public Camel {

};
void test01() {
	Cnm cnm;
	cnm.Camel::age = 28;
	cnm.Sheep::age = 18;

	//当出现菱形继承的时候，两个父类拥有相同作用域，需要加以作用域区分
	cout << "cnm.Sheep::age=" << cnm.Sheep::age << endl;
	cout << "cnm.Camel::age=" << cnm.Camel::age << endl;
	//这份数据我们知道只有一份就可以，菱形导致数据有两份，资源浪费
	cout << "cnm.age:" << cnm.age << endl;
}
int main() {
	test01();
}
#pragma endregion
