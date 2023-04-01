#pragma once
#include <iostream>
using namespace std;
#include <string>
template <class T>
class MyArray {
public:
	MyArray(int capacity) {//容量,并初始化
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}
	//拷贝构造（进行深拷贝）
	MyArray(const MyArray& arr) {
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];//深拷贝
		//将arr中的数据都拷贝过来
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operate = 防止浅拷贝问题
	MyArray& operator= (const MyArray& arr){
		//先判断原来堆区是否有数据，如果有先释放
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}
	//通过下标访问数组元素
	T& operator[](int index)
	{
		return this->pAddress[index];
	}
	//尾插法
	template <class T>
	void Push_Back(const T& val) {
		//判断容量是否等于大小
		if (this->m_Capacity == this->m_Size) return;
		this->pAddress[this->m_Size] = val;//在数组末尾加入数据
		this->m_Size++;//更新数组大小
	}
	void Pop_Back() {
		//让用户访问不到最后一个元素，即为尾删，逻辑删除
		if (this->Size == 0) return;
		this->m_Size--;
	}
	//返回数组容量
	int getCapacity() {
		return this->m_Capacity;
	}
	//返回数组大小
	int getSize() {
		return this->m_Size;
	}
	//析构(完成后进行释放堆区)
	~MyArray() {
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	T* pAddress;//指针指向堆区开辟的真实数组
	int m_Capacity;
	int m_Size;
};