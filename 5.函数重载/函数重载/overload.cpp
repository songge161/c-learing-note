#include <iostream>
using namespace std;
//Tip:ctrl+k (ctrl+cע�ͣ�ctrl+u�⿪)
#pragma region ǰ��
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
	//    // ���� + ����������ڰ����� Box �������
	//    //�����ǲ������ص�������б�
	//
	//        //. , ��Ա���������
	//        //*, ->*��Աָ����������
	//        //:: �������
	//        //sizeof�����������
	//        //? : ���������
	//        //#  Ԥ�������
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
	//    double length;      // ����
	//    double breadth;     // ���
	//    double height;      // �߶�
	//};
	//// �����������
	//int main()
	//{
	//    Box Box1;                // ���� Box1������Ϊ Box
	//    Box Box2;                // ���� Box2������Ϊ Box
	//    Box Box3;                // ���� Box3������Ϊ Box
	//    double volume = 0.0;     // ������洢�ڸñ�����
	//
	//    // Box1 ����
	//    Box1.setLength(6.0);
	//    Box1.setBreadth(7.0);
	//    Box1.setHeight(5.0);
	//
	//    // Box2 ����
	//    Box2.setLength(12.0);
	//    Box2.setBreadth(13.0);
	//    Box2.setHeight(10.0);
	//
	//    // Box1 �����
	//    volume = Box1.getVolume();
	//    cout << "Volume of Box1 : " << volume << endl;
	//
	//    // Box2 �����
	//    volume = Box2.getVolume();
	//    cout << "Volume of Box2 : " << volume << endl;
	//
	//    // ������������ӣ��õ� Box3
	//    Box3 = Box1 + Box2;
	//
	//    // Box3 �����
	//    volume = Box3.getVolume();
	//    cout << "Volume of Box3 : " << volume << endl;
	//
	//    return 0;
	//}
#pragma endregion

//Ŀ¼ 1>һԪ�����;2>��Ԫ�������3>����/������������; 4>��ֵ���������;5>�������������()����
//6>�±������ []  7>���Ա���������->����(��) 8>������ϵ���������
#pragma region 1>һԪ�����
	//1>һԪ�������ֻ��һ������
	//class Time {
	//private :
	//	int	hour;//0-23
	//	int	minute;//0-60
	//public:
	//	int getHour() {
	//		return hour;
	//	}
	//	Time() {//����1
	//		 hour = 0;
	//		 minute = 0;
	//	}
	//	Time(int h,int m) {//����2
	//		hour = h;
	//		minute = m;
	//	}
	//	// ����ǰ׺����������� ++ ��
	//	Time operator++() {
	//		++minute;
	//		if (minute >= 60) {
	//			hour++;
	//			minute -=60;
	//		}
	//		return Time(hour, minute);
	//	}
	//	Time operator++(int) {//operator++(int) ��int ����ʾ��Ϊ��׺��������int����
	//		Time T( hour, minute);//���ݾɵ�
	//		++minute;
	//		if (minute >= 60)
	//		{
	//			++hour;
	//			minute -= 60;
	//		}
	//		return T;//���ؾɵ�
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
	//}//һԪ�����
//
#pragma endregion

#pragma region 2>��Ԫ�����
//2>��Ԫ�����
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
	//A::A(int n)//���캯�� 
	//{
	//	a = n;
	//}
	//A A::operator +(const A& obj)//����+������ ������� <-1
	//{
	//	return this->a + obj.a;
	//}
	//A A::operator+(const int b)//����+������  ����������� <-2
	//{
	//	return A(a + b);
	//}
	//A operator+(const int b, A obj)
	//{
	//	return obj + b;//��Ԫ�������õڶ�������+�ĳ�Ա����  �൱�� obj.operator+(b);<-3 
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
	//	a3 = a1 + a2;//���Խ���˳���൱��a3=a1.operator+(a2); 
	//	a3.display();
	//	a4 = a1 + m;//��Ϊ���˸���Ԫ��������Ҳ���Խ���˳���ˡ�
	//	a4.display();
	//	a5 = m + a1;
	//	a5.display();
	//}
#pragma endregion

#pragma region 3>IO���������
//3>����/������������[	������ȡ����� >> �Ͳ�������� <<	]
//tip:������Ҫ����������غ�������Ϊ�����Ԫ�������������Ǿ��ܲ��ô��������ֱ�ӵ��ú�����
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

#pragma region 4>��ֵ���������(=)
	//class Distance {
	//private:
	//	int feet;
	//	int inches;
	//public:
	//	// ����Ĺ��캯��
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
	//	// ��ʾ����ķ���
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
	//	// ʹ�ø�ֵ�����
	//	D1 = D2;
	//	cout << "D1=D2 ->D1:";
	//	D1.displayDistance();
	//}
#pragma endregion

#pragma region 5>������������� () ����
//Tip:������������� () ���Ա�����������Ķ��󡣵����� () ʱ�������Ǵ�����һ���µĵ��ú����ķ�ʽ��
//�෴�أ����Ǵ���һ�����Դ���������Ŀ�����������������
	//class Distance
	//{
	//private:
	//	int feet;             // 0 ������
	//	int inches;           // 0 �� 12
	//public:
	//	// ����Ĺ��캯��
	//	Distance() {
	//		feet = 0;
	//		inches = 0;
	//	}
	//	Distance(int f, int i) {
	//		feet = f;
	//		inches = i;
	//	}
	//	// ���غ������������
	//	Distance operator()(int a, int b, int c) {
	//		Distance D;
	//		// �����������
	//		D.feet = a + c ;
	//		D.inches = b + c;
	//		return D;
	//	}
	//	// ��ʾ����ķ���
	//	void displayDistance()
	//	{
	//		cout << "F: " << feet << " I:" << inches << endl;
	//	}
	//};
	//int main() {
	//	Distance D1(1, 2), D2,D3;
	//
	//	D1.displayDistance();
	//	D2 = D2(10, 15, 20);//��Ҫһ����������ȡ����ֵ
	//	D2.displayDistance();//��
	//	D3(1,2,3).displayDistance();//ֱ�Ӵ�ӡ
	//}
#pragma endregion

#pragma region 6>�±������ []
//ͨ�����ڷ�������Ԫ�ء����ظ������������ǿ���� C++ ����Ĺ��ܡ�
	//const int SIZE = 10;//�궨��SIZE
	//class safearay {
	//private:
	//	int arr[SIZE];
	//public:
	//	safearay() {
	//		register int i;//register int������ѭ�������Ч��
	//		for (i = 0; i < SIZE; i++)
	//		{
	//			arr[i] = i;
	//		}
	//	}
	//	int& operator[](int i) {//�������Խ��
	//		if (i >= SIZE) {
	//			cout << "�����������ֵ��" << endl;
	//			// ���ص�һ��Ԫ��
	//			return arr[0];
	//		}
	//		return arr[i];
	//	}
	//};
	//int main() {
	//	safearay A;
	//	cout << "A[2] ��ֵΪ : " << A[2] << endl;
	//	cout << "A[5] ��ֵΪ : " << A[5] << endl;
	//	cout << "A[12] ��ֵΪ : " << A[12] << endl;

	//	return 0;
	//}
#pragma endregion

#pragma region 7>���Ա���������->����(��)
//���Ա����������� -> �����Ա����أ�������Ϊ�鷳��������������Ϊһ���ำ��"ָ��"��Ϊ������� -> ������һ����Ա������
//���ʹ���� -> ��������������ͱ�����ָ���������Ķ���
//�����->ͨ����ָ�����������* ���ʹ�ã�����ʵ��"����ָ��"�Ĺ��ܡ�
//��Щָ������Ϊ������ָ�����ƵĶ���Ψһ��ͬ���ǣ�����ͨ��ָ����ʶ���ʱ�����ǻ�ִ������������
	//���磬��ָ������ʱ�����ߵ�ָ��ָ����һ������ʱ�����Զ�ɾ������
	//Ҳ����˵������һ���ࣺ
	//class Ptr {
	//	//...
	//	X* operator->();
	//};
	// �� Ptr �Ķ�������ڷ����� X �ĳ�Ա��ʹ�÷�ʽ��ָ����÷�ʮ�����ơ����磺
	// void f(Ptr p )
	//{
	//p->m = 10; // (p.operator->())->m = 10
	//}
//������������->�ɱ�����Ϊһ��һԪ��׺�������
	//#include <iostream>
	//#include <vector>
	//using namespace std;
	//// ����һ��ʵ�ʵ���
	//class Obj {
	//   static int i, j;
	//public:
	//   void f() const { cout << i++ << endl; }
	//   void g() const { cout << j++ << endl; }
	//};
	//// ��̬��Ա����
	//int Obj::i = 10;
	//int Obj::j = 12;
	//// Ϊ�������ʵ��һ������
	//class ObjContainer {
	//   vector<Obj*> a;
	//public:
	//   void add(Obj* obj)
	//   { 
	//	  a.push_back(obj);  // ���������ı�׼����
	//   }
	//   friend class SmartPointer;
	//};
	//// ʵ������ָ�룬���ڷ����� Obj �ĳ�Ա
	//class SmartPointer {
	//   ObjContainer oc;
	//   int index;
	//public:
	//   SmartPointer(ObjContainer& objc)
	//   { 
	//	   oc = objc;
	//	   index = 0;
	//   }
	//   // ����ֵ��ʾ�б����
	//   bool operator++() // ǰ׺�汾
	//   { 
	//	 if(index >= oc.a.size() - 1) return false;
	//	 if(oc.a[++index] == 0) return false;
	//	 return true;
	//   }
	//   bool operator++(int) // ��׺�汾
	//   { 
	//	  return operator++();
	//   }
	//   // ��������� ->
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
	//   SmartPointer sp(oc); // ����һ��������
	//   do {
	//	  sp->f(); // ����ָ�����
	//	  sp->g();
	//   } while(sp++);
	//   return 0;
	//}
#pragma endregion

#pragma region 8>������ϵ���������
//��ϵ������� < �� > �� <= �� >= �� == �ȵȣ�,
//�����������κ�һ����ϵ����������غ�Ĺ�ϵ����������ڱȽ���Ķ���
class Distance
{
private:
	int feet;             // 0 ������
	int inches;           // 0 �� 12
public:
	// ����Ĺ��캯��
	Distance() {
		feet = 0;
		inches = 0;
	}
	Distance(int f, int i) {
		feet = f;
		inches = i;
	}
	// ��ʾ����ķ���
	void displayDistance()
	{
		cout << "F: " << feet << " I:" << inches << endl;
	}
	// ���ظ�������� - ��
	Distance operator- ()
	{
		feet = -feet;
		inches = -inches;
		return Distance(feet, inches);
	}
	// ����С��������� < ��
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
