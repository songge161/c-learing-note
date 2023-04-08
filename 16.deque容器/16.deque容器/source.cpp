#include<iostream>
#include <vector>
#include <deque>
#include <string>
#include <ctime>
#include<algorithm>
using namespace std;
//���ܣ�˫�����飬���Զ�ͷ�˽��в���ɾ������
//deque��vector����
//vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ��
//deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻر�vector��
//vector����Ԫ��ʱ���ٶȻ��deque��, ��������ڲ�ʵ���й�
//deque�ڲ�����ԭ��:
//deque�ڲ��и��п�����ά��ÿ�λ������е����ݣ��������д����ʵ����
//�п���ά������ÿ���������ĵ�ַ��ʹ��ʹ��dequeʱ��һƬ�������ڴ�ռ�

//���һЩͨ�õĺ���
void printDeque(const deque<int>&d) {//��Ϊֻ��״̬
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {//ֻ��������
		//*it = 100;//��ʱ����,���ɸ���ֵ
		cout << *(it) << " ";
	}
	cout << endl;
}

#pragma region 1)deque�Ĺ��캯��
//����ԭ�ͣ�
//deque<T> deqT; //Ĭ�Ϲ�����ʽ
//deque(beg, end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
//deque(n, elem); //���캯����n��elem����������
//deque(const deque& deq); //�������캯��


//void test01() {
//	deque<int>d1;
//	for (int i = 0; i < 10; i++) {
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//	deque<int>d3(10, 100);//n��elem
//	printDeque(d3);
//	deque<int>d4(d3);//����
//	printDeque(d4);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 2��deque�ĸ�ֵ����
//����ԭ�ͣ�
//deque& operator=(const deque& deq); //���صȺŲ�����
//assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
//assign(n, elem); //��n��elem������ֵ������

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

#pragma region 3��deque�����Ĵ�С����
//����ԭ�ͣ�
//deque.empty(); //�ж������Ƿ�Ϊ��
//deque.size(); //����������Ԫ�صĸ���
//deque.resize(num); //����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á�
////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//deque.resize(num, elem); //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á�
////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//dequeû�������ĸ���

//void test01() {
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	if (d1.empty() == 1) {
//		cout << "d1Ϊ��" << endl; 
//	}
//	else
//	{
//		cout << "d1��Ϊ��" << endl;
//		cout << "d1�Ĵ�С" << d1.size()<<endl;
//		d1.resize(15,1);//Ĭ��Ϊ0
//		cout << "d1�Ĵ�С" << d1.size() << endl;
//		printDeque(d1);
//		d1.resize(5);
//	}
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 4)deque�����Ĳ����ɾ��
//����ԭ�ͣ�
//���˲��������
//push_back(elem); //������β�����һ������
//push_front(elem); //������ͷ������һ������
//pop_back(); //ɾ���������һ������
//pop_front(); //ɾ��������һ������
//ָ��λ�ò�����
//insert(pos, elem); //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
//insert(pos, n, elem); //��posλ�ò���n��elem���ݣ��޷���ֵ��
//insert(pos, beg, end); //��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//clear(); //�����������������
//erase(beg, end); //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//erase(pos); //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��

////���˲���
//void test01() {
//	deque<int>d1;
//	//β��
//	d1.push_back(10);
//	d1.push_back(20);
//	//ͷ��
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//	//βɾ
//	d1.pop_back();
//	printDeque(d1);
//	//ͷɾ
//	d1.pop_front();
//	printDeque(d1);
//}
////����
//void test02() {
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//	//insert����
//	d1.insert(d1.begin(), 1000);
//	printDeque(d1);
//	d1.insert(d1.begin(), 2,10000);
//	printDeque(d1);
//	deque<int>d2;
//	d2.insert(d2.begin(), d1.begin(), d1.end());
//	printDeque(d2);
//}
////ɾ��
//void test03() {
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);//�ڶ���Ԫ��
//	printDeque(d1);
//	d1.erase(d1.begin(), d1.end());
//	printDeque(d1);
//	d1.clear();//�ȼ�������һ��
//}
//int main() {
//	test01();
//	test02();
//	test03();
//}
#pragma endregion

#pragma region 5��deque�����ݴ�ȡ
//����ԭ�ͣ�
//at(int idx); //��������idx��ָ������
//operator[]; //��������idx��ָ������
//front(); //���������е�һ������Ԫ��
//back(); //�������������һ������Ԫ��

//void test01() {
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	//ͨ��[]��ʽ����Ԫ��
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

#pragma region 6)deque���������
//�㷨��
//sort(iterator beg, iterator end) //��beg��end������Ԫ�ؽ�������

//void test01() {
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//	//vectorͬ��������sort����
//	sort(d.begin(), d.end());//����
//	//sort(d.rbegin(), d.rend());//����
//	printDeque(d);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 7)STL����1
//��������
//��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ���֡�
//ʵ�ֲ���
//1. ��������ѡ�֣��ŵ�vector��
//2. ����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
//3. sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
//4. deque��������һ�飬�ۼ��ܷ�
//5. ��ȡƽ����

class Person {
public:
	Person(string name,int score) {
		this-> m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;//ƽ����
};
void createPerson(vector<Person>&v) {
	for (int i = 0; i < 5; i++) {
		string name = "ѡ��";
		string nameSeed = "ABCDE";
		name+= nameSeed[i];
		int score = 0;
		Person p(name, score);
		v.push_back(p);//��person�������������
	}
	
}
void setScore(vector<Person>&v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		//����ί�ķ�������deque������
		deque<int> d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 41 + 60;  //60~100
			d.push_back(score);
		}
		//ȥ����ߺ����
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			sum += *dit;//�ۼ�	��ί�ķ���
		}
		int avg = sum / d.size();
		//��ƽ���ָ�ֵ��ѡ��
		it->m_Score = avg;
	}
}
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������ " << it->m_Name << " ƽ���֣� " << it->m_Score << endl;
	}
}
int main() {
	//���������
	srand((unsigned int)time(NULL));//ʱ������
	vector<Person> v;//���ѡ������
	createPerson(v);
	//����
	setScore(v);
	showScore(v);
}
#pragma endregion
