//��̬
#include <iostream>
using namespace std;
#include <string>
//��̬��Ϊ����
//��̬��̬���������أ���������أ����ú�����
//��̬��̬����������麯��ʵ������ʱ��̬ 
//���𣺾�̬��̬�ĺ�����ַ���-����׶�ȷ��������ַ
//		��̬��̬�ĺ�����ַ���-���н׶�ȷ��������ַ
//�ŵ㣺1��������֯�ṹ������2���ɶ���ǿ��3������ǰ�ںͺ��ڵ���չ�Լ�ά��
#pragma region 1����̬�Ļ����﷨
	//class Animal {
	//public:
	//	/*void speak() {//��������
	//		cout << "Aminal is talking";
	//	}*/
	//	virtual void speak() {//�麯��
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
	////ִ��˵������
	////��Ϊ��ַ��󶨣��ڱ���׶���ȷ��������ַ
	////�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
	////��̬��̬������������1���м̳й�ϵ 2��������д������麯��
	////Tip����д-�����������ͣ��������������б�����ȫ��ͬ

	////��̬��̬ʹ�ã�����ָ�������ִ���������
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

#pragma region 2����̬��ԭ������
	//class Animal {
	//	public:
	//		//void speak() {//����
	//		virtual void speak() {//�麯��
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
	//		cout << "sizeof Animal" << sizeof(Animal) << endl;//���� 1���麯�� 4
	//	}
	//	int main() {
	//		test01(); test02();
	//	}
#pragma endregion

#pragma region 3)��̬����һ����������
	////1����ͨд��
	//class Caculator {
	//public:
	//	int getResult(string oper) {
	//		if (oper == "+") return m_Num1 + m_Num2;
	//		else if (oper == "-") return m_Num1 - m_Num2;
	//		else if (oper == "*")return m_Num1 * m_Num2;
	//		else if (oper == "/")return m_Num1 / m_Num2;
	//		//�������չ�µĹ��ܣ������޸�Դ��
	//		//����ʵ�������ᳫ����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
	//		else {
	//			cout << "Please wirte right operator!" << endl;
	//			cout << "num1-num2:" << m_Num1 << "-" << m_Num2 << endl;
	//			return NULL;
	//		}
	//	}
	//	int m_Num1;
	//	int m_Num2;
	//};

	////2)���ڶ�̬ʵ�ּ�����
	////ʵ�ּ�����������
	//class AbstractCalculator {
	//public:
	//	virtual int getResult() {
	//		return 0;
	//	}
	//	int m_Num1;
	//	int m_Num2;
	//};
	//	//a)�ӷ�������
	//class AddCaculator :public AbstractCalculator {
	//	int getResult() {
	//		return m_Num1 + m_Num2;
	//	}
	//	};
	//	//b)�ӷ�������
	//	class SubCaculator :public AbstractCalculator {
	//		int getResult() {
	//			return m_Num1 - m_Num2;
	//		}
	//	};
	//	//c)�˷�������
	//	class MulCaculator :public AbstractCalculator {
	//		int getResult() {
	//			return m_Num1* m_Num2;
	//		}
	//	};
	//	//�˺���Ը����������ӹ���
	//void test01() {
	//	Caculator	c1;
	//	c1.m_Num1 = 15;
	//	c1.m_Num2 = 20;
	//	cout<<c1.getResult("=")<<endl;
	//}
	//void test02() {
	//	//��̬��ʹ������������ָ���������ָ���������
	//	AbstractCalculator* abc = new AddCaculator;
	//	abc->m_Num1 = 15;
	//	abc->m_Num2 = 10;
	//	cout<<abc->getResult()<<endl;
	//	//�����ǵ�����
	//	delete abc;
	//	//����
	//	abc = new SubCaculator;
	//	abc->m_Num1 = 15;
	//	abc->m_Num2 = 10;
	//	cout<< abc->getResult() << endl;
	//	delete abc;
	//	//�˷�
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

#pragma region 4)���麯���ͳ�����
//1)���麯����ͨ���������麯����ʵ���Ǻ�������ģ���Ҫ���ǵ���������д�����ݣ���˿��Խ��麯����дΪ���麯��
//���������˴��麯���������Ϊ������
//2�������ࣺ�ص�a)�޷�ʵ��������2�����������д�������еĴ��麯��������Ҳ���ڳ�����
 
	//class Base {
	//public:
	//	virtual void func() = 0;//���麯��

	//};
	//class Son :public Base {
	//public:
	//	virtual void func() {
	//		cout << "haha";
	//	}
	//};
	//void test01() {
	//	//Base b;//�����������޷�ʵ��������
	//	//new Base//����
	//	Base* base = new Son;
	//	base->func();//�Դ˸�����Ե���������Ӧ�ĺ�����ʵ�ֶ��ַ�ʽ���ò�ͬ����--�����ڽӿ�
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 5)��������������Ʒ
	//����������
		//���̣���ˮ-������-�����뱭��-�����븨��
		//���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ��
	//class AbstractDrinking {
	//public:
	//	//��ˮ
	//	virtual void Boil() = 0;
	//	//����
	//	virtual void Brew() = 0;
	//	//���뱭��
	//	virtual void PourInCup() = 0;
	//	//���븨��
	//	virtual void  PutSomething() = 0;
	//	void makeDrink() {//������Ʒ
	//		Boil();
	//		Brew();
	//		PourInCup();
	//		PutSomething();
	//	}
	//};
	////���쿧��
	//class Coffee :public AbstractDrinking {
	//public:
	//	virtual void Boil() override
	//	{
	//		cout << "��ˮ" << endl;
	//	}
	//	virtual void Brew() override
	//	{
	//		cout << "���ݿ���" << endl;
	//	}
	//	virtual void PourInCup() override
	//	{
	//		cout << "���뱭��" << endl;
	//	}
	//	virtual void PutSomething() override
	//	{
	//		cout << "���븨��" << endl;
	//	}
	//};
	////�����Ҷ
	//class Tea :public AbstractDrinking {
	//public:
	//	virtual void Boil() override
	//	{
	//		cout << "��ˮ" << endl;
	//	}
	//	virtual void Brew() override
	//	{
	//		cout << "���ݲ�" << endl;
	//	}
	//	virtual void PourInCup() override
	//	{
	//		cout << "���뱭��" << endl;
	//	}
	//	virtual void PutSomething() override
	//	{
	//		cout << "���븨��" << endl;
	//	}
	//};
	////��������
	//void doWork(AbstractDrinking * abs) {
	//	abs->makeDrink();
	//	delete abs;
	//}
	//void test01() {
	//	//��������
	//	doWork(new Coffee);
	//	//������Ҷ
	//	doWork(new Tea);
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 6)�������ʹ�������
//��̬��ʹ���У���������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷������������������
//������취�������������������Ϊ���������ߴ�������
//�������ʹ����������ԣ�1�����Խ������ָ���ͷ��������2������Ҫ����ĺ���ʵ��
//				��ͬ�㣺������������һ��Ϊ�����࣬�޷�ʵ��������
	//class Animal {
	//public:
	//	//���麯��
	//	virtual void speak() = 0;
	//	Animal() {
	//		cout << "anm����" << endl;
	//	}
	//	//virtual ~Animal() {//���������Խ������
	//	//	cout << "anm����" << endl;
	//	//}
	//	virtual ~Animal() = 0;//��������Ҳ���Խ�����⣬���Ǹ����Ϊ�˳�����
	//};
	//class Cat :public Animal {
	//public:
	//	Cat(string name) {
	//		m_Name=new string(name);
	//		cout << "cat����" << endl;
	//	}
	//	~Cat() {
	//		if (m_Name) {
	//			cout << "Cat��������" << endl;
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
	//	cout << "animal����������";//����������Ҫ������ʵ��
	//}//
	//void test01() {
	//	Animal* animal = new Cat("tom");
	//	animal->speak();
	//	//����ָ����������ʱ�򣬲�������������������������֮������ж������ݽ�������ڴ�й¶
	//	delete animal;
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 7)��̬��������������װ
//����������3������CPU��GPU��Memory
//�����Ƿ�װ�ɳ�����࣬�ṩ��ͬ�ĳ���Intel.Lenovo
//�����������ṩ�õ��Թ����ĺ�����������ÿ����������Ľӿڣ�������װ��ͬ��̨���й���
class CPU {
	//������㺯��
public:
	virtual void calculate() = 0;
};
class GPU {
public:
	//������ʾ����
	virtual void display() = 0;
};
class Memory {
public:
	//����洢����
	virtual void storage() = 0;
};
//Intel����
class IntelCPU :public CPU {
	virtual void calculate() override { 
		cout << "Intel��CPU��ʼ������"<<endl;
	}
};
class IntelGPU :public GPU {
	virtual void display() override {
		cout << "Intel��GPU��ʼ��ʾ��" << endl;
	}
};
class IntelMemory :public Memory {
	virtual void storage() override{
		cout << "Intel���ڴ�����ʼ�洢��"<<endl;
	}
};
//Lenovo����
class LenovoCPU :public CPU {
	virtual void calculate() override {
		cout << "Lenovo��CPU��ʼ������" << endl;
	}
};
class LenovoGPU :public GPU {
	virtual void display() override {
		cout << "Lenovo��GPU��ʼ��ʾ��" << endl;
	}
};
class LenovoMemory :public Memory {
	virtual void storage() override {
		cout << "Lenovo���ڴ�����ʼ�洢��"<<endl;
	}
};
class Computer {
	//�������������ָ�룬�ṩ1�������ĺ���������ÿ����������Ľӿ�
public:
	Computer(CPU* cpu, GPU* gpu, Memory* memory) {
		this->cpu = cpu;
		this->gpu = gpu;
		this->memory = memory;
	}
	//�ṩ�����ĺ���
	void work() {
		//������������������ýӿ�
		cpu->calculate();
		gpu->display();
		memory->storage();
	}
	//�ṩ���������ͷ�3�����Ե����
	~Computer()
	{//�ͷ�������ٵĶѵĿռ�
		if (!cpu) { delete cpu; cpu = NULL; }
		if (!gpu) { delete gpu; gpu = NULL; }
		if (!memory) { delete memory; memory = NULL; }
	}
private:
	CPU* cpu;
	GPU* gpu;
	Memory *memory;//���������ָ��

};
void test01() {
	//��һ̨�������
	CPU* intelCPU = new IntelCPU;
	GPU* intelGPU = new IntelGPU;
	Memory* intelmemory = new IntelMemory;
	//������һ̨����
	Computer* comperter1 = new Computer(intelCPU, intelGPU, intelmemory);
	comperter1->work();
	delete comperter1;
}
void test02() {
	//�ڶ�̨���Ե����
	CPU* lcpu = new LenovoCPU;
	GPU* lgpu = new LenovoGPU;
	Memory* lm = new LenovoMemory;
	//��������
	Computer* computer2 = new Computer(lcpu, lgpu, lm);
	computer2->work();
	delete computer2;
}
int main() {
	test01();
	test02();
}
#pragma endregion
