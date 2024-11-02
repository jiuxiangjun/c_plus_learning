#include<iostream>
using namespace std;
//1函数形参可以有默认值
//int func(int a, int b = 10, int c = 20)//如果从某个位置已经有了默认值，那么从这个位置之后都必须额有默认值
//{
//	return a + b + c;
//}
//2如果函数声明有默认参数，那么函数实现就不能有默认参数，声明，实现二选一

//int func1(int d=10, int e=20);

//int func1(int d, int e)//不能有int d =10这种，二义性
//{
//	return d + e;
//}



//3函数占位参数，即只有int，没有int a，不常用
//int func(int a, int) {//也可以int =10
//	return a;
//}



//4.函数重载：函数名可以相同，提高复用性
//条件：同一个作用域下
//      函数名称可以相同
//      函数参数类型不同，或者个数不同，或者顺序不同
//注意：函数的返回值是不可以作为函数重载的条件，不可以int func 和void func
//int test(int a, int b) 
//{
//	return a + b;
//}
//int test(int b, int a, string c)
//{
//	cout << c << endl;
//	return a + b;

//}
//4.1引用作为重载条件
//void func(int &a)
//{
//	cout << "1" << endl;
//}
//void func(const int &a)
//{
//	cout << "2" << endl;
//}



//4函数重载碰到默认函数

//void func(int a)
//{
//	cout << "1" << endl;
//}
//void func(int)
//{
//	cout << "2" << endl;
//}
//int main()
//{
//	//cout << func(10, 30) << endl;;//如果自己传了值，那么用传入的值，如果没传，用默认值
//	//cout << func1(10, 10) << endl;
//
//	/*cout << func(10,10)*/;
//	/*cout << test(10, 20) << endl;;
//	cout << test(20, 30, "name") << endl;;*/
//
//
//	//int a = 10;
//	//func(a);//调的是第一个函数，因为const只读
//
//	//func(10);//调的是第二个函数，因为引用只能引用一个合法的内存空间，int &a=10,不合法，
//	//第二个，const int &a=10,相当于编译器创建了一个临时变量=10
//
//	func(10);//都能调，要避免
//
//
//	return 0;
//}