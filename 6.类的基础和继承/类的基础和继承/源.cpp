#include <iostream>
using namespace std;
//1》基础类函数
class Book {
public:
	int classType,bookNumber;
	int Get(void);
	void Set(int bookNumber);
	Book(int bN);//1)构造函数声明

	~Book();//2)析构函数声明(不能返回任何值也不能带有参数，目的是为了跳出程序时输出提示和释放资源)

	Book(const Book& obj); //3)拷贝构造函数  TIP:类带有指针变量，并有动态内存分配，则它必须有一个拷贝构造函数
private:
	int* ptr;
};
int Book::Get(void) {//获取参数，返回值为int
	return bookNumber;
}
void Book::Set(int bN) {//设置参数，无需返回需要进行赋值
	bookNumber = bN;
}
Book::Book(const Book& obj)
{
	cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
	ptr = new int;
	*ptr = *obj.ptr; // 拷贝值
}
Book::~Book() {
	cout << endl<<"Object is being deleted";
}
Book::Book(int bN) {//构造函数
	cout << "output";
	bookNumber = bN;
}


//2》友元函数：因为友元函数没有this指针，则参数要有三种情况： 
			//要访问非static成员时，需要对象做参数；
			//要访问static成员或全局变量时，则不需要对象做参数；
			//如果做参数的对象是全局对象，则不需要对象做参数.
			//可以直接调用友元函数，不需要通过对象或指针
class Box
{
	double width;
public:
	friend void printWidth(Box box);
	void setWidth(double wid);
};
// 成员函数定义
void Box::setWidth(double wid)
{
	width = wid;
}
// 请注意：printWidth() 不是任何类的成员函数
void printWidth(Box box)
{
	/* 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员 */
	cout << "Width of box : " << box.width << endl;
}


//3》内联函数:1.在内联函数内不允许使用循环语句和开关语句；
			//2.内联函数的定义必须出现在内联函数第一次调用之前；
			//3.类结构中所在的类说明内部定义的函数是内联函数。
inline int Max(int x, int y)//返回最大值
{
	return (x > y) ? x : y;
}

//4》类的继承:
	//公有继承（public）：当一个类派生自公有基类时，基类的公有成员也是派生类的公有成员，基类的保护成员也是派生类的保护成员，
	// 基类的私有成员不能直接被派生类访问，但是可以通过调用基类的公有和保护成员来访问。
	//保护继承（protected）： 当一个类派生自保护基类时，基类的公有和保护成员将成为派生类的保护成员。
	//私有继承（private）：当一个类派生自私有基类时，基类的公有和保护成员将成为派生类的私有成员。\
	//多继承即一个子类可以有多个父类，它继承了多个父类的特性。
class Shape {//基类
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};
// 基类2 PaintCost
class PaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}
};
class Rectangle :public Shape ,public PaintCost{
public:
	int getArea()
	{
		return (width * height);
	}
};
//主函数
int main() {
	Book b1(100);
	cout << b1.Get();
	/*分隔符*/cout << endl << "=================" << endl;//分隔符

	Box box;
	// 使用成员函数设置宽度
	box.setWidth(10.0);
	// 使用友元函数输出宽度
	printWidth(box);
	/*分隔符*/cout << endl << "=================" << endl;//分隔符

	cout << "Max (20,10): " << Max(20, 10) << endl;
	/*分隔符*/cout << endl << "=================" << endl;//分隔符
	Rectangle Rect;
	int area;
	Rect.setWidth(5);
	Rect.setHeight(7);
	area = Rect.getArea();
	// 输出对象的面积
	cout << "Total area: " << Rect.getArea() << endl;

	// 输出总花费
	cout << "Total paint cost: $" << Rect.getCost(area) << endl;
	return 0;
}