#include <iostream>
#include <stack>
#include <queue>
#include<string>
using namespace std;


#pragma region 1��stack
//���stack��һ���Ƚ����(First In Last Out, FILO)�����ݽṹ����ֻ��һ������
//ջ��ֻ�ж��˵�Ԫ�زſ��Ա����ʹ�ã����ջ�������б�����Ϊ
//ջ�н������ݳ�Ϊ-- - ��ջ push
//ջ�е������ݳ�Ϊ-- - ��ջ pop
//ջ�ĳ��ýӿ�
//���캯����
//stack<T> stk; //stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
//stack(const stack& stk); //�������캯��
//��ֵ������
//stack& operator=(const stack& stk); //���صȺŲ�����
//���ݴ�ȡ��
//push(elem); //��ջ�����Ԫ��
//pop(); //��ջ���Ƴ���һ��Ԫ��
//top(); //����ջ��Ԫ��
//��С������
//empty(); //�ж϶�ջ�Ƿ�Ϊ��
//size(); //����ջ�Ĵ�С

void test01() {
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "ջ�Ĵ�С" << s.size() << endl;
	while (!s.empty())
	{
		cout << "ջ��Ԫ��" << s.top() << endl;
		s.pop();
	}
}
#pragma endregion



#pragma region 2)queue
//���Queue��һ���Ƚ��ȳ�(First In First Out, FIFO)�����ݽṹ��������������
//�������������һ������Ԫ�أ�����һ���Ƴ�Ԫ��
//������ֻ�ж�ͷ�Ͷ�β�ſ��Ա����ʹ�ã���˶��в������б�����Ϊ
//�����н����ݳ�Ϊ-- - ��� push
//�����г����ݳ�Ϊ-- - ���� pop

//���캯����
//queue<T> que; //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
//queue(const queue& que); //�������캯��
//��ֵ������
//queue& operator=(const queue& que); //���صȺŲ�����
//���ݴ�ȡ��
//push(elem); //����β���Ԫ��
//pop(); //�Ӷ�ͷ�Ƴ���һ��Ԫ��
//back(); //�������һ��Ԫ��
//front(); //���ص�һ��Ԫ��
//��С������
//empty(); //�ж϶�ջ�Ƿ�Ϊ��
//size(); //����ջ�Ĵ�С

class Person {
public:
	Person(string name,int age) {
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};
void test02() {
	//��������
	queue<Person>q;
	Person p1("a", 1);
	Person p2("b", 2);
	Person p3("c", 3);
	Person p4("d", 4);
	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "���д�С" << q.size() << endl;
	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ��β
	while (!q.empty()) {
		cout << "��ͷ��"<< q.front().m_Name<<"  "<<q.front().m_Age << "	��β:" << q.back().m_Name<<"  "<<q.back().m_Age << endl;
		q.pop();
	}
	cout << "���д�С" << q.size() << endl;
}

#pragma endregion




int main() {
	test01();
	test02();
}