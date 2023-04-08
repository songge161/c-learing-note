#include <iostream>
#include <string>
using namespace std;
//string本质是一个类，类的内部封装了char*
#pragma region 1)string容器-构造函数
//void test01() {
//	string s1;//默认构造
//	s1 = "123";
//	cout << "s1=" << s1 << endl;
//	const char* str= "hello world";
//	string s2(str);//指针拷贝构造
//	cout << "s2=" << s2 << endl;
//	string s3(s2);//拷贝
//	cout << "s3=" << s3 << endl;
//	string s4(10, 'a');//(N,char)复制n次该字符
//	cout << "s4=" << s4 << endl;
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 2)string的赋值操作
//赋值的函数原型：
//string& operator=(const char* s); //char*类型字符串 赋值给当前的字符串
//string& operator=(const string& s); //把字符串s赋给当前的字符串
//string& operator=(char c); //字符赋值给当前的字符串
//string& assign(const char* s); //把字符串s赋给当前的字符串
//string& assign(const char* s, int n); //把字符串s的前n个字符赋给当前的字符串
//string& assign(const string& s); //把字符串s赋给当前字符串
//string& assign(int n, char c); //用n个字符c赋给当前字符串
//void test01() {
//	string str1;
//	str1 = "hello world";
//	cout << "str1=" << str1 << endl;
//
//	string str2 = str1;
//	cout << "str2=" << str2 << endl;
//	
//	string str3;
//	str3 = 'a';
//	cout << "str3=" << str3 << endl;
//
//	string str4;
//	str4.assign("helle world");
//	cout << "str4=" << str4 << endl;
//
//	string str5;
//	str5.assign("hello world", 5);
//	cout << "str5=" << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6=" << str6 << endl;
//
//	string str7;
//	str7.assign(10, 'w');
//	cout << "str7=" << str7 << endl;
//
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 3)string容器-字符串拼接
//函数原型：
//string& operator+=(const char* str); //重载+=操作符
//string& operator+=(const char c); //重载+=操作符
//string& operator+=(const string& str); //重载+=操作符
//string& append(const char* s); //把字符串s连接到当前字符串结尾
//string& append(const char* s, int n); //把字符串s的前n个字符连接到当前字符串结尾
//string& append(const string& s); //同operator+=(const string& str)
//string& append(const string& s, int pos, int n); //字符串s中从pos开始的n个字符连接到字符串结尾

//void test01() {
//	string str1 = "我";
//	str1 += "爱玩";
//	cout << "str1=" << str1 << endl;
//	
//	string str2 = "游戏";
//	str1 += str2;
//	cout << "str1=" << str1 << endl;
//
//	string str3 = "I";
//	str3.append(" love ");
//	cout << "str3=" << str3<< endl;
//
//	str3.append("game abcde", 4);
//	cout << "str3=" << str3 << endl;
//
//	str3.append(str2);
//	cout << "str3=" << str3 << endl;
//	
//	string str4;
//	str4.append(str3, 0, 3);//0->位置，3->个数
//	cout << "str4" << str4<<endl;
//
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 4)string容器-字符串的查找和替换
//函数原型：
//int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
//int find(const char* s, int pos = 0) const; //查找s第一次出现位置,从pos开始查找
//int find(const char* s, int pos, int n) const; //从pos位置查找s的前n个字符第一次位置
//int find(const char c, int pos = 0) const; //查找字符c第一次出现位置
//int rfind(const string& str, int pos = npos) const; //查找str最后一次位置,从pos开始查找
//int rfind(const char* s, int pos = npos) const; //查找s最后一次出现位置,从pos开始查找
//int rfind(const char* s, int pos, int n) const; //从pos查找s的前n个字符最后一次位置
//int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
//string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
//string& replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s
////1查找
//void test01() {
//	string str1 = "abcdefg";
//	int pos = str1.find("de");
//	cout << "pos:" << pos << endl;//找到则返回第一个的地址索引值，未找到则返回-1
//	//rfind是从右往左，find是从左往右->识别方向仍然为左到右
//}
////2替换
//void test02() {
//	string str1 = "abcdefg";
//	str1.replace(1, 3, "11哈哈11");//整体替换
//	cout <<"str1="<< str1 << endl;
//}
//int main() {
//	test01();
//	test02();
//}
#pragma endregion

#pragma region 5)string容器字符串比较
//void test01() {
//	string str1 = "哎aello";
//	string str2 = "爱aello";
//	// == 返回0 ，>=返回 1,<=返回-1
//	cout << "result:" << str1.compare(str2)<<endl;
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 6)string容器-字符存取
//void test01() {
//	string str = "hello";
//	//1)通过[]访问单个字符
//	for (int i = 0; i < str.length(); i++) {
//		cout << str[i];
//	}
//	cout << endl;
//	//2)通过at方式访问单个字符
//	for (int i = 0; i < str.length(); i++) {
//		cout << str.at(i);
//	}
//	cout << endl;
//	//修改单个字符
//	str[0] = 'x';
//	str.at(1) = 'x';
//	cout << str;
//	
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 7)string容器-插入和删除
//函数原型：
//string& insert(int pos, const char* s); //插入字符串
//string& insert(int pos, const string& str); //插入字符串
//string& insert(int pos, int n, char c); //在指定位置插入n个字符c
//string& erase(int pos, int n = npos); //删除从Pos开始的n个字符
//void test01() {
//	string str = "hello";
//	//插入
//	str.insert(1, "111");//在n号位插入
//	cout << str << endl;
//	//删除
//	str.erase(1, 3);//pos,N
//	cout << str << endl;
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 8)string容器 -子串
void test01() {
	string str = "abcdef";
	string subStr = str.substr(1, 3);//pos ,N
	cout << "str=" << subStr << endl;
}
//实用操作
//特定值截取
void test02() {
	string email = "hello@sina.com";
	int pos = email.find("@");
	string name = email.substr(0, pos );
	cout << name << endl;
}
int main() {
	test01();
	test02();
}
#pragma endregion
