//多态
#include <iostream>
using namespace std;
#include <string>
//多态分为两类
//静态多态：函数重载，运算符重载，复用函数名
//动态多态：派生类和虚函数实现运行时多态 
//区别：静态多态的函数地址早绑定-编译阶段确定函数地址
//		动态动态的函数地址晚绑定-运行阶段确定函数地址
//优点：1）代码组织结构清晰；2）可读性强；3）利于前期和后期的扩展以及维护
#pragma region 1）多态的基本语法
	//class Animal {
	//public:
	//	/*void speak() {//正常函数
	//		cout << "Aminal is talking";
	//	}*/
	//	virtual void speak() {//虚函数
	//		cout << "Aminal is talking";
	//	}
	//};
	//class Cat:public Animal {
	//public:
	//	void speak() {
	//		cout << "Cat talk" <<endl;
	//	}
	//};
	//class Dog:public Animal {
	//	void speak() {
	//		cout << "dog speak"<<endl;
	//	}
	//
	//};
	////执行说话函数
	////因为地址早绑定，在编译阶段能确定函数地址
	////如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
	////动态多态的满足条件：1）有继承关系 2）子类重写父类的虚函数
	////Tip：重写-函数返回类型，函数名，参数列表都得完全相同

	////动态多态使用：父类指针或引用执行子类对象
	//void doSpeak(Animal &a) {
	//	a.speak();
	//}
	//void test01() {
	//	Cat cat;
	//	Dog dog;
	//	doSpeak(cat);//Animal &animal =cat;
	//	doSpeak(dog);
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 2）多态的原理剖析
	//class Animal {
	//	public:
	//		//void speak() {//函数
	//		virtual void speak() {//虚函数
	//			cout << "Aminal is talking"<<endl;
	//		}
	//	};
	//	class Cat:public Animal {
	//	public:
	//		void speak() {
	//			cout << "Cat talk" <<endl;
	//		}
	//	};
	//	class Dog:public Animal {
	//		void speak() {
	//			cout << "dog speak"<<endl;
	//		}
	//
	//	};
	//	void doSpeak(Animal &a) {
	//		a.speak();
	//	}
	//	void test01() {
	//		Cat cat;
	//		Dog dog;
	//		doSpeak(cat);//Animal &animal =cat;
	//		doSpeak(dog);
	//	}
	//	void test02() {
	//		cout << "sizeof Animal" << sizeof(Animal) << endl;//函数 1；虚函数 4
	//	}
	//	int main() {
	//		test01(); test02();
	//	}
#pragma endregion

#pragma region 3)多态案例一：计算器类
	////1）普通写法
	//class Caculator {
	//public:
	//	int getResult(string oper) {
	//		if (oper == "+") return m_Num1 + m_Num2;
	//		else if (oper == "-") return m_Num1 - m_Num2;
	//		else if (oper == "*")return m_Num1 * m_Num2;
	//		else if (oper == "/")return m_Num1 / m_Num2;
	//		//如果想扩展新的功能，需求修改源码
	//		//在真实开发中提倡开闭原则：对扩展进行开放，对修改进行关闭
	//		else {
	//			cout << "Please wirte right operator!" << endl;
	//			cout << "num1-num2:" << m_Num1 << "-" << m_Num2 << endl;
	//			return NULL;
	//		}
	//	}
	//	int m_Num1;
	//	int m_Num2;
	//};

	////2)利于多态实现计算器
	////实现计算器抽象类
	//class AbstractCalculator {
	//public:
	//	virtual int getResult() {
	//		return 0;
	//	}
	//	int m_Num1;
	//	int m_Num2;
	//};
	//	//a)加法计算器
	//class AddCaculator :public AbstractCalculator {
	//	int getResult() {
	//		return m_Num1 + m_Num2;
	//	}
	//	};
	//	//b)加法计算器
	//	class SubCaculator :public AbstractCalculator {
	//		int getResult() {
	//			return m_Num1 - m_Num2;
	//		}
	//	};
	//	//c)乘法计算器
	//	class MulCaculator :public AbstractCalculator {
	//		int getResult() {
	//			return m_Num1* m_Num2;
	//		}
	//	};
	//	//此后可以根据需求增加功能
	//void test01() {
	//	Caculator	c1;
	//	c1.m_Num1 = 15;
	//	c1.m_Num2 = 20;
	//	cout<<c1.getResult("=")<<endl;
	//}
	//void test02() {
	//	//多态的使用条件：父类指针或者引用指向子类对象
	//	AbstractCalculator* abc = new AddCaculator;
	//	abc->m_Num1 = 15;
	//	abc->m_Num2 = 10;
	//	cout<<abc->getResult()<<endl;
	//	//用完后记得销毁
	//	delete abc;
	//	//减法
	//	abc = new SubCaculator;
	//	abc->m_Num1 = 15;
	//	abc->m_Num2 = 10;
	//	cout<< abc->getResult() << endl;
	//	delete abc;
	//	//乘法
	//	abc = new MulCaculator;
	//	abc->m_Num1 = 15;
	//	abc->m_Num2 = 10;
	//	cout << abc->getResult() << endl;
	//	delete abc;
	//}
	//
	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion

#pragma region 4)纯虚函数和抽象类
//1)纯虚函数：通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容，因此可以将虚函数改写为纯虚函数
//当类中有了纯虚函数，则该类为抽象类
//2）抽象类：特点a)无法实例化对象，2）子类必须重写抽象类中的纯虚函数，否则也属于抽象类
 
	//class Base {
	//public:
	//	virtual void func() = 0;//纯虚函数

	//};
	//class Son :public Base {
	//public:
	//	virtual void func() {
	//		cout << "haha";
	//	}
	//};
	//void test01() {
	//	//Base b;//报错，抽象类无法实例化对象
	//	//new Base//报错
	//	Base* base = new Son;
	//	base->func();//以此父类可以调用子类相应的函数，实现多种方式调用不同函数--类似于接口
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 5)案例二：制作饮品
	//案例分析：
		//流程：煮水-》冲泡-》倒入杯中-》加入辅料
		//利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶。
	//class AbstractDrinking {
	//public:
	//	//煮水
	//	virtual void Boil() = 0;
	//	//冲泡
	//	virtual void Brew() = 0;
	//	//倒入杯中
	//	virtual void PourInCup() = 0;
	//	//加入辅料
	//	virtual void  PutSomething() = 0;
	//	void makeDrink() {//制作饮品
	//		Boil();
	//		Brew();
	//		PourInCup();
	//		PutSomething();
	//	}
	//};
	////制造咖啡
	//class Coffee :public AbstractDrinking {
	//public:
	//	virtual void Boil() override
	//	{
	//		cout << "煮水" << endl;
	//	}
	//	virtual void Brew() override
	//	{
	//		cout << "冲泡咖啡" << endl;
	//	}
	//	virtual void PourInCup() override
	//	{
	//		cout << "倒入杯中" << endl;
	//	}
	//	virtual void PutSomething() override
	//	{
	//		cout << "加入辅料" << endl;
	//	}
	//};
	////制造茶叶
	//class Tea :public AbstractDrinking {
	//public:
	//	virtual void Boil() override
	//	{
	//		cout << "煮水" << endl;
	//	}
	//	virtual void Brew() override
	//	{
	//		cout << "冲泡茶" << endl;
	//	}
	//	virtual void PourInCup() override
	//	{
	//		cout << "倒入杯中" << endl;
	//	}
	//	virtual void PutSomething() override
	//	{
	//		cout << "加入辅料" << endl;
	//	}
	//};
	////制作函数
	//void doWork(AbstractDrinking * abs) {
	//	abs->makeDrink();
	//	delete abs;
	//}
	//void test01() {
	//	//制作咖啡
	//	doWork(new Coffee);
	//	//制作茶叶
	//	doWork(new Tea);
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 6)虚析构和纯虚析构
//多态的使用中，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用子类的析构代码
//↑解决办法：将父类的析构函数改为虚析构或者纯虚析构
//虚析构和纯虚析构共性：1）可以解决父类指针释放子类对象；2）都需要具体的函数实现
//				不同点：纯虚析构的这一类为抽象类，无法实例化对象
	//class Animal {
	//public:
	//	//纯虚函数
	//	virtual void speak() = 0;
	//	Animal() {
	//		cout << "anm构造" << endl;
	//	}
	//	//virtual ~Animal() {//虚析构可以解决问题
	//	//	cout << "anm析构" << endl;
	//	//}
	//	virtual ~Animal() = 0;//纯虚析构也可以解决问题，但是该类成为了抽象类
	//};
	//class Cat :public Animal {
	//public:
	//	Cat(string name) {
	//		m_Name=new string(name);
	//		cout << "cat构造" << endl;
	//	}
	//	~Cat() {
	//		if (m_Name) {
	//			cout << "Cat析构调用" << endl;
	//			delete m_Name;
	//			m_Name == NULL;
	//		}
	//	}
	//	virtual void speak() override
	//	{ 
	//		cout << *m_Name<<"Cat speak"<<endl;
	//	}
	//	string *m_Name;
	//};
	//Animal::~Animal() {
	//	cout << "animal的析构函数";//纯虚析构需要声明和实现
	//}//
	//void test01() {
	//	Animal* animal = new Cat("tom");
	//	animal->speak();
	//	//父类指针在析构的时候，不会调用子类的析构函数，导致之类如果有堆区数据将会出现内存泄露
	//	delete animal;
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 7)多态案例三：电脑组装
//案例概括：3个部件CPU、GPU、Memory
//将他们封装成抽象基类，提供不同的厂家Intel.Lenovo
//创建电脑类提供让电脑工作的函数，并调用每个零件工作的接口，测试组装不同三台进行工作
class CPU {
	//抽象计算函数
public:
	virtual void calculate() = 0;
};
class GPU {
public:
	//抽象显示函数
	virtual void display() = 0;
};
class Memory {
public:
	//抽象存储函数
	virtual void storage() = 0;
};
//Intel厂商
class IntelCPU :public CPU {
	virtual void calculate() override { 
		cout << "Intel的CPU开始计算了"<<endl;
	}
};
class IntelGPU :public GPU {
	virtual void display() override {
		cout << "Intel的GPU开始显示了" << endl;
	}
};
class IntelMemory :public Memory {
	virtual void storage() override{
		cout << "Intel的内存条开始存储了"<<endl;
	}
};
//Lenovo厂商
class LenovoCPU :public CPU {
	virtual void calculate() override {
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};
class LenovoGPU :public GPU {
	virtual void display() override {
		cout << "Lenovo的GPU开始显示了" << endl;
	}
};
class LenovoMemory :public Memory {
	virtual void storage() override {
		cout << "Lenovo的内存条开始存储了"<<endl;
	}
};
class Computer {
	//传入三个零件的指针，提供1个工作的函数，调用每个零件工作的接口
public:
	Computer(CPU* cpu, GPU* gpu, Memory* memory) {
		this->cpu = cpu;
		this->gpu = gpu;
		this->memory = memory;
	}
	//提供工作的函数
	void work() {
		//让零件工作起来，调用接口
		cpu->calculate();
		gpu->display();
		memory->storage();
	}
	//提供析构函数释放3个电脑的零件
	~Computer()
	{//释放零件开辟的堆的空间
		if (!cpu) { delete cpu; cpu = NULL; }
		if (!gpu) { delete gpu; gpu = NULL; }
		if (!memory) { delete memory; memory = NULL; }
	}
private:
	CPU* cpu;
	GPU* gpu;
	Memory *memory;//三个零件的指针

};
void test01() {
	//第一台电脑零件
	CPU* intelCPU = new IntelCPU;
	GPU* intelGPU = new IntelGPU;
	Memory* intelmemory = new IntelMemory;
	//创建第一台电脑
	Computer* comperter1 = new Computer(intelCPU, intelGPU, intelmemory);
	comperter1->work();
	delete comperter1;
}
void test02() {
	//第二台电脑的零件
	CPU* lcpu = new LenovoCPU;
	GPU* lgpu = new LenovoGPU;
	Memory* lm = new LenovoMemory;
	//创建电脑
	Computer* computer2 = new Computer(lcpu, lgpu, lm);
	computer2->work();
	delete computer2;
}
int main() {
	test01();
	test02();
}
#pragma endregion
