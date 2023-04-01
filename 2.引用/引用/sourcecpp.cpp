#include <iostream>
using namespace std;
//引用交换
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
//引用做函数的返回值
	//注意1）不要返回局部变量的引用；2）函数的调用可以作为左值
int& test2() {
	static int a = 10;//静态变量
	return a;
	}
void show(const int &val) {
	cout << "val=" << val<<endl;
}
int main() {
//引用：给变量起别名
//语法 数据类型 &别名 = 原名
//注意事项1）引用必须初始化；2）初始化后不可改变
//ep:int &b = a
	int a = 10;
	int& b = a;
	cout << "a=" << a << endl << "b="<<b<<endl;
	a = 100;
	cout << "a=" << a << endl << "b=" << b<<endl;
	int c = 10, d = 20;
	swap(c, d);
	cout << "c=" << c << endl << "d=" <<d << endl;
	int& ref = test2();
	cout <<"ref:" << ref<<endl;
	test2() = 1000;//函数的调用可以作为左值
	cout << "ref:" << ref<<"test2："<<test2() << endl;//再次检验是否内存丢失，若非static则会出现乱码或者非法访问
	//常量引用
	//为了修饰形参，防止误操作
	//const int& ref2 = 10;//引用必须	引合法的内存空间
	//加入const后，编译器将代码修改等价于int temp=10;const int &ref=temp
	show(a);
}