#include<iostream>
using namespace std;


//成员变量和成员函数分开储存
//只有非静态的成员变量才属于类的对象上

/*class Person
{
	 static int m_A;//不属于类对象
	 void func() {};//非静态成员函数独一无二一份，也不属于类对象上
	 static void func01() {};//静态成员函数也不属于类对象


};

int Person::m_A=0;
void test01()
{
	Person p;
	cout << sizeof(p) << endl;
}


void test02()
{
	Person p;
	cout << sizeof(p) << endl;
}


int main()
{
	test01();//空对象的内存大小是一个字节
	//因为c++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存空间的位置
	//每个空对象也应该有一个独一无二的内存地址

	test02();//非静态成员属于类对象，分配了4个字节
	
	return 0;
}*/

//this pointer,this 指针指向被调用的成员函数所属的对象，this指针是隐含每一个非静态成员函数内的一种指针，不需要被定义，直接使用即可
//用途：1.当形参和成员变量同名时，可用this指针来区分
//      2.在类的非静态成员函数中返回对象本身，可用return*this


/*class Person
{
public:
	Person(int age)
	{
		this->age = age;//this 指向的是被调用的成员函数所属的对象p1
	}

	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		return *this;//this指向p2的指针，而*this指向的就是p2这个对象的本体
	}
	int age;


};

void test01()
{
	Person p1(18);
	cout << p1.age << endl;
}

void test02()
{
	Person p1(10);
	Person p2(10);
	//链式编程
	p2.PersonAddAge(p1).PersonAddAge(p1);
	//如果返回的是值，调用的是拷贝构造函数，结束后创建一个新副本，但链式都作用在新副本上，返回的是原值p2，所以是20
	//不是30
	cout << p2.age << endl;
}
int main()
{

	test01();
	test02();
	return 0;
}*/


//空指针也可以调用成员汉书，但是也要注意有没有用到this指针
//如果用到this指针，需要加以判断保证代码的健壮性


//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << 1 << endl;
//
//	}
//
//	void showPersonAge()
//	{
//		
//		if (this == NULL)
//		{
//			return;
//		}//提高健壮性
//		
//
//		cout << this->m_Age << endl;//报错因为传入的指针为空
//	}
//	int m_Age;
//};
//
//void test01()
//{
//	Person * p = NULL;
//	p->showClassName();
//	p->showPersonAge();//有问题
//
//}
//int main()
//{
//	test01();
//
//
//
//	return 0;
//}

//const修饰成员函数，叫常函数，常函数内不允许修改成员属性
//成员属性声明时加关键字mutable，在常函数中依然可以修改



//class Person
//{
//public:
//	void showPerson() const//修饰this指针，指针的值也不可以改了：const Person *const this
//	{
//		//this->m_A = 100;//this指针的本质是指针常量，指针的指向是不可以修改的:Person *const this
//		this->m_B = 200;
//	}
//
//	void func() 
//	{
//		m_A = 100;
//	};
//	int m_A;
//	mutable int m_B;//特殊变量，即便在常函数中，也可以修改这个值
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
//
////常对象：声明对象前加const称该对象为常对象
////常对象只能调用常函数
//
//void test02()
//{
//	const Person p1;//常对象
//	//p1.m_A = 100;不可修改
//	p1.m_B = 100;//可以修改
//
//	p1.showPerson();
//	//p1.func();常对象不可以调用普通成员函数，因为普通成员函数可以修改属性
//
//}
//int main()
//{
//	test01();
//	return 0;
//}



