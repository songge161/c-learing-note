#include <iostream>
#include <vector>
using namespace std;
#include <string>
//功能：vector数据结构和数组非常相似，也称为单端数组
//vector与普通数组区别：不同之处在于数组是静态空间，而vector可以动态扩展
//动态扩展：并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间
 
#pragma region 1)vector构造函数
//函数原型：
//vector<T> v; //采用模板实现类实现，默认构造函数
//vector(v.begin(), v.end()); //将v[begin(), end())区间中的元素拷贝给本身。
//vector(n, elem); //构造函数将n个elem拷贝给本身。
//vector(const vector& vec); //拷贝构造函数。
//void printVector(vector<int> &v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	vector<int>v1;//默认构造
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printVector(v1);
//	//通过区间的方式进行构造
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//	//n个element构造
//	vector<int>v3(10, 100);
//	printVector(v3);
//	//拷贝构造
//	vector<int>v4(v3);
//	printVector(v4);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 2)vector容器-赋值操作
//函数原型：
//vector& operator=(const vector& vec); //重载等号操作符
//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem); //将n个elem拷贝赋值给本身。

//void printVector(vector<int> &v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	vector<int>v1;
//	for(int i=0;i<10;i++){
//		v1.push_back(i);
//	}
//	printVector(v1);
//	//1)赋值 = 
//	vector<int> v2 = v1;
//	printVector(v2);
//	//2)assign
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());//end的索引取不到[begin,end)
//	printVector(v3);
//	//3)n个elem
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 3)vector容器-容量和大小
//函数原型：
//empty(); //判断容器是否为空
//capacity(); //容器的容量
//size(); //返回容器中元素的个数
//resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
////如果容器变短，则末尾超出容器长度的元素被删除。
//resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
////如果容器变短，则末尾超出容器长度的元素被删除

//void printVector(vector<int> &v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printVector(v1);
//	if (v1.empty()) {
//		cout << "v1为空";
//	} // 为true则为空
//	else
//	{
//		cout << "v1容量为：" << v1.capacity() << endl;
//		cout << "v1的大小" << v1.size() << endl;
//	}
//	//重新指定大小
//	v1.resize(15,10);//多出的部分可以用elem来填充，默认为0
//	cout << "v1容量为：" << v1.capacity() << endl;
//	cout << "v1的大小" << v1.size() << endl;
//	printVector(v1);
//	v1.resize(5, 10);//超出的会被删除
//	cout << "v1容量为：" << v1.capacity() << endl;
//	cout << "v1的大小" << v1.size() << endl;
//	printVector(v1);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 4)vector的插入和删除
//函数原型：
//push_back(ele); //尾部插入元素ele
//pop_back(); //删除最后一个元素
//insert(const_iterator pos, ele); //迭代器指向位置pos插入元素ele
//insert(const_iterator pos, int count, ele); //迭代器指向位置pos插入count个元素ele
//erase(const_iterator pos); //删除迭代器指向的元素
//erase(const_iterator start, const_iterator end); //删除迭代器从start到end之间的元素
//clear(); //删除容器中所有元素

//void printVector(vector<int> &v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	vector<int>v1;
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//	//插入第一个参数是迭代器
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//	v1.insert(v1.begin(),2, 100);//2->N
//	printVector(v1);
//	//删除
//	v1.erase(v1.begin());
//	printVector(v1);
//	v1.erase(v1.begin(), v1.end()-1);
//	printVector(v1);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 5)vector数据存取
//函数原型：
//at(int idx); //返回索引idx所指的数据
//operator[]; //返回索引idx所指的数据
//front(); //返回容器中第一个数据元素
//back(); //返回容器中最后一个数据元素

//void test01() {
//	vector<int>v1;
//	for (int i = 0; i < 10; i ++ ){
//		v1.push_back(i);
//	}
//	for (int i = 0; i <v1.size(); i++) {
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < v1.size(); i++) {
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//	//获取第一个元素
//	cout<<"最后一个元素为"<<v1.front()<<endl;
//	//获取最后一个元素
//	cout << "最后一个元素为" << v1.back() << endl;
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 6）vector容器互换
////1)基本使用
//void printVector(vector<int> &v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	vector<int> v1;
//	for (int i = 0; i < 10; i ++ ){
//		v1.push_back(i);
//	}
//	printVector(v1);
//	vector <int> v2;
//	for (int i = 10; i > 0; i--) {
//		v2.push_back(i);
//	}
//	printVector(v2);
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
////2)实际用途-使用swap可以收缩内存空间
//void test02() {
//	vector<int> v1;
//	for (int i = 0; i < 10000; i++) {
//		v1.push_back(i);
//	}
//	cout << "容量：" << v1.capacity() << "\t" << "大小:" << v1.size() << endl;
//	v1.resize(3);
//	cout << "容量：" << v1.capacity() << "\t" << "大小:" << v1.size() << endl;
//	vector<int>(v1).swap(v1);//创建了一个匿名对象，将其存入根据大小分配的匿名对象
//	cout << "容量：" << v1.capacity() << "\t" << "大小:" << v1.size() << endl;
//}
//int main(){
//	//test01();
//	test02();
//}
#pragma endregion

#pragma region 7)vector预留空间
//功能描述：
//减少vector在动态扩展容量时的扩展次数
//函数原型：
//reserve(int len); //容器预留len个元素长度，预留位置不初始化，元素不可访问

//vector容器 预留空间
void test01() {
	vector<int>v;
	int* p = NULL;
	int num = 0;//统计开辟次数
	cout << v.capacity()<<endl;
	for (int i = 0; i < 10000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}
	cout << "num=" << num << endl;
	
}
int main() {
	test01();
}
#pragma endregion
