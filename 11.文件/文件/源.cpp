#include <iostream>
#include <fstream>//文件操作的读写操作
#include <istream>//读操作
#include <ostream>//写操作
#include <string>
using namespace std;
//文件类型-文本文件（用ASCII码存储）、二进制文件（二进制存储）
//文件操作：
#pragma region 1)写文件
//文件的打开方式1）ios::in 为了读文件打开 2）ios::out 为了写文件打开 3）ios::ate 初始位置文件尾 4）ios::app追加方式写文件
//5）ios::trunc 如果文件存在先删除再创建 6）ios::binary 二进制方式打开
//文件操作符可以配合使用 ep :   ios::binary| ios:: out

//文本文件写文件
	//void test01() {
	//	//1包含头文件
	//	//2创建流对象
	//	ofstream ofs;
	//	//3指定的打开方式
	//	ofs.open("test.txt", ios::out);
	//	//4写内容
	//	ofs << "姓名：张三" << endl << "性别：男" << endl << "年龄18" << endl;
	//	//5关闭文件
	//	ofs.close();
	//}
	//int main() {
	//	test01();
	//}
 #pragma endregion

#pragma region 2)读文件
	//void test01() {
	//	//1包含头文件
	//	//2创建流对象
	//	ifstream ifs;
	//	//3打开文件判断是否打开成功
	//	ifs.open("test.txt", ios::in);
	//	if (!ifs.is_open()) {
	//		cout << "文件打开失败" << endl;
	//		return;
	//	}
	//	//4读取数据
	//	// 第一种
	//	/*	char buf[1024] = { 0 };
	//		while (ifs>>buf)
	//		{
	//			cout << buf << endl;
	//		}*/
	//	//第二种
	//	/*	char buf[1024] = { 0 };
	//		while (ifs.getline(buf,sizeof(buf)))
	//		{
	//			cout << buf << endl;
	//		}*/
	//	//第三种
	//		//string buf;
	//		//while (getline(ifs,buf))//getline(输入流，接收变量)
	//		//{
	//		//	cout << buf << endl;
	//		//}
	//	//第四种
	//	char c;
	//	while ((c=ifs.get())!=EOF)//EOF：文件尾部标志。如果没有读到文件尾
	//	{
	//		cout << c;//由于是char所以不能加入endl
	//	}
	//	//5关闭文件
	//	ifs.close();
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 3)二进制写文件
//以二进制读写操作时，打开方式要指定为ios::binary
//二进制写文件
	//class Person {
	//public:
	//	char m_Name[64]; //不能用string-因为string实际是一个类，会出现乱码
	//		int m_Age;
	//};
	//void test01(){
	//	//1包含头文件
	//	//2创建流对象
	//	ofstream ofs;
	//	//ofstream ofs("person.txt",ios::out||ios::binary)//第二种创建并打开的方式
	//	//3打开文件
	//	ofs.open("person.txt", ios::out | ios::binary);
	//	//4写文件
	//	Person p = { "张三",18 };
	//		ofs.write((const char *)&p,sizeof(Person));//若只有&p只会返回一个Person *，但需要const char *,所以强制转换
	//	//5关闭文件
	//		ofs.close();
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 4)二进制读文件
class Person {
	public:
		char m_Name[64]; //不能用string-因为string实际是一个类，会出现乱码
			int m_Age;
	};
void test01(){
	//1包含头文件

	//2创建流对象
	ifstream ifs;
	//3打开文件，判断文件是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);
	if (!(ifs.is_open())) {
		cout << "打开失败";
		return;
		
	}
	//4读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << p.m_Age << endl << p.m_Name << endl;
	//5关闭文件
	ifs.close();
}
int main() {
	test01();
}
#pragma endregion
