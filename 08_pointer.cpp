#include<iostream>
using namespace std;

//void swap(int* p1, int* p2) {
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//
//}
//
//int main()
//{
//	////指针用来储存地址编号，访问地址
//	////1.定义指针:数据类型*指针变量名
//	//int a = 10;
//	//int* p;
//	////让指针记录a变量的地址
//	//p = &a;
//	//cout << p << endl;
//
//	////2.使用指针
//	////可以通过解引用的方式来找到指针的内存：*p代表解引用，找到了p指向的内存的数据
//	//cout << *p << endl;
//	//*p = 100;//修改数据
//	//cout << a << endl;
//
//	////3.指针所占的空间64位8个字节
//	//int* n = &a;
//	//cout << sizeof(int*) << endl;
//	//cout << sizeof(n) << endl;
//	//cout << sizeof(double*) << endl;
//
//
//
//	////4.空指针:指针变量指向内存中编号为0的空间
//	////用途：初始化指针变量，空指针的内存不可访问
//
//	//int* m = NULL;
//	////cout << *m << endl;//0-255编号是系统占用的，不可访问，不可改变值
//	//cout<<m<<endl;
//	
//
//
//	//5.野指针：指向非法的内存空间
//	//int* q = (int*)0x1100;//非法，因为是没有申请操纵的内存
//	//cout << *q << endl;
//
//
//	//6.const修饰指针
//
//	//6.1cosnt修饰指针：常量指针：指针的指向可以修改，指针指向的值不能修改，地址能改，但是内容不能改
//	/*int a=10;
//	int b = 10;*/
//	//const int* p = &a;//*p=20,错误
//	//p = &b;//正确
//	
//
//
//	//6.2const修饰常量：指针常量：指针的指向不可以改，指针指向的值可以改，地址不能改，内容可以改
//
//	//int* const p2 = &a;
//	//*p2 = 100;
//	//p2=&b//错误
//	
//	//6.3const既修饰常量又修饰指针：都不能改
//	//const int* const p3 = &a;
//	//*p3 = 100;//错误
//	//p3=&b//错误
//
//
//
//	//7指针与数组
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr;
//	//cout << *p << endl;
//	//p++;//让指针偏移4个字节
//	//cout << *p << endl;//访问第二个元素
//	////7.1利用指针遍历数组
//	//int* p2 = arr;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << *p2 << endl;
//	//	p2++;
//	//}
//	
//
//
//	//8指针和函数：地址传递
//	int a = 10;
//	int b = 20;
//
//	swap(&a, &b);//可以修饰实参,传的是地址，改变了实参的数据
//	cout << a << endl;
//	cout << b << endl;
//
//
//	return 0;
//}