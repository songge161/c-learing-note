#include <iostream>
#include <string>
using namespace std;
//string������һ���࣬����ڲ���װ��char*
#pragma region 1)string����-���캯��
//void test01() {
//	string s1;//Ĭ�Ϲ���
//	s1 = "123";
//	cout << "s1=" << s1 << endl;
//	const char* str= "hello world";
//	string s2(str);//ָ�뿽������
//	cout << "s2=" << s2 << endl;
//	string s3(s2);//����
//	cout << "s3=" << s3 << endl;
//	string s4(10, 'a');//(N,char)����n�θ��ַ�
//	cout << "s4=" << s4 << endl;
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 2)string�ĸ�ֵ����
//��ֵ�ĺ���ԭ�ͣ�
//string& operator=(const char* s); //char*�����ַ��� ��ֵ����ǰ���ַ���
//string& operator=(const string& s); //���ַ���s������ǰ���ַ���
//string& operator=(char c); //�ַ���ֵ����ǰ���ַ���
//string& assign(const char* s); //���ַ���s������ǰ���ַ���
//string& assign(const char* s, int n); //���ַ���s��ǰn���ַ�������ǰ���ַ���
//string& assign(const string& s); //���ַ���s������ǰ�ַ���
//string& assign(int n, char c); //��n���ַ�c������ǰ�ַ���
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

#pragma region 3)string����-�ַ���ƴ��
//����ԭ�ͣ�
//string& operator+=(const char* str); //����+=������
//string& operator+=(const char c); //����+=������
//string& operator+=(const string& str); //����+=������
//string& append(const char* s); //���ַ���s���ӵ���ǰ�ַ�����β
//string& append(const char* s, int n); //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//string& append(const string& s); //ͬoperator+=(const string& str)
//string& append(const string& s, int pos, int n); //�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β

//void test01() {
//	string str1 = "��";
//	str1 += "����";
//	cout << "str1=" << str1 << endl;
//	
//	string str2 = "��Ϸ";
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
//	str4.append(str3, 0, 3);//0->λ�ã�3->����
//	cout << "str4" << str4<<endl;
//
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 4)string����-�ַ����Ĳ��Һ��滻
//����ԭ�ͣ�
//int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
//int find(const char* s, int pos = 0) const; //����s��һ�γ���λ��,��pos��ʼ����
//int find(const char* s, int pos, int n) const; //��posλ�ò���s��ǰn���ַ���һ��λ��
//int find(const char c, int pos = 0) const; //�����ַ�c��һ�γ���λ��
//int rfind(const string& str, int pos = npos) const; //����str���һ��λ��,��pos��ʼ����
//int rfind(const char* s, int pos = npos) const; //����s���һ�γ���λ��,��pos��ʼ����
//int rfind(const char* s, int pos, int n) const; //��pos����s��ǰn���ַ����һ��λ��
//int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
//string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
//string& replace(int pos, int n, const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
////1����
//void test01() {
//	string str1 = "abcdefg";
//	int pos = str1.find("de");
//	cout << "pos:" << pos << endl;//�ҵ��򷵻ص�һ���ĵ�ַ����ֵ��δ�ҵ��򷵻�-1
//	//rfind�Ǵ�������find�Ǵ�������->ʶ������ȻΪ����
//}
////2�滻
//void test02() {
//	string str1 = "abcdefg";
//	str1.replace(1, 3, "11����11");//�����滻
//	cout <<"str1="<< str1 << endl;
//}
//int main() {
//	test01();
//	test02();
//}
#pragma endregion

#pragma region 5)string�����ַ����Ƚ�
//void test01() {
//	string str1 = "��aello";
//	string str2 = "��aello";
//	// == ����0 ��>=���� 1,<=����-1
//	cout << "result:" << str1.compare(str2)<<endl;
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 6)string����-�ַ���ȡ
//void test01() {
//	string str = "hello";
//	//1)ͨ��[]���ʵ����ַ�
//	for (int i = 0; i < str.length(); i++) {
//		cout << str[i];
//	}
//	cout << endl;
//	//2)ͨ��at��ʽ���ʵ����ַ�
//	for (int i = 0; i < str.length(); i++) {
//		cout << str.at(i);
//	}
//	cout << endl;
//	//�޸ĵ����ַ�
//	str[0] = 'x';
//	str.at(1) = 'x';
//	cout << str;
//	
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 7)string����-�����ɾ��
//����ԭ�ͣ�
//string& insert(int pos, const char* s); //�����ַ���
//string& insert(int pos, const string& str); //�����ַ���
//string& insert(int pos, int n, char c); //��ָ��λ�ò���n���ַ�c
//string& erase(int pos, int n = npos); //ɾ����Pos��ʼ��n���ַ�
//void test01() {
//	string str = "hello";
//	//����
//	str.insert(1, "111");//��n��λ����
//	cout << str << endl;
//	//ɾ��
//	str.erase(1, 3);//pos,N
//	cout << str << endl;
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 8)string���� -�Ӵ�
void test01() {
	string str = "abcdef";
	string subStr = str.substr(1, 3);//pos ,N
	cout << "str=" << subStr << endl;
}
//ʵ�ò���
//�ض�ֵ��ȡ
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
