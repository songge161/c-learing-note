#include<iostream>
using namespace std;

#pragma region 1�����ּ̳з�ʽ
//�̳з�ʽ1��public�̳�;2)protected�̳� ��3��private�̳�
//��ͬ�̳л�ı���������ȼ���ep��protected�̳л���pulibc��Ϊprotected
	////�����̳�
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
	//		//����c�޷�����
	//	}
	//};
	//void test01() {
	//	Son1 s1;
	//	s1.a = 100;
	//	//s1.b ���ɷ��ʣ������Ǳ���Ȩ��
	//}
	////�����̳�
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
	//		a = 100;//����public������Ϊprotected
	//		b = 100;
	//		//c=100 //���ɷ���
	//	}
	//};
	//void test02() {
	//	Son2 s1;
	//	//s1.a = 100;���ɷ��ʣ��ܵ�������������ʲ���
	//}
	////˽�м̳�
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
	//		b = 100;//a,b�����඼��Ϊ˽�г�Ա
	//		//c=100 �����˽�����಻�ɷ���
	//	}
	//};
	//class GrandSon:public Son3 {
	//	void func() {
	//		//a=100//a,b,c���޷�����
	//	}
	//};
	//void test03() {
	//	Son3 s1;
	//	//s1.a = 100; a,b,c��Ϊ˽�г�Ա�������޷�����
	//}
	//int main() {
	//
	//}
#pragma endregion

#pragma region 2���̳��еĶ���ģ��
	////��չ���鿴��Ķ���ķֲ�ģ��
	////1���ٿ�ʼ�˵����ҵ�VS2019�ļ��У��ҵ� developer command prompt��
	////2)ȷ����Ŀ�ļ��ص㣬�����ͬ�����л��̷� X: ����XΪ����,Ȼ��cd������Ŀ��Ŀ¼
	////3)�鿴���� cl /d1 reportSingleClassLayout[ClassName] [FileName->��cpp��β]
	//class Base {
	//public:
	//	int a;
	//protected:
	//	int b;
	//private:
	//	int c;
	//};
	//class Son :public Base {
	//	//��������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//	//�����˽�г�Ա�����Ǳ������������ˣ��޷����ʣ����Ǳ��̳���
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

#pragma region 3)������������ڼ̳��е�˳��
	//class Base {
	//public:
	//	Base() {
	//		cout << "base����"<<endl;
	//	}
	//	~Base() {
	//		cout << "base����" << endl;
	//	}
	//};
	//class Son :public Base {
	//public:
	//	Son(){
	//		cout << "son����" << endl;
	//	}
	//	~Son() {
	//		cout << "son����"<<endl;
	//	}
	//};
	//void test01() {
	//	//Base b;//base���� base����
	//	Son s;
	//	//�ȹ��츸���ٹ������࣬�������������������ࡾ�Ƚ������
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 4��ͬ����Ա�Ĵ���ʽ
//��������ͬ����Ա-ֱ�ӷ���
//���ʸ���ͬ����Ա-��Ҫ��������

//�̳�ͬ����Ա/��������
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
	//		cout << "b.func--���ص�" << endl;
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
	//	cout<<"Son.a:"<<s.a<<endl;//�����a
	//	cout << "Son[Base.a]:" << s.Base::a<<endl;//�����и���̳е�a����Ҫ��������
	//}
	//void test02() {
	//	Son s;
	//	s.func();//���ຯ��
	//	s.Base::func();//�����еĸ��ຯ��
	//	//s.func(1);���ܵ���
	//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա���������ص����������е�ͬ����Ա����
	//	//����������Ҫ��������
	//	s.Base::func(1);
	//}
	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion

#pragma region 5���̳�ͬ����̬��Ա�Ĵ���ʽ
	////����ʽһ��
	////��������ͬ����Ա-ֱ�ӷ���
	////���ʸ���ͬ����Ա-��Ҫ��������
	////�̳��е�ͬ����̬��Ա����ʽ
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
	////ͬ����̬��Ա����
	//void test01() {
	//	Son s;
	//	//1ͨ���������
	//	cout << "a:"<<s.a<<endl;
	//	cout << "a-Base:" << s.Base::a<< endl;
	//	//2ͨ����������
	//	cout << "className Son:" << Son::a<<endl;
	//	cout << "className Base:" << Son::Base::a << endl;
	//}
	////ͬ����̬��Ա����
	//void test02() {
	//	Son s;
	//	//1ͨ���������
	//	s.func();
	//	s.Base::func();
	//	//2ͨ����������
	//	Son::func();
	//	Son::Base::func();
	//	//�������ʸ��౻���ص�ͬ����Ա��Ҫ��������
	//	Son::Base::func(100);
	//}
	//int main() {
	//	test01();
	//	test02();
	//}
#pragma endregion

#pragma region 6����̳��﷨
	////һ��������̳ж���� 
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
	////����̳�B1��B2
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
	//	cout << "a-b1:" << s.Base1::a << endl;//�������ͬ����Ա��Ҫ������������
	//	cout << "a-b2:" << s.Base2::a << endl;
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 7�����μ̳�
//�ص㣺����������̳�һ�����࣬ĳ����̳������������� A-[(B-D)&(C-D)],��Ҫ���������
class Animal {
public:
	int age;
};
//������̳п��Խ�����μ̳е�����
class Sheep:virtual public Animal {//��̳�virtual����ʱAnimal��Ϊ�����

};
class Camel :virtual public Animal {

};
class Cnm :public Sheep, public Camel {

};
void test01() {
	Cnm cnm;
	cnm.Camel::age = 28;
	cnm.Sheep::age = 18;

	//���������μ̳е�ʱ����������ӵ����ͬ��������Ҫ��������������
	cout << "cnm.Sheep::age=" << cnm.Sheep::age << endl;
	cout << "cnm.Camel::age=" << cnm.Camel::age << endl;
	//�����������֪��ֻ��һ�ݾͿ��ԣ����ε������������ݣ���Դ�˷�
	cout << "cnm.age:" << cnm.age << endl;
}
int main() {
	test01();
}
#pragma endregion
