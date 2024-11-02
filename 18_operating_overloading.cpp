#include<iostream>
using namespace std;
//加号运算符重载


//class Person
//{
//public:
//	//成员函数重载
//
//	/*Person operator+(Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}*/
//
//	int m_A;
//	int m_B;
//};
//
//
////全局函数重载
//Person operator+(Person& p1, Person& p2)//避免值传递，拷贝函数
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
////函数重载版本
//
//Person operator+(Person &p1,int num)
//{
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//	//成员函数本质调用
//	//Person p3 = p1.operator+(p2);
//	//全局函数本质调用
//	//Person p3 = operator+(p1, p2);
//	Person p3 = p1 + p2;
//
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//	//运算符重载也可以发生函数重载
//
//	Person p4 = p1 + 100;
//
//	
//	cout << p4.m_A << endl;
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}


//左移运算符<<


//class Person
//{
//public:
//	Person(int a,int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//	friend ostream& operator<<(ostream& cout, Person& p);
//private:
//	//成员函数重载:一般不用成员函数，p.operator<<(cout)  简化版本p<<cout,无法实现cout在左侧
//	//void operator<<(Person &p)
//
//	int m_A;
//	int m_B;
//	
//};
//
////只能用全局函数重载
//
//ostream& operator<<(ostream &cout,Person & p)//本质operator<<(cout,p)简化cout<<p
//{
//	cout << p.m_A << endl;
//	cout << p.m_B << endl;
//	return cout;
//}
//
//void test01()
//{
//	Person p(10,10);
//	//p.m_A = 10;
//	//p.m_B = 10;
//	cout << p << endl;//可以链式了
//}
//int main()
//{
//	test01();
//
//	return 0;
//}




//递增运算符重载

//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout,const MyInteger& myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置++运算符
//	MyInteger& operator++()
//	{
//		m_Num++;//先运算
//		return *this;//再将自身做一个返回
//	}
//
//	
//	
//	//重载后置++运算符  int代表占位参数，可以用于区分前置后置递增，只能用int
//	MyInteger operator++(int)
//	{
//		//先记录当时结果
//		MyInteger temp = *this;
//
//		//后 递增
//		m_Num++;
//
//		//最后将记录结果返回
//
//		return temp;//返回值，不能是引用
//	}
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream & cout ,const MyInteger& myint)//const保证了临时对象的不可修改性，使得常量引用绑定在临时变量
//{
//	cout << myint.m_Num << endl;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;//返回引用，是为了一直对一个数据进行操作
//}
//
//
//void test02()
//{
//	MyInteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}





//赋值运算符重载,只能类内定义

//c++给一个添加四个函数，这个第四个就是赋值运算符operator=，对属性进行值拷贝
//如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题



//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age=new int(age);//堆区数据
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	//重载
//	Person& operator= (Person& p)
//	{
//		//编译器提供浅拷贝
//		//m_Age = p.m_Age;
//
//		//应先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return  *this;
//	}
//	int* m_Age;
//};
//
//
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//
//	p3 = p2 = p1;//简单值拷贝，都指向同一堆区内存，释放两次
//	cout << *p1.m_Age << endl;
//	cout << *p2.m_Age << endl;
//}
//
//int main()
//{
//	test01();
//	
//	return 0;
//}





//关系运算符重载==,!=,

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//public:
//
//	//重载
//
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)//当执行 p1 == p2 时：p1.operator==(p2) 会被调用，this 指针指向 p1。
//			                                                  //this->m_Name 和 this->m_Age 就分别指的是 p1 的 m_Name 和 m_Age，而 p 是参数，指向 p2。
//			                             //所以在 operator== 中，this->m_Name == p.m_Name && this->m_Age == p.m_Age 会比较 p1 和 p2 的 m_Name 和 m_Age 是否相等。
//		{
//			return true;
//		}
//		return false;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("wwx", 22);
//	Person p2("wwx", 22);
//	if (p1 == p2)
//	{
//		cout << 1 << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}





//函数调用运算符重载（），由于重载后的方式非常像函数调用，因此称之为仿函数，仿函数没有固定写法，很灵活

//class Myprint
//{
//public:
//	//重载函数调用运算符
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//void test01()
//{
//	Myprint myprint;
//	myprint("1");
//}
//
////加法类
//class MyAdd
//{
//public:
//	int operator()(int a, int b)
//	{
//		return a + b;
//	}
//
//		
//};
//
//
//void test02()
//{
//	MyAdd myadd;
//	int ret=myadd(20, 20);
//	cout << ret << endl;
//	//匿名函数对象
//	cout << MyAdd()(100, 200) << endl;//lambda表达式[](){}
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}