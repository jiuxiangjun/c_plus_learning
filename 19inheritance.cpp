#include<iostream>
using namespace std;


//继承


//普通实现

//class Java
//{
//public:
//	void header()
//	{
//		cout << "1" << endl;
//
//	}
//	void footer()
//	{
//		cout << "2" << endl;
//	}
//	void left()
//	{
//		cout << "3" << endl;
//	}
//	void content()
//	{
//		cout << "4" << endl;
//	}
//};
//
//
//
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "1" << endl;
//
//	}
//	void footer()
//	{
//		cout << "2" << endl;
//	}
//	void left()
//	{
//		cout << "3" << endl;
//	}
//	
//};
////继承：class子类：继承方式 父类
////子类也叫派生类
////父类也叫基类
//
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "5" << endl;
//	}
//};
//
//
//void test01()
//{
//	Java ja;
//	ja.content();
//	ja.header();
//	ja.footer();
//	ja.left();
//}
//
//
//
//
//int main()
//{
//	test01();
//	return 0;
//}




//公共继承：父类里的公共和保护，子类还是公共和保护，父类私有属性，子类不可访问

//保护继承：父类里的公共和保护，子类变保护，父类私有，子类不可访问

//私有继承：父类的公共和保护，子类变私有，父类私有，子类不可访问


//class Basic1
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//class son1 :public Basic1
//{
//public:
//	void func()
//	{
//		a = 10;
//		b = 20;
//		//c = 30;不可访问
//	}
//};
//
//void test01()
//{
//	son1 s1;
//	//s1.b=20  保护不可访问
//
//
//}




//继承中的对象模型


//class Basic1
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//class son1 :public Basic1
//{
//public:
//	int d;
//};
//
////利用开发人员命令提示工具查看对象模型
////跳转盘符 F:
////跳转文件路径 cd 具体路径复制
////查看命名
//// cl(L) /d1 reportSingleClassLayout类名 文件名（tab键自动补齐）
//
//
//void test01()
//{
//	cout << sizeof(son1) << endl;//父类中所有非静态成员属性都会被子类继承下去
//	//父类中私有成员属性 是被编译器隐藏了，因此无法访问，但是确实被继承下去了
//}
//
//int main()
//{
//	test01();
//	return 0;
//}




//构造和析构顺序



//class Basic1
//{
//public:
//	Basic1()
//	{
//		cout << "1" << endl;
//	}
//	~Basic1()
//	{
//		cout << "2" << endl;
//	}
//};
//
//class son1 :public Basic1
//{
//public:
//	son1()
//	{
//		cout << "3" << endl;
//	}
//	~son1()
//	{
//		cout << "4" << endl;
//	}
//	
//};
//
//void test01()
//{
//	//Basic1 b;
//	son1 s1;//先构造父类，再构造子类，再子类析构，再析构父类
//}
//
//int main()
//{
//	test01();
//	return 0;
//}





//同名成员处理

//访问子类同名成员 直接访问

//访问父类同名成员 需要加作用域

//class Base
//{
//public:
//	Base()
//	{
//		a = 10;
//	}
//	void func()
//	{
//		cout << "1" << endl;
//	}
//	void func(int)
//	{
//		cout << "3" << endl;
//	}
//	int a;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		a = 200;
//	}
//	void func()
//	{
//		cout << "2" << endl;
//	}
//	int a;
//};
//
//void test01()
//{
//	Son s;
//	cout << s.a << endl;//访问子类同名成员 直接访问
//
//	cout << s.Base::a << endl;//通过子类对象访问父类同名成员 需要加作用域
//
//}
//
//void test02()
//{
//	Son s;
//	 s.func();
//	 s.Base::func();
//	 s.Base::func(100);//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有的同名成员，想访问父类必须加作用域
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}








//同名静态成员处理


//和非静态一样

//class Base
//{
//public:
//	
//	static int a;
//	static void func()
//	{
//		cout << "1" << endl;
//	}
//	static void func(int)//无需类外定义
//	{
//		cout << "3" << endl;
//	}
//};
//int Base::a = 100;//在类内声明静态成员变量只是告诉编译器它的存在。
                      ////在类外定义静态成员变量才会为它分配内存。
//
//class Son :public Base
//{
//public:
//	static void func()
//	{
//		cout << "2" << endl;
//	}
//	static int a;
//};
//int Son::a = 200;
//
////同名静态成员属性
//
//void test01()
//{
//	//第一种：通过对象访问
//	Son s;
//	cout << s.a << endl;
//
//	cout << s.Base::a << endl;
//
//
//	//第二种：通过类名来访问
//
//	cout << Son::a << endl;
//	cout << Son::Base::a << endl;
//}
////同名静态成员函数
//
//
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();//通过对象
//
//
//	Son::func();
//	Son::Base::func();//通过类名
//	Son::Base::func(100);//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有的同名成员，想访问父类必须加作用域
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}







//多继承语法

//多继承可能会引发父类中有同名成员出现，需要作用域加以区分

//class 子类：继承方式 父类1，继承方式，父类2......

//s.Base1::a
//s.Base2::a





//菱形继承：一个类1被两个子类继承，两个子类又被一个类2继承，钻石继承
//类2会继承两份一样的数据，资源浪费
//利用虚继承，解决资源浪费
//继承之前加virtual关键字变虚继承，最开始的父类变虚基类
//class Sheep：virtual public Animal{}
//class tuo  ：virtual public Animal{}
//可以直接访问，不用作用域区分两类数据了，开发提示人员工具里继承的是vbptr：virtual base pointer ，vbptr指针指向vbtable，两个类的vbptr
//指向一个地址，vbptr加上vbtable记录的偏移量=同一数据