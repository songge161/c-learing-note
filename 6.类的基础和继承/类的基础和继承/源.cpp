#include <iostream>
using namespace std;
//1�������ຯ��
class Book {
public:
	int classType,bookNumber;
	int Get(void);
	void Set(int bookNumber);
	Book(int bN);//1)���캯������

	~Book();//2)������������(���ܷ����κ�ֵҲ���ܴ��в�����Ŀ����Ϊ����������ʱ�����ʾ���ͷ���Դ)

	Book(const Book& obj); //3)�������캯��  TIP:�����ָ����������ж�̬�ڴ���䣬����������һ���������캯��
private:
	int* ptr;
};
int Book::Get(void) {//��ȡ����������ֵΪint
	return bookNumber;
}
void Book::Set(int bN) {//���ò��������践����Ҫ���и�ֵ
	bookNumber = bN;
}
Book::Book(const Book& obj)
{
	cout << "���ÿ������캯����Ϊָ�� ptr �����ڴ�" << endl;
	ptr = new int;
	*ptr = *obj.ptr; // ����ֵ
}
Book::~Book() {
	cout << endl<<"Object is being deleted";
}
Book::Book(int bN) {//���캯��
	cout << "output";
	bookNumber = bN;
}


//2����Ԫ��������Ϊ��Ԫ����û��thisָ�룬�����Ҫ����������� 
			//Ҫ���ʷ�static��Աʱ����Ҫ������������
			//Ҫ����static��Ա��ȫ�ֱ���ʱ������Ҫ������������
			//����������Ķ�����ȫ�ֶ�������Ҫ����������.
			//����ֱ�ӵ�����Ԫ����������Ҫͨ�������ָ��
class Box
{
	double width;
public:
	friend void printWidth(Box box);
	void setWidth(double wid);
};
// ��Ա��������
void Box::setWidth(double wid)
{
	width = wid;
}
// ��ע�⣺printWidth() �����κ���ĳ�Ա����
void printWidth(Box box)
{
	/* ��Ϊ printWidth() �� Box ����Ԫ��������ֱ�ӷ��ʸ�����κγ�Ա */
	cout << "Width of box : " << box.width << endl;
}


//3����������:1.�����������ڲ�����ʹ��ѭ�����Ϳ�����䣻
			//2.���������Ķ���������������������һ�ε���֮ǰ��
			//3.��ṹ�����ڵ���˵���ڲ�����ĺ���������������
inline int Max(int x, int y)//�������ֵ
{
	return (x > y) ? x : y;
}

//4����ļ̳�:
	//���м̳У�public������һ���������Թ��л���ʱ������Ĺ��г�ԱҲ��������Ĺ��г�Ա������ı�����ԱҲ��������ı�����Ա��
	// �����˽�г�Ա����ֱ�ӱ���������ʣ����ǿ���ͨ�����û���Ĺ��кͱ�����Ա�����ʡ�
	//�����̳У�protected���� ��һ���������Ա�������ʱ������Ĺ��кͱ�����Ա����Ϊ������ı�����Ա��
	//˽�м̳У�private������һ����������˽�л���ʱ������Ĺ��кͱ�����Ա����Ϊ�������˽�г�Ա��\
	//��̳м�һ����������ж�����࣬���̳��˶����������ԡ�
class Shape {//����
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
// ����2 PaintCost
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
//������
int main() {
	Book b1(100);
	cout << b1.Get();
	/*�ָ���*/cout << endl << "=================" << endl;//�ָ���

	Box box;
	// ʹ�ó�Ա�������ÿ��
	box.setWidth(10.0);
	// ʹ����Ԫ����������
	printWidth(box);
	/*�ָ���*/cout << endl << "=================" << endl;//�ָ���

	cout << "Max (20,10): " << Max(20, 10) << endl;
	/*�ָ���*/cout << endl << "=================" << endl;//�ָ���
	Rectangle Rect;
	int area;
	Rect.setWidth(5);
	Rect.setHeight(7);
	area = Rect.getArea();
	// �����������
	cout << "Total area: " << Rect.getArea() << endl;

	// ����ܻ���
	cout << "Total paint cost: $" << Rect.getCost(area) << endl;
	return 0;
}