#include <iostream>
#include <vector>
using namespace std;
#include <string>
//���ܣ�vector���ݽṹ������ǳ����ƣ�Ҳ��Ϊ��������
//vector����ͨ�������𣺲�֮ͬ�����������Ǿ�̬�ռ䣬��vector���Զ�̬��չ
//��̬��չ����������ԭ�ռ�֮�������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ����¿ռ䣬�ͷ�ԭ�ռ�
 
#pragma region 1)vector���캯��
//����ԭ�ͣ�
//vector<T> v; //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//vector(v.begin(), v.end()); //��v[begin(), end())�����е�Ԫ�ؿ���������
//vector(n, elem); //���캯����n��elem����������
//vector(const vector& vec); //�������캯����
//void printVector(vector<int> &v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	vector<int>v1;//Ĭ�Ϲ���
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printVector(v1);
//	//ͨ������ķ�ʽ���й���
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//	//n��element����
//	vector<int>v3(10, 100);
//	printVector(v3);
//	//��������
//	vector<int>v4(v3);
//	printVector(v4);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 2)vector����-��ֵ����
//����ԭ�ͣ�
//vector& operator=(const vector& vec); //���صȺŲ�����
//assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
//assign(n, elem); //��n��elem������ֵ������

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
//	//1)��ֵ = 
//	vector<int> v2 = v1;
//	printVector(v2);
//	//2)assign
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());//end������ȡ����[begin,end)
//	printVector(v3);
//	//3)n��elem
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 3)vector����-�����ʹ�С
//����ԭ�ͣ�
//empty(); //�ж������Ƿ�Ϊ��
//capacity(); //����������
//size(); //����������Ԫ�صĸ���
//resize(int num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//resize(int num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
////���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

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
//		cout << "v1Ϊ��";
//	} // Ϊtrue��Ϊ��
//	else
//	{
//		cout << "v1����Ϊ��" << v1.capacity() << endl;
//		cout << "v1�Ĵ�С" << v1.size() << endl;
//	}
//	//����ָ����С
//	v1.resize(15,10);//����Ĳ��ֿ�����elem����䣬Ĭ��Ϊ0
//	cout << "v1����Ϊ��" << v1.capacity() << endl;
//	cout << "v1�Ĵ�С" << v1.size() << endl;
//	printVector(v1);
//	v1.resize(5, 10);//�����Ļᱻɾ��
//	cout << "v1����Ϊ��" << v1.capacity() << endl;
//	cout << "v1�Ĵ�С" << v1.size() << endl;
//	printVector(v1);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 4)vector�Ĳ����ɾ��
//����ԭ�ͣ�
//push_back(ele); //β������Ԫ��ele
//pop_back(); //ɾ�����һ��Ԫ��
//insert(const_iterator pos, ele); //������ָ��λ��pos����Ԫ��ele
//insert(const_iterator pos, int count, ele); //������ָ��λ��pos����count��Ԫ��ele
//erase(const_iterator pos); //ɾ��������ָ���Ԫ��
//erase(const_iterator start, const_iterator end); //ɾ����������start��end֮���Ԫ��
//clear(); //ɾ������������Ԫ��

//void printVector(vector<int> &v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	vector<int>v1;
//	//β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//	//βɾ
//	v1.pop_back();
//	printVector(v1);
//	//�����һ�������ǵ�����
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//	v1.insert(v1.begin(),2, 100);//2->N
//	printVector(v1);
//	//ɾ��
//	v1.erase(v1.begin());
//	printVector(v1);
//	v1.erase(v1.begin(), v1.end()-1);
//	printVector(v1);
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 5)vector���ݴ�ȡ
//����ԭ�ͣ�
//at(int idx); //��������idx��ָ������
//operator[]; //��������idx��ָ������
//front(); //���������е�һ������Ԫ��
//back(); //�������������һ������Ԫ��

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
//	//��ȡ��һ��Ԫ��
//	cout<<"���һ��Ԫ��Ϊ"<<v1.front()<<endl;
//	//��ȡ���һ��Ԫ��
//	cout << "���һ��Ԫ��Ϊ" << v1.back() << endl;
//}
//int main() {
//	test01();
//}
#pragma endregion

#pragma region 6��vector��������
////1)����ʹ��
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
////2)ʵ����;-ʹ��swap���������ڴ�ռ�
//void test02() {
//	vector<int> v1;
//	for (int i = 0; i < 10000; i++) {
//		v1.push_back(i);
//	}
//	cout << "������" << v1.capacity() << "\t" << "��С:" << v1.size() << endl;
//	v1.resize(3);
//	cout << "������" << v1.capacity() << "\t" << "��С:" << v1.size() << endl;
//	vector<int>(v1).swap(v1);//������һ���������󣬽��������ݴ�С�������������
//	cout << "������" << v1.capacity() << "\t" << "��С:" << v1.size() << endl;
//}
//int main(){
//	//test01();
//	test02();
//}
#pragma endregion

#pragma region 7)vectorԤ���ռ�
//����������
//����vector�ڶ�̬��չ����ʱ����չ����
//����ԭ�ͣ�
//reserve(int len); //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

//vector���� Ԥ���ռ�
void test01() {
	vector<int>v;
	int* p = NULL;
	int num = 0;//ͳ�ƿ��ٴ���
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
