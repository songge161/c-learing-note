#pragma once
#include <iostream>
using namespace std;
#include <string>
template <class T>
class MyArray {
public:
	MyArray(int capacity) {//����,����ʼ��
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	//�������죨���������
	MyArray(const MyArray& arr) {
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];//���
		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operate = ��ֹǳ��������
	MyArray& operator= (const MyArray& arr){
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}
	//ͨ���±��������Ԫ��
	T& operator[](int index)
	{
		return this->pAddress[index];
	}
	//β�巨
	template <class T>
	void Push_Back(const T& val) {
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size) return;
		this->pAddress[this->m_Size] = val;//������ĩβ��������
		this->m_Size++;//���������С
	}
	void Pop_Back() {
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		if (this->Size == 0) return;
		this->m_Size--;
	}
	//������������
	int getCapacity() {
		return this->m_Capacity;
	}
	//���������С
	int getSize() {
		return this->m_Size;
	}
	//����(��ɺ�����ͷŶ���)
	~MyArray() {
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	T* pAddress;//ָ��ָ��������ٵ���ʵ����
	int m_Capacity;
	int m_Size;
};