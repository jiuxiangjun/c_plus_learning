#include<iostream>
using namespace std;



//初始化列表：构造函数（）：属性1（值）1，属性2（值2）....{}
//Person(int a,int b,int c):m_A(a),m_B(b),m_C(c){}    类里正常定义int m_A;.......


//类成员是另一个类中的对象，我们称该成员是对象成员

//class Phone
//{
//public:
//	Phone(string pName) 
//	{
//		m_PName = pName;
//	}
//	~Phone() { cout << 1 << endl; }
//	string m_PName;
//
//};
//
//class Person
//{
//public:
//	//Phone m_Phone = pName;隐式转换法
//	Person(string name, string pName) :m_Name(name),m_Phone(pName)
//	{
//
//	}
//	~Person() { cout << 2 << endl; }
//	string m_Name;
//	Phone m_Phone;
//};
//
//void test_01()
//{
//	Person p("wwx ", "vivo");
//	cout << p.m_Name << p.m_Phone.m_PName << endl;
//}
////当其他类对象作为本类成员，构造时候先构造类对象，再构造自身，析构的顺序与构造相反
//
//int main()
//{
//	test_01();
//	
//	
//	return 0;
//}



//静态成员变量

//1.所有对象共享一份数据
//2.在编译阶段分配内存,exe之前就分配内存了，在全局区
//3.类内声明，类外初始化


/*class Person
{
public:
	static int m_A;
	//静态成员变量也有访问权限
private:
	static int m_B;
};

int Person:: m_A = 100;//类外初始化
int Person::m_B = 200;*/

//void test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;//共享的一份数据，谁改了，都会变化
//	cout << p.m_A << endl;
//}

/*void test02()
{
	//静态成员变量 不属于某个对象，所有对象都共享一份数据
	//因此有两种访问方式

	//1.通过对象进行访问
	Person p;
	cout << p.m_A << endl;
	//2.通过类名直接访问
	cout << Person::m_A << endl;//::作用域下的

	//cout << Person::m_B << endl;私有权限类外访问不到私有
}

//静态成员函数



int main()
{
	//test01();
	test02();
	return 0;
}*/

//所有对象共享一个函数
//静态成员函数只能访问静态成员变量

/*class Person
{
public:
	static void func()
	{
		m_A = 200;
		//m_B = 300;不可访问非静态成员
		cout << 1 << endl;
	}
	static int m_A;
	int m_B = 300;

private:
	static void func2()
	{
		cout << 2 << endl;
	}
};
int Person ::m_A = 100;

void test01()
{
	//1.通过对象访问
	Person p;
	cout << p.func << endl;


	//2.通过类名访问
	Person::func;
	//Person::func2;无法访问私有
}


int main()
{
	return 0;
}*/