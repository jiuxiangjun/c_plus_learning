#include<iostream>
using namespace std;

//全局变量
//int c = 10;

//const修饰的全局变量:全局常量
//const int d = 10;


//1.代码区：存放函数体的二进制代码，由操作系统进行管理
// 程序运行前的生成的.exe可执行程序，存放的机器指令
// 特点：共享：对于频繁被执行程序，只需要内存中有一份代码即可
//       只读：防止意外修改
 

// 2.全局区：存放全局变量，静态变量和常量(字符串和其他常量const+全局变量=全局常量)
// 程序运行前生成的，该区域的数据在程序结束后由操作系统释放



//int* func()//形参也放栈区
//{
//	int g = 10;//局部变量存放在栈区，栈区的数据在函数执行完后自动释放
//	return &g;//返回局部变量的地址
//}

//int* func1()//
//{
//	//指针是一个局部变量放在栈区，指针保存的数据放在堆区
//	int *p=new int(10);//new开辟堆区，new返回的是该数据类型的指针，初始化10的值
//	return p;//
//}
//
//void test_01()
//{
//	int* p = func1();
//	cout << *p << endl;
//
//
//	delete p;
//	//cout << *p << endl;//由程序员管理释放
//}
//
////创建10整型数据的数组，在堆区
//void test02() 
//{
//	int* arr=new int[10];//10代表数组有十个元素
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//释放数组,加【】
//	delete[]arr;
//
//
//}


//int main()
//{
//	//普通局部变量
//	/*int a = 10;*/
//	//静态变量
//	/*static int d = 10;*/
//
//	//常量
//	//字符串
//	//const修饰的变量:const修饰的全局变量
//
//	//const修饰的局部变量不在全局区
//	/*const int f = 10;*/
//
//	//3.栈区：由编译器自动分配释放，存放函数的参数值，局部变量等,注意：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
//
//	//int* p = func();
//	//cout << *p << endl;
//	//cout << *p << endl;
//	//cout << *p << endl;//64位可以保留
//
//
//
//	//4.堆区，由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
//
//	/*int* p = func1();
//	cout << *p << endl;*/
//
//
//	//5 new开辟，delete释放
//	
//
//	test02();
//
//
//	return 0;
//}







