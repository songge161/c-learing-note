#include<iostream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
//����list����һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ������Ԫ�ص��߼�˳����ͨ�������е�ָ������ʵ�ֵ�
//�������ɣ�������һϵ�н�����
//������ɣ�һ���Ǵ洢����Ԫ�ص���������һ���Ǵ洢��һ������ַ��ָ����
//STL�е�������һ��˫��ѭ������
//��������Ĵ洢��ʽ�������������ڴ�ռ䣬�������list�еĵ�����ֻ֧��ǰ�ƺͺ��ƣ�����˫�������
//list���ŵ㣺
//���ö�̬�洢���䣬��������ڴ��˷Ѻ����
//����ִ�в����ɾ������ʮ�ַ��㣬�޸�ָ�뼴�ɣ�����Ҫ�ƶ�����Ԫ��
//list��ȱ�㣺
//���������ǿռ�(ָ����) �� ʱ�䣨����������ķѽϴ�
//List��һ����Ҫ�����ʣ����������ɾ���������������ԭ��list��������ʧЧ������vector�ǲ������ġ�


void printList(const list<int>&l){
	for (list<int>::const_iterator it=l.begin(); it != l.end(); it++) {
		cout << *(it) << " ";
	}
	cout << endl;
}


#pragma region 1)list���캯��
//����ԭ�ͣ�
//list<T> lst; //list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
//list(beg, end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
//list(n, elem); //���캯����n��elem����������
//list(const list& lst); //�������캯��

//void printList(const list<int>&l){
//	for (list<int>::const_iterator it=l.begin(); it != l.end(); it++) {
//		cout << *(it) << " ";
//	}
//	cout << endl;
//}
//void test01(){
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	//��������
//	printList(l1);
//	list<int>l2(l1.begin(), l1.end());
//	printList(l2);
//	list<int>l3(l2);
//	printList(l3);
//	list<int>l4(10, 1000);
//	printList(l4);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 2)list��ֵ�ͽ���
//����ԭ�ͣ�
//assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
//assign(n, elem); //��n��elem������ֵ������
//list& operator=(const list& lst); //���صȺŲ�����
//swap(lst); //��lst�뱾���Ԫ�ػ�����


//void test01() {
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	printList(l1);
//	list<int>l2;
//	l2 = l1;//=��ֵ
//	printList(l2);
//	list<int>l3;
//	l3.assign(l2.begin(), l2.end());
//	printList(l3);
//	list<int>l4;
//	l4.assign(10, 100);
//	printList(l4);
//
//}
//void test02() {
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	list <int>l2;
//	l2.assign(10, 100);
//	cout<<"����ǰl1-l2:"<<endl;
//	printList(l1);
//	printList(l2);
//	l1.swap(l2);
//	cout << "������l1-l2:"<<endl;
//	printList(l1);
//	printList(l2);
//}
//int main() {
//	test02();
//}
#pragma endregion

#pragma region 3)list�Ĵ�С����
//����ԭ�ͣ�
//size(); //����������Ԫ�صĸ���
//empty(); //�ж������Ƿ�Ϊ��
//resize(num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//resize(num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

//void test01() {
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	printList(l1);
//	if (l1.empty()) {
//		cout << "l1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "l1��Ϊ��" << endl;
//		cout << "l1�ĸ���" << l1.size() << endl;
//
//	}
//	//����ָ����С
//	l1.resize(5,1);
//	printList(l1);
//	l1.resize(3);
//	printList(l1);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 4)list�Ĳ����ɾ��
//����ԭ�ͣ�
//push_back(elem);//������β������һ��Ԫ��
//pop_back();//ɾ�����������һ��Ԫ��
//push_front(elem);//��������ͷ����һ��Ԫ��
//pop_front();//��������ͷ�Ƴ���һ��Ԫ��
//insert(pos, elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
//insert(pos, n, elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
//insert(pos, beg, end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//clear();//�Ƴ���������������
//erase(beg, end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�

//void test01() {
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//	printList(L);
//	//ɾ��
//	L.pop_front();
//	L.pop_back();
//	//����
//	list<int>::iterator it = L.begin();
//	L.insert(it++, 1000);
//	printList(L);
//	//ɾ��
//	it = L.begin();
//	L.erase(++it);
//	printList(L);
//	L.push_back(1000);
//	L.remove(1000);
//	printList(L);
//	L.clear();
//	printList(L);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 5��list���ݴ�ȡ
//����ԭ�ͣ�
//front(); //���ص�һ��Ԫ�ء�
//back(); //�������һ��Ԫ�ء�


//void test01() {
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	//list�����в�����ͨ��[]����at��ʽ��������-listΪ�������������ռ�洢����Ҫ��������
//	printList(l1);
//	cout << "��һ��Ԫ��" << l1.front() << endl;
//	cout << "���һ��Ԫ��" << l1.back() << endl;
//
//	//��֤�������ǲ�֧��������ʵ�
//	list<int>::iterator it = l1.begin();
//	it++;
//	it--;
//	//it = it + 1; //������֧���������
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 6)list��ת������
//����ԭ�ͣ�
//reverse(); //��ת����
//sort(); //��������

//void test01() {
//	//��ת
//	list<int>l1;
//	l1.push_back(1);
//	l1.push_back(2);
//	l1.push_back(3);
//	l1.push_back(4);
//	l1.push_back(5);
//	printList(l1);
//	l1.reverse();
//	printList(l1);
//}
//bool myCompare(int v1,int v2) {
//	//���� ���õ�һ�������ڶ�����
//	return v1 > v2;
//}
////����
//void test02() {
//	list<int>l1;
//	l1.push_back(1);
//	l1.push_back(4);
//	l1.push_back(3);
//	l1.push_back(2);
//	l1.push_back(5);
//	list<int>l2(l1);
//	printList(l1);
//	//�ڲ��������㷨
//	l1.sort();
//	printList(l1);
//	//sort(l2.begin(), l2.end());//��֧���ⲿ����������㷨
//	//printList(l2);
//
//	//����
//	l1.sort(myCompare);
//	printList(l1);
//}
//int main() {
//	test02();
//}
#pragma endregion

#pragma region 7)list������
//������������Person�Զ����������ͽ�������Person�����������������䡢���
//������򣺰�����������������������ͬ������߽��н���

class Person {
public:
	Person(string name,int age,int height) {
		this->m_Age = age;
		this->m_Height = height;
		this->m_Name = name;
	}
	int m_Age;
	int m_Height;
	string m_Name;
};
void printPList(list<Person>&L) {
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
		cout << (*it).m_Name << "����" << (*it).m_Age << " ���" << it->m_Height<<endl;
	}
}
//ָ���������
bool comparePerson(Person &p1,Person&p2) {
	//���������������
	if (p1.m_Age == p2.m_Age) {
		return p1.m_Height > p2.m_Height;
	}
	return p1.m_Age < p2.m_Age;
}
void test01() {
	list<Person> L;
	Person p1("����", 35, 175);
	Person p2("�ܲ�", 45, 180);
	Person p3("��Ȩ", 40, 170);
	Person p4("����", 25, 190);
	Person p5("�ŷ�", 35, 160);
	Person p6("����", 35, 200);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	printPList(L);
	//����
	cout << "�����������ڰ���ͬ��������߽��������" << endl;
	L.sort(comparePerson);
	printPList(L);
}
int main() {
	test01();
}
#pragma endregion
