#include <iostream>
#include <fstream>//�ļ������Ķ�д����
#include <istream>//������
#include <ostream>//д����
#include <string>
using namespace std;
//�ļ�����-�ı��ļ�����ASCII��洢�����������ļ��������ƴ洢��
//�ļ�������
#pragma region 1)д�ļ�
//�ļ��Ĵ򿪷�ʽ1��ios::in Ϊ�˶��ļ��� 2��ios::out Ϊ��д�ļ��� 3��ios::ate ��ʼλ���ļ�β 4��ios::app׷�ӷ�ʽд�ļ�
//5��ios::trunc ����ļ�������ɾ���ٴ��� 6��ios::binary �����Ʒ�ʽ��
//�ļ��������������ʹ�� ep :   ios::binary| ios:: out

//�ı��ļ�д�ļ�
	//void test01() {
	//	//1����ͷ�ļ�
	//	//2����������
	//	ofstream ofs;
	//	//3ָ���Ĵ򿪷�ʽ
	//	ofs.open("test.txt", ios::out);
	//	//4д����
	//	ofs << "����������" << endl << "�Ա���" << endl << "����18" << endl;
	//	//5�ر��ļ�
	//	ofs.close();
	//}
	//int main() {
	//	test01();
	//}
 #pragma endregion

#pragma region 2)���ļ�
	//void test01() {
	//	//1����ͷ�ļ�
	//	//2����������
	//	ifstream ifs;
	//	//3���ļ��ж��Ƿ�򿪳ɹ�
	//	ifs.open("test.txt", ios::in);
	//	if (!ifs.is_open()) {
	//		cout << "�ļ���ʧ��" << endl;
	//		return;
	//	}
	//	//4��ȡ����
	//	// ��һ��
	//	/*	char buf[1024] = { 0 };
	//		while (ifs>>buf)
	//		{
	//			cout << buf << endl;
	//		}*/
	//	//�ڶ���
	//	/*	char buf[1024] = { 0 };
	//		while (ifs.getline(buf,sizeof(buf)))
	//		{
	//			cout << buf << endl;
	//		}*/
	//	//������
	//		//string buf;
	//		//while (getline(ifs,buf))//getline(�����������ձ���)
	//		//{
	//		//	cout << buf << endl;
	//		//}
	//	//������
	//	char c;
	//	while ((c=ifs.get())!=EOF)//EOF���ļ�β����־�����û�ж����ļ�β
	//	{
	//		cout << c;//������char���Բ��ܼ���endl
	//	}
	//	//5�ر��ļ�
	//	ifs.close();
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 3)������д�ļ�
//�Զ����ƶ�д����ʱ���򿪷�ʽҪָ��Ϊios::binary
//������д�ļ�
	//class Person {
	//public:
	//	char m_Name[64]; //������string-��Ϊstringʵ����һ���࣬���������
	//		int m_Age;
	//};
	//void test01(){
	//	//1����ͷ�ļ�
	//	//2����������
	//	ofstream ofs;
	//	//ofstream ofs("person.txt",ios::out||ios::binary)//�ڶ��ִ������򿪵ķ�ʽ
	//	//3���ļ�
	//	ofs.open("person.txt", ios::out | ios::binary);
	//	//4д�ļ�
	//	Person p = { "����",18 };
	//		ofs.write((const char *)&p,sizeof(Person));//��ֻ��&pֻ�᷵��һ��Person *������Ҫconst char *,����ǿ��ת��
	//	//5�ر��ļ�
	//		ofs.close();
	//}
	//int main() {
	//	test01();
	//}
#pragma endregion

#pragma region 4)�����ƶ��ļ�
class Person {
	public:
		char m_Name[64]; //������string-��Ϊstringʵ����һ���࣬���������
			int m_Age;
	};
void test01(){
	//1����ͷ�ļ�

	//2����������
	ifstream ifs;
	//3���ļ����ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);
	if (!(ifs.is_open())) {
		cout << "��ʧ��";
		return;
		
	}
	//4���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << p.m_Age << endl << p.m_Name << endl;
	//5�ر��ļ�
	ifs.close();
}
int main() {
	test01();
}
#pragma endregion
