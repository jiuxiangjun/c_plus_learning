#include<iostream>
using namespace std;
#include"max function.h"//包含头文件自定义
//函数

//int max(int a, int b);//声明可以写多次，定义只能写一次




///*1语法：返回值类型  函数名 （参数列表）
//			{
//			 函数体语句
//			   return
//						 }*/
//
//int add(int a, int b)//形参
//{
//	int sum = a + b;
//	return sum;
//}


//如果函数不需要返回值，声明用void

//void swap(int num1, int num2)
//{
//	int temp =  num1;
//	num1 = num2;
//	num2 = temp;
//	cout << num1 << endl;
//	cout << num2 << endl;
//
//}
//int main()
//{
//	
//	//int c=add(3, 4);//实参
//	//cout << c << endl;
//	//int n = 2;
//	//int m = 3;
//	//swap(n, m);//cout后不能跟void类型的函数，因为无返回值，cout 需要返回值
//
//	cout<<max(20, 30);
//	
//
//	return 0;
//}
//2.函数常见样式
//无参无返，无参有返，有参无返，有参有返
//void test_1() {}
//int test_2() { return 1000; }
//void test_3(int a) { cout << a << endl; }
//int test_4(int b) { cout << b << endl; }


//3函数的声明,放前面去

//int max(int a, int b)
//{
//	return a > b ? a : b;
//}

//4分文件编写，
//1.创建后缀名.h的头文件
//2.创建后缀名.cpp的源文件
//3.头文件写函数声明
//4.源文件写函数定义
