#include <iostream>
using namespace std;
//���ý���
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
//�����������ķ���ֵ
	//ע��1����Ҫ���ؾֲ����������ã�2�������ĵ��ÿ�����Ϊ��ֵ
int& test2() {
	static int a = 10;//��̬����
	return a;
	}
void show(const int &val) {
	cout << "val=" << val<<endl;
}
int main() {
//���ã������������
//�﷨ �������� &���� = ԭ��
//ע������1�����ñ����ʼ����2����ʼ���󲻿ɸı�
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
	test2() = 1000;//�����ĵ��ÿ�����Ϊ��ֵ
	cout << "ref:" << ref<<"test2��"<<test2() << endl;//�ٴμ����Ƿ��ڴ涪ʧ������static������������߷Ƿ�����
	//��������
	//Ϊ�������βΣ���ֹ�����
	//const int& ref2 = 10;//���ñ���	���Ϸ����ڴ�ռ�
	//����const�󣬱������������޸ĵȼ���int temp=10;const int &ref=temp
	show(a);
}