#include<iostream>
#include <vector>
#include <deque>
#include <string>
#include <ctime>
#include<algorithm>
using namespace std;
//功能：双端数组，可以对头端进行插入删除操作
//deque与vector区别：
//vector对于头部的插入删除效率低，数据量越大，效率越低
//deque相对而言，对头部的插入删除速度回比vector快
//vector访问元素时的速度会比deque快, 这和两者内部实现有关
//deque内部工作原理:
//deque内部有个中控器，维护每段缓冲区中的内容，缓冲区中存放真实数据
//中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间

//存放一些通用的函数
void printDeque(const deque<int>&d) {//改为只读状态
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {//只读迭代器
		//*it = 100;//此时报错,不可更改值
		cout << *(it) << " ";
	}
	cout << endl;
}

#pragma region 1)deque的构造函数
//函数原型：
//deque<T> deqT; //默认构造形式
//deque(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身。
//deque(n, elem); //构造函数将n个elem拷贝给本身。
//deque(const deque& deq); //拷贝构造函数


//void test01() {
//	deque<int>d1;
//	for (int i = 0; i < 10; i++) {
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//	deque<int>d3(10, 100);//n个elem
//	printDeque(d3);
//	deque<int>d4(d3);//拷贝
//	printDeque(d4);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 2）deque的赋值操作
//函数原型：
//deque& operator=(const deque& deq); //重载等号操作符
//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem); //将n个elem拷贝赋值给本身。

//void test01() {
//	deque<int>d1;
//	for (int i = 0; i < 10; i++) 
//	{
//	d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int>d2 = d1;
//	printDeque(d2);
//	deque<int>d3;
//	d3.assign(d2.begin(), d2.end());
//	printDeque(d3);
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//int main() {
//	test01();
//}

#pragma endregion

#pragma region 3）deque容器的大小操作
//函数原型：
//deque.empty(); //判断容器是否为空
//deque.size(); //返回容器中元素的个数
//deque.resize(num); //重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
////如果容器变短，则末尾超出容器长度的元素被删除。
//deque.resize(num, elem); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
////如果容器变短，则末尾超出容器长度的元素被删除。
//deque没有容量的概念

//void test01() {
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	if (d1.empty() == 1) {
//		cout << "d1为空" << endl; 
//	}
//	else
//	{
//		cout << "d1不为空" << endl;
//		cout << "d1的大小" << d1.size()<<endl;
//		d1.resize(15,1);//默认为0
//		cout << "d1的大小" << d1.size() << endl;
//		printDeque(d1);
//		d1.resize(5);
//	}
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 4)deque容器的插入和删除
//函数原型：
//两端插入操作：
//push_back(elem); //在容器尾部添加一个数据
//push_front(elem); //在容器头部插入一个数据
//pop_back(); //删除容器最后一个数据
//pop_front(); //删除容器第一个数据
//指定位置操作：
//insert(pos, elem); //在pos位置插入一个elem元素的拷贝，返回新数据的位置。
//insert(pos, n, elem); //在pos位置插入n个elem数据，无返回值。
//insert(pos, beg, end); //在pos位置插入[beg,end)区间的数据，无返回值。
//clear(); //清空容器的所有数据
//erase(beg, end); //删除[beg,end)区间的数据，返回下一个数据的位置。
//erase(pos); //删除pos位置的数据，返回下一个数据的位置

////两端操作
//void test01() {
//	deque<int>d1;
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//	//尾删
//	d1.pop_back();
//	printDeque(d1);
//	//头删
//	d1.pop_front();
//	printDeque(d1);
//}
////插入
//void test02() {
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//	//insert插入
//	d1.insert(d1.begin(), 1000);
//	printDeque(d1);
//	d1.insert(d1.begin(), 2,10000);
//	printDeque(d1);
//	deque<int>d2;
//	d2.insert(d2.begin(), d1.begin(), d1.end());
//	printDeque(d2);
//}
////删除
//void test03() {
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);//第二个元素
//	printDeque(d1);
//	d1.erase(d1.begin(), d1.end());
//	printDeque(d1);
//	d1.clear();//等价于上面一个
//}
//int main() {
//	test01();
//	test02();
//	test03();
//}
#pragma endregion

#pragma region 5）deque的数据存取
//函数原型：
//at(int idx); //返回索引idx所指的数据
//operator[]; //返回索引idx所指的数据
//front(); //返回容器中第一个数据元素
//back(); //返回容器中最后一个数据元素

//void test01() {
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	//通过[]方式访问元素
//	for (int i = 0; i < d.size(); i++) {
//		cout << d[i] << " ";
//	}
//	cout << endl;
//	cout << d.front() << endl;
//	cout << d.back() << endl;
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 6)deque的排序操作
//算法：
//sort(iterator beg, iterator end) //对beg和end区间内元素进行排序

//void test01() {
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//	//vector同样可以用sort排序
//	sort(d.begin(), d.end());//升序
//	//sort(d.rbegin(), d.rend());//降序
//	printDeque(d);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 7)STL案例1
//案例描述
//有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
//实现步骤
//1. 创建五名选手，放到vector中
//2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
//3. sort算法对deque容器中分数排序，去除最高和最低分
//4. deque容器遍历一遍，累加总分
//5. 获取平均分

class Person {
public:
	Person(string name,int score) {
		this-> m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;//平均分
};
void createPerson(vector<Person>&v) {
	for (int i = 0; i < 5; i++) {
		string name = "选手";
		string nameSeed = "ABCDE";
		name+= nameSeed[i];
		int score = 0;
		Person p(name, score);
		v.push_back(p);//将person对象放入容器中
	}
	
}
void setScore(vector<Person>&v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		//将评委的分数放入deque容器中
		deque<int> d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 41 + 60;  //60~100
			d.push_back(score);
		}
		//去除最高和最低
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			sum += *dit;//累加	评委的分数
		}
		int avg = sum / d.size();
		//将平均分赋值到选手
		it->m_Score = avg;
	}
}
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名： " << it->m_Name << " 平均分： " << it->m_Score << endl;
	}
}
int main() {
	//随机数种子
	srand((unsigned int)time(NULL));//时间种子
	vector<Person> v;//存放选手容器
	createPerson(v);
	//测试
	setScore(v);
	showScore(v);
}
#pragma endregion
