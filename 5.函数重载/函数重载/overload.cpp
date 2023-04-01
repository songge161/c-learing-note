#include <iostream>
using namespace std;
//Tip:ctrl+k (ctrl+c注释，ctrl+u解开)
#pragma region 前导
//class Box
	//{
	//public:
	//
	//    double getVolume(void)
	//    {
	//        return length * breadth * height;
	//    }
	//    void setLength(double len)
	//    {
	//        length = len;
	//    }
	//
	//    void setBreadth(double bre)
	//    {
	//        breadth = bre;
	//    }
	//
	//    void setHeight(double hei)
	//    {
	//        height = hei;
	//    }
	//    // 重载 + 运算符，用于把两个 Box 对象相加
	//    //下面是不可重载的运算符列表：
	//
	//        //. , 成员访问运算符
	//        //*, ->*成员指针访问运算符
	//        //:: 域运算符
	//        //sizeof：长度运算符
	//        //? : 条件运算符
	//        //#  预处理符号
	//    
	//    Box operator+(const Box& b)
	//    {
	//        Box box;
	//        box.length = this->length + b.length;
	//        box.breadth = this->breadth + b.breadth;
	//        box.height = this->height + b.height;
	//        return box;
	//    }
	//private:
	//    double length;      // 长度
	//    double breadth;     // 宽度
	//    double height;      // 高度
	//};
	//// 程序的主函数
	//int main()
	//{
	//    Box Box1;                // 声明 Box1，类型为 Box
	//    Box Box2;                // 声明 Box2，类型为 Box
	//    Box Box3;                // 声明 Box3，类型为 Box
	//    double volume = 0.0;     // 把体积存储在该变量中
	//
	//    // Box1 详述
	//    Box1.setLength(6.0);
	//    Box1.setBreadth(7.0);
	//    Box1.setHeight(5.0);
	//
	//    // Box2 详述
	//    Box2.setLength(12.0);
	//    Box2.setBreadth(13.0);
	//    Box2.setHeight(10.0);
	//
	//    // Box1 的体积
	//    volume = Box1.getVolume();
	//    cout << "Volume of Box1 : " << volume << endl;
	//
	//    // Box2 的体积
	//    volume = Box2.getVolume();
	//    cout << "Volume of Box2 : " << volume << endl;
	//
	//    // 把两个对象相加，得到 Box3
	//    Box3 = Box1 + Box2;
	//
	//    // Box3 的体积
	//    volume = Box3.getVolume();
	//    cout << "Volume of Box3 : " << volume << endl;
	//
	//    return 0;
	//}
#pragma endregion

//目录 1>一元运算符;2>二元运算符；3>输入/输出运算符重载; 4>赋值运算符重载;5>函数调用运算符()重载
//6>下标操作符 []  7>类成员访问运算符->重载(难) 8>补：关系运算符重载
#pragma region 1>一元运算符
	//1>一元运算符（只有一个对象）
	//class Time {
	//private :
	//	int	hour;//0-23
	//	int	minute;//0-60
	//public:
	//	int getHour() {
	//		return hour;
	//	}
	//	Time() {//重载1
	//		 hour = 0;
	//		 minute = 0;
	//	}
	//	Time(int h,int m) {//重载2
	//		hour = h;
	//		minute = m;
	//	}
	//	// 重载前缀递增运算符（ ++ ）
	//	Time operator++() {
	//		++minute;
	//		if (minute >= 60) {
	//			hour++;
	//			minute -=60;
	//		}
	//		return Time(hour, minute);
	//	}
	//	Time operator++(int) {//operator++(int) 中int 仅表示其为后缀，而不是int类型
	//		Time T( hour, minute);//备份旧的
	//		++minute;
	//		if (minute >= 60)
	//		{
	//			++hour;
	//			minute -= 60;
	//		}
	//		return T;//返回旧的
	//	}
	//	void showTime() {
	//		cout << hour <<":"<<minute<<endl;
	//	}
	//};
	//int main() {
	//	Time time(1, 59);
	//	++time;
	//	time.showTime();
	//	Time time2(1, 59);
	//	time2++;
	//	time2.showTime();
	//	cout << time2.getHour();
	//}//一元运算符
//
#pragma endregion

#pragma region 2>二元运算符
//2>二元运算符
	//#include<iostream>
	//using namespace std;
	//class A
	//{
	//private:
	//	int a;
	//public:
	//	A();
	//	A(int n);
	//	A operator+(const A& obj);
	//	A operator+(const int b);
	//	friend A operator+(const int b, A obj);
	//	void display();
	//};
	//A::A()
	//{
	//	a = 0;
	//}
	//A::A(int n)//构造函数 
	//{
	//	a = n;
	//}
	//A A::operator +(const A& obj)//重载+号用于 对象相加 <-1
	//{
	//	return this->a + obj.a;
	//}
	//A A::operator+(const int b)//重载+号用于  对象与数相加 <-2
	//{
	//	return A(a + b);
	//}
	//A operator+(const int b, A obj)
	//{
	//	return obj + b;//友元函数调用第二个重载+的成员函数  相当于 obj.operator+(b);<-3 
	//}
	//void A::display()
	//{
	//	cout << a << endl;
	//}
	//int main()
	//{
	//	A a1(1);
	//	A a2(2);
	//	A a3, a4, a5;
	//	a1.display();
	//	a2.display();
	//	int m = 1;
	//	a3 = a1 + a2;//可以交换顺序，相当月a3=a1.operator+(a2); 
	//	a3.display();
	//	a4 = a1 + m;//因为加了个友元函数所以也可以交换顺序了。
	//	a4.display();
	//	a5 = m + a1;
	//	a5.display();
	//}
#pragma endregion

#pragma region 3>IO运算符重载
//3>输入/输出运算符重载[	重载提取运算符 >> 和插入运算符 <<	]
//tip:我们需要把运算符重载函数声明为类的友元函数，这样我们就能不用创建对象而直接调用函数。
//#include <iostream>
//using namespace std;
//class Distance {
//private:
//	int feet;//0-00
//	int inches;//0-12
//public:
//	Distance() {
//		feet = 0;
//		inches = 0;
//	}
//	Distance(int f, int i) {
//		feet = f;
//		inches = i;
//	}
//	friend ostream &operator<<(ostream &output,const Distance &D) {
//		output << "F : " << D.feet << " I : " << D.inches;
//		return output;
//	}
//	friend istream& operator>>(istream &input, Distance& D) {
//		input >> D.feet >> D.inches;	
//		return input;
//	}
//};
//int main() {
//	Distance d1(10, 10), d2(5, 3), d3;
//	cout << "Enter the value of object : " << endl;
//	cin >> d3;
//	cout << d1 << endl;
//	cout << d2 << endl;
//	cout << d3 << endl;
//}
#pragma endregion

#pragma region 4>赋值运算符重载(=)
	//class Distance {
	//private:
	//	int feet;
	//	int inches;
	//public:
	//	// 所需的构造函数
	//	Distance() {
	//		feet = 0;
	//		inches = 0;
	//	}
	//	Distance(int f, int i) {
	//		feet = f;
	//		inches = i;
	//	}
	//	Distance operator=(const Distance& D) {
	//		feet = D.feet;
	//		inches = D.inches;
	//		return D;
	//	}
	//	// 显示距离的方法
	//	void displayDistance()
	//	{
	//		cout << "F: " << feet << " I:" << inches << endl;
	//	}
	//};
	//int main() {
	//	Distance D1(15, 2),D2(5,3);
	//	cout << "First Distance : ";
	//	D1.displayDistance();
	//	cout << "Second Distance :";
	//	D2.displayDistance();
	//	// 使用赋值运算符
	//	D1 = D2;
	//	cout << "D1=D2 ->D1:";
	//	D1.displayDistance();
	//}
#pragma endregion

#pragma region 5>函数调用运算符 () 重载
//Tip:函数调用运算符 () 可以被重载用于类的对象。当重载 () 时，您不是创造了一种新的调用函数的方式，
//相反地，这是创建一个可以传递任意数目参数的运算符函数。
	//class Distance
	//{
	//private:
	//	int feet;             // 0 到无穷
	//	int inches;           // 0 到 12
	//public:
	//	// 所需的构造函数
	//	Distance() {
	//		feet = 0;
	//		inches = 0;
	//	}
	//	Distance(int f, int i) {
	//		feet = f;
	//		inches = i;
	//	}
	//	// 重载函数调用运算符
	//	Distance operator()(int a, int b, int c) {
	//		Distance D;
	//		// 进行随机计算
	//		D.feet = a + c ;
	//		D.inches = b + c;
	//		return D;
	//	}
	//	// 显示距离的方法
	//	void displayDistance()
	//	{
	//		cout << "F: " << feet << " I:" << inches << endl;
	//	}
	//};
	//int main() {
	//	Distance D1(1, 2), D2,D3;
	//
	//	D1.displayDistance();
	//	D2 = D2(10, 15, 20);//需要一个容器来存取返回值
	//	D2.displayDistance();//↑
	//	D3(1,2,3).displayDistance();//直接打印
	//}
#pragma endregion

#pragma region 6>下标操作符 []
//通常用于访问数组元素。重载该运算符用于增强操作 C++ 数组的功能。
	//const int SIZE = 10;//宏定义SIZE
	//class safearay {
	//private:
	//	int arr[SIZE];
	//public:
	//	safearay() {
	//		register int i;//register int可以在循环中提高效率
	//		for (i = 0; i < SIZE; i++)
	//		{
	//			arr[i] = i;
	//		}
	//	}
	//	int& operator[](int i) {//避免访问越界
	//		if (i >= SIZE) {
	//			cout << "索引超过最大值↓" << endl;
	//			// 返回第一个元素
	//			return arr[0];
	//		}
	//		return arr[i];
	//	}
	//};
	//int main() {
	//	safearay A;
	//	cout << "A[2] 的值为 : " << A[2] << endl;
	//	cout << "A[5] 的值为 : " << A[5] << endl;
	//	cout << "A[12] 的值为 : " << A[12] << endl;

	//	return 0;
	//}
#pragma endregion

#pragma region 7>类成员访问运算符->重载(难)
//类成员访问运算符（ -> ）可以被重载，但它较为麻烦。它被定义用于为一个类赋予"指针"行为。运算符 -> 必须是一个成员函数。
//如果使用了 -> 运算符，返回类型必须是指针或者是类的对象。
//运算符->通常与指针引用运算符* 结合使用，用于实现"智能指针"的功能。
//这些指针是行为与正常指针相似的对象，唯一不同的是，当您通过指针访问对象时，它们会执行其他的任务。
	//比如，当指针销毁时，或者当指针指向另一个对象时，会自动删除对象。
	//也就是说，给出一个类：
	//class Ptr {
	//	//...
	//	X* operator->();
	//};
	// 类 Ptr 的对象可用于访问类 X 的成员，使用方式与指针的用法十分相似。例如：
	// void f(Ptr p )
	//{
	//p->m = 10; // (p.operator->())->m = 10
	//}
//间接引用运算符->可被定义为一个一元后缀运算符。
	//#include <iostream>
	//#include <vector>
	//using namespace std;
	//// 假设一个实际的类
	//class Obj {
	//   static int i, j;
	//public:
	//   void f() const { cout << i++ << endl; }
	//   void g() const { cout << j++ << endl; }
	//};
	//// 静态成员定义
	//int Obj::i = 10;
	//int Obj::j = 12;
	//// 为上面的类实现一个容器
	//class ObjContainer {
	//   vector<Obj*> a;
	//public:
	//   void add(Obj* obj)
	//   { 
	//	  a.push_back(obj);  // 调用向量的标准方法
	//   }
	//   friend class SmartPointer;
	//};
	//// 实现智能指针，用于访问类 Obj 的成员
	//class SmartPointer {
	//   ObjContainer oc;
	//   int index;
	//public:
	//   SmartPointer(ObjContainer& objc)
	//   { 
	//	   oc = objc;
	//	   index = 0;
	//   }
	//   // 返回值表示列表结束
	//   bool operator++() // 前缀版本
	//   { 
	//	 if(index >= oc.a.size() - 1) return false;
	//	 if(oc.a[++index] == 0) return false;
	//	 return true;
	//   }
	//   bool operator++(int) // 后缀版本
	//   { 
	//	  return operator++();
	//   }
	//   // 重载运算符 ->
	//   Obj* operator->() const 
	//   {
	//	 if(!oc.a[index])
	//	 {
	//		cout << "Zero value";
	//		return (Obj*)0;
	//	 }
	//	 return oc.a[index];
	//   }
	//};
	//int main() {
	//   const int sz = 10;
	//   Obj o[sz];
	//   ObjContainer oc;
	//   for(int i = 0; i < sz; i++)
	//   {
	//	   oc.add(&o[i]);
	//   }
	//   SmartPointer sp(oc); // 创建一个迭代器
	//   do {
	//	  sp->f(); // 智能指针调用
	//	  sp->g();
	//   } while(sp++);
	//   return 0;
	//}
#pragma endregion

#pragma region 8>补：关系运算符重载
//关系运算符（ < 、 > 、 <= 、 >= 、 == 等等）,
//您可以重载任何一个关系运算符，重载后的关系运算符可用于比较类的对象。
class Distance
{
private:
	int feet;             // 0 到无穷
	int inches;           // 0 到 12
public:
	// 所需的构造函数
	Distance() {
		feet = 0;
		inches = 0;
	}
	Distance(int f, int i) {
		feet = f;
		inches = i;
	}
	// 显示距离的方法
	void displayDistance()
	{
		cout << "F: " << feet << " I:" << inches << endl;
	}
	// 重载负运算符（ - ）
	Distance operator- ()
	{
		feet = -feet;
		inches = -inches;
		return Distance(feet, inches);
	}
	// 重载小于运算符（ < ）
	bool operator <(const Distance& d)
	{
		if (feet < d.feet)
		{
			return true;
		}
		if (feet == d.feet && inches < d.inches)
		{
			return true;
		}
		return false;
	}
};
int main()
{
	Distance D1(11, 10), D2(5, 11);

	if (D1 < D2)
	{
		cout << "D1 is less than D2 " << endl;
	}
	else
	{
		cout << "D2 is less than D1 " << endl;
	}
	return 0;
}
#pragma endregion
