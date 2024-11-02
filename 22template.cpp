#include<iostream>
using namespace std;


#include<string>

//模板
//函数模板：建立一个通用函数，其函数值返回值类型和形参类型可以不确定，用一个虚拟的类型来代表
//语法：template<typename T>，typename可以用class代替，T通常为大写，可替换
//      函数声明或者定义

//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void test01()
//{
//
//	int a = 10;
//	int b = 20;
//	//方式1:自动类型推倒,必须推到出一致的数据类型T，才可以使用，ab得是一个类型
//
//	//mySwap(a, b);
//
//	//方式二:显示指定类型，模板必须要确定T的数据类型才可以使用
//
//	mySwap<int>(a, b);
//
//	cout << a << endl;
//	cout << b << endl;
//}




//int main()
//{
//	
//	test01();
//	return 0;
//}









//普通函数与模板函数区别：
//1.普通函数调用时，可以发生自动类型转换（隐式转换）


//int func(int a, int b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 10;
//	char c = '1';
//
//	cout << func(a, c) << endl;//能调起来，将c自动转换成ASCII码然后加
//
//}
//2.模板如果自动推导，不能隐式

//template<typename T>
//T func1(T a, T b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 10;
//	char c = '1';
//
//	//cout << func1(a, c) << endl;//不行
//
//	cout << func1<int>(a, c) << endl;//可以隐式
//
//}
//
//
////3.指定类型，可以隐式
//
//
//
//
//
//int main()
//{
//	
//	test01();
//	return 0;
//}













//普通函数和模板的调用规则

//1两个都能实现，先用普通，如果普通函数无实现{}，也用的是普通
//2可以通过空模板参数列表来强制调用函数模板


//func<>(a, b);这样就强制调模板了，不调普通了
//3函数模板也可以发生重载
// 在T func(T a,T b,T c){},就重载了，强调时也得传入相应的多出来的参数

//4如果函数模板可以产生更好的匹配，优先模板

//假设普通函数形参是int，但是传的是char，普通函数要隐式转换，但是模板函数兼容性高，可自动化推导，就不用隐式了，直接调。

//模板和普通一般不同时出现








//模板的局限性

//数组和类等就不可以直接传进模板里
//所以需要具体化方式做特殊实现


//和运算符重载类似，编译器无法比较自定义数据类型
//template<class T>
//bool func(T &a,T &b)//有两个类传入的话
//{
//
//}

//template<>bool func(Person &p1,Person &p2)
//{
//	if (p1.m_Name == p2.m_Mame && p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

//学习模板不是为了写模板，而是在stl中能运用系统模板











//类模板：语法
//template<typename T>
//类


//template<class NameType,class AgeType>
//class Person
//{
//public:
//	Person(NameType name,AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void func()
//	{
//		cout << this->m_Name << endl;
//		cout << this->m_Age << endl;
//	}
//
//		NameType m_Name;
//	    AgeType m_Age;
//};
//void test01()
//{
//	Person<string, int> p1("wwx", 22);
//	p1.func();
//	
//}
//int main()
//{
//	test01();
//
//	return 0;
//}









//类模板与函数模板区别
//1类模板没有自动类型推导
//2类模板在模板参数列表中可以有默认参数

//template<class NameType,class AgeType=int>
//Person<string> p1("wwx", 22);





//类模板中成员函数创建时机
//普通类中成员函数一开始就创建
//类模板中成员函数调用时就创建

//template<class T>
//class myClass
//{
//public:
//	T obj;
//
//	void func1()
//	{
//		obj.showPerson1();//假设一个person1的类在前，且有这样一个函数
//	}
//	void func2()
//	{
//		obj.showPerson2();//假设一个person2的类在前，且有这样一个函数
//	}
//};
//
//myClass<Person1>m;
////只能调func1，不能func2，只有Person2能调func2









//类模板参数做函数参数
//1.指定传入类型-直接显示对象的传入类型（常用）
//2.参数模板化-将对象中的参数变为模板进行传递
//3.整个类模板化-将这个对象类型模板化进行传递



//template<class T1,class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << this->m_Name << endl;
//		cout << this->m_Age<<endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1.指定传入类型-直接显示对象的传入类型
//void printPerson1(Person<string, int>& p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string, int>p("wwx", 20);
//	printPerson1(p);
//}
////2.参数模板化-将对象中的参数变为模板进行传递
//
//template<class T1, class T2>
//void printPerson2(Person<T1,T2>& p)
//{
//	p.showPerson();
//	cout << typeid(T1).name() << endl;//看T1的名字，输出字符串名字
//}
//void test02()
//{
//	Person<string, int>p("clx", 30);
//	printPerson2(p);
//}
//
//
////3.整个类模板化-将这个对象类型模板化进行传递
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//}
//void test03()
//{
//	Person<string, int>p("syx", 22);
//	printPerson3(p);
//}
//int main()
//
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}












//类模板与继承
//1.当继承的父类是一个类模板的时候，子类声明时，需要指定出父类中的类型
//2如果不指定，编译器无法给子类分配内存
//3.如果想灵活指定出父类中的T类型，子类也需要变为类模板

//1.当继承的父类是一个类模板的时候，子类声明时，需要指定出父类中的类型
//template<class T>
//class Base
//{
//	T m;
//};
//
//class Son :public Base<int>
//{
//
//};
////3.如果想灵活指定出父类中的T类型，子类也需要变为类模板
//
//template<class T>
//class Base
//{
//	T m;
//};
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//	T1 obj
//};
//
//Son2<int, char>S2;//int 传给子类，char传给父类，拿到m










//类模板中成员函数的类外实现

//构造函数的类外实现
// template<class T1,class T2>
//函数声明 Person<T1,T2>：：Person（T1 name,T2 age)
//{
//参数
//}

//成员函数的类外实现
//template<class T1, class T2>
//void Person<T1,T2> ::showPerson();




//类模板分文件编写

//类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
//解决方式1：直接包含cpp
//解决方式2：将声明和实现写到同一个文件中，并改名后缀hpp，hpp是约定的名称，并不强制

//函数调用
//1解决方式#include"22example.cpp"

//2解决方式
//声明实现都写到person.h中头文件，然后改名.hpp,
//#include"person.hpp"文件






//类模板与友元
//全局函数类内实现-直接在类内声明友元 直接声明friend
//全局函数类外实现-需要让编译器提前知道全局函数的存在

//类内声明，类外实现时要加模板告诉编译器识别函数里面的模板，然后类内的声明加一个空模板的实现列表<>,然后把类外实现干到代码最上面，让编译器识
//然后在把实现里面涉及的类干到再往上，告诉编译器有这么个类，还是个模板类写个模板声明


