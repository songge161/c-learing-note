#include <iostream>
using namespace std;
//4:
//交换值
void swap(int* a,int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main() {
#pragma region 1.指针基础
	////1定义指针
	//int a = 10;
	////定义指针语法 数据类型 * 指针变量名
	//int* p;
	////让指针记录变量a的地址
	////对于指针p来说，*p :p地址的值所对应地址的值【专业的来说就是通过解引用的方式来找到指针指向内存的值】，&p：p的地址，p：p的值
	//p = &a;//将a地址值赋给p
	//cout << &a << "=&p" << &p << "-*p" << *p << "-p" << p << endl;
	////改变a的值
	//a = 12;
	//cout << *p << endl;//12
	////指针的内存占4个字节（32）/8个字节（64）
	//cout << sizeof(p) << endl;
	//cout << sizeof(char*) << endl;
	//cout << sizeof(double*) << endl;
#pragma endregion

#pragma region 2.空指针，野指针,const修饰指针
	//空指针 指针变量指向内存中编号为零的空间-初始化指针，但无法访问
	//初始化指针
		//int* p = NULL;
	//访问空指针
		//*p = 100;//不可访问（0~255是系统占用的）
		//system("pause");
	//野指针：指针变量指向非法的内存空间
		//int* p = (int*)0x1100;//让指针指向0x1100，地址需要*int类型，但是访问仍会出错
		//cout << *p << endl;
	//const修饰指针-1）常量指针-2）指针常量-3）既修饰指针也修饰常量
	//1）常量指针
		//int a = 10;
		//int b = 10;
	//注意不同的定义
		//const int*  p = &a;//常量指针，指针的指向可以修改，但指向的值不可更改 ep:*p=20(错误=指向的值不可更改)，p=&b(正确=指针的指向可以修改)
	//*p = 20错误 ===报错原因常量左值不能运算
		//int* const p2 = &a;//指针常量，指针的指向不可更改，但指向的值可以修改 恰和↑例子相反
	//p2 = &b错误
		//const int* const p3 = &a;//指针的指向和指向的值都不可更改
		//*p3 = 20;
		//p3 = &b;
#pragma endregion

#pragma region 3.指针和数组
	//利用指针访问数组的元素
		//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		//int* p=&arr[0];
		//for(int i=0;i<10;i++) p++;
		//cout << *p;
#pragma endregion

#pragma region 4.指针和函数
	//值传递
		//int a = 10, b = 20;
		//swap(&a, &b);
		//cout << "a=" << a << "b=" << b;
	//地址传递
	//如果是地址传递可以修饰实参↑，值传递不行↓
	//swap(a,b)没用指针
	//实例分析：封装一个函数，利用冒泡排序,实现对整型数组的升序排列
	int arr[7] = { 2,1,5,3,4 ,7,6};
	for (int i = 0; i < 7; i++) {
		for (int j = i; j< 7; j++) {
			if (arr[j-1] > arr[j]) {
				swap(arr[j-1], arr[j]);
			}
		}
	}
	for (int i = 0; i < 7; i++) cout << arr[i];
#pragma endregion


}