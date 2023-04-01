#include<iostream>
using namespace std;
class Person {
public:
	int age;
	Person() {
		cout << "无参构造函数"<<endl;
	}
	Person(int a) {
		age = a;
		cout << "有参构造函数" << endl;
	}
	void setAge(int a) {
		age = a;
	}
	//拷贝构造函数
		//调用时机1）使用一个已经创建完毕的对象来初始化一个对象；2）以值传递方式给函数参数传值；3）以值方式返回局部对象
	Person(const Person &p) {
		//将传入人身上的所有属性拷贝到其上
		age = p.age;
		cout << "copy" << endl;
	}
	~Person() {//析构函数---对象调用完之后进行输出和清除内存
		cout << "析构函数" << endl;
	}
};
void time1() {//调用时机1）使用一个已经创建完毕的对象来初始化一个对象；
	Person p1(20);
	Person p2(p1);
	cout << "-----------------------------";
}
//2）以值传递方式给函数参数传值
void doWork(Person p) {

}
void time2() {
	Person p;
	doWork(p);
	cout << "-----------------------------";
}
Person doWork2() {//3）以值方式返回局部对象
	Person p1;
	return p1;
}
void time3() {
	Person p = doWork2();
}

int main() {
	//调用构造函数
		//1括号法
			//Person p1;//默认构造函数调用
			//Person p2(10);//有参调用
			//Person p3(p2);//拷贝构造函数调用
			//p2.setAge(20);//拷贝后的副本和原本互不干扰
			//cout << "p2的年龄:" <<p2.age<<endl;
			//cout << "p3的年龄:" << p3.age << endl;
	//注意事项1）调用默认构造函数时候不要加（）Person p1()    结果 ->没有创建对象；
		//2显示法
			//Person p1;
			//Person p2 = Person(10);//有参构造
			//tip Person(10)-》为匿名对象 特点：当前行执行结束后系统会立即回收掉匿名对象
			//Person p3 = Person(p2);
	//注意事项2）不要利用拷贝构造函数初始化一个匿名的对象 Person(p3)
		//3隐式转换法
			//Person p4 = 10;//相当于Person p4=Person(10)
			//Person p5 = p4;//拷贝构造
	//-------------------------------------------------
	time1();
	time2();
	time3();
//注意2：构造函数调用规则
	//如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造；
	//如果我们写了拷贝构造函数，编译器就不再提供默认构造函数和有参构造函数
}