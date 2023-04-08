#include <iostream>
#include <stack>
#include <queue>
#include<string>
using namespace std;


#pragma region 1）stack
//概念：stack是一种先进后出(First In Last Out, FILO)的数据结构，它只有一个出口
//栈中只有顶端的元素才可以被外界使用，因此栈不允许有遍历行为
//栈中进入数据称为-- - 入栈 push
//栈中弹出数据称为-- - 出栈 pop
//栈的常用接口
//构造函数：
//stack<T> stk; //stack采用模板类实现， stack对象的默认构造形式
//stack(const stack& stk); //拷贝构造函数
//赋值操作：
//stack& operator=(const stack& stk); //重载等号操作符
//数据存取：
//push(elem); //向栈顶添加元素
//pop(); //从栈顶移除第一个元素
//top(); //返回栈顶元素
//大小操作：
//empty(); //判断堆栈是否为空
//size(); //返回栈的大小

void test01() {
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "栈的大小" << s.size() << endl;
	while (!s.empty())
	{
		cout << "栈顶元素" << s.top() << endl;
		s.pop();
	}
}
#pragma endregion



#pragma region 2)queue
//概念：Queue是一种先进先出(First In First Out, FIFO)的数据结构，它有两个出口
//队列容器允许从一端新增元素，从另一端移除元素
//队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为
//队列中进数据称为-- - 入队 push
//队列中出数据称为-- - 出队 pop

//构造函数：
//queue<T> que; //queue采用模板类实现，queue对象的默认构造形式
//queue(const queue& que); //拷贝构造函数
//赋值操作：
//queue& operator=(const queue& que); //重载等号操作符
//数据存取：
//push(elem); //往队尾添加元素
//pop(); //从队头移除第一个元素
//back(); //返回最后一个元素
//front(); //返回第一个元素
//大小操作：
//empty(); //判断堆栈是否为空
//size(); //返回栈的大小

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
	//创建队列
	queue<Person>q;
	Person p1("a", 1);
	Person p2("b", 2);
	Person p3("c", 3);
	Person p4("d", 4);
	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "队列大小" << q.size() << endl;
	//判断只要队列不为空，查看队头队尾
	while (!q.empty()) {
		cout << "队头："<< q.front().m_Name<<"  "<<q.front().m_Age << "	队尾:" << q.back().m_Name<<"  "<<q.back().m_Age << endl;
		q.pop();
	}
	cout << "队列大小" << q.size() << endl;
}

#pragma endregion




int main() {
	test01();
	test02();
}