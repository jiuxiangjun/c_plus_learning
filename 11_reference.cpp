#include<iostream>
using namespace std;
//1引用 数据类型 &别名 =


//2.1引用传递

//void myswap(int& a, int& b)//别名和原名一样了
//{
//	int temp = a; 
//	a = b;
//	b = temp;
//}

//int& test01()
//{
//	int a = 10;
//	return a;
//}
//int& test02()
//{
//	static int a = 10;//静态变量
//	return a;
//}
//
//
//
//void showvalue(const int& val)
//{
//	//val = 1000;const防止误操作
//	cout << val << endl;
//}

//int main()
//{
//	//int a = 0;
//	//int& b = a;
//	//cout << b << endl;
//
//	//b = 100;//对别名赋值也会改变原值
//
//	//cout << b << endl;
//	//cout << a << endl;
//
//	////注意：引用必须在初始化后
//	////      引用一旦初始化之后就不可以更改
//
//	//int c = 20;
//	////int& b = c;
//	////cout << b << endl;错误的
//
//
//	//b = c;
//	//cout << a << endl;
//	//cout << b << endl;
//	//cout << c << endl;//2个值都改变了
//
//
//
//	//2引用做函数参数
//
//	//2.1利用引用让形参修饰实参，可以就简化修改实参
//	/*int a = 10;
//	int b = 20;
//	myswap(a, b);*/
//
//	//cout << a << endl;
//	//cout << b << endl;
//
//
//	//2.2引用做函数返回值
//
//	//不要返回局部变量的引用,局部变量在栈区程序结束，就被释放了
//	//int& ref = test01();
//	//cout << ref << endl;
//	//cout << ref << endl;
//	////函数的调用可以作为左值
//	//int& ref1 = test02();
//	//test02() = 1000;
//	//cout << ref1 << endl;
//	//如果函数的返回值是引用，这个函数调用可以作为左值
//
//
//
//	//3引用的本质是指针常量
//
//	//int*const ref=int &ref,地址不能修改，内容可以修改
//	//ref=20 ,*ref=20
//	//引用初始化以后，就不可以发生改变
//
//
//
//	//4常量引用，修饰形参，防止形参改变实参
//	/*int a = 10;
//	const int& ref = 10;*///const 编译器改为 int temp =10;const int& ref=temp;如果不加const，只能引用a，
//	//ref = 20;加入const变成只读
//
//
//	int a = 100;
//	showvalue(a);
//
//
//	return 0;
//}