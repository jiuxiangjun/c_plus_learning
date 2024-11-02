#include<iostream>
using namespace std;


//构造函数：初始化
// 语法：类名（）{}1没有返回值，也不写void  2函数名与类名相同 3.有参数也可以重载4.编译器调用对象，自动调用且只调用一次
//析构函数：清理
// 语法：~类名(){},区别在于不可以有参数，不可以重载，程序销毁前会自动调用


//构造函数分类：有参无参，或者普通拷贝
//三种调用方式





//class student
//{
//public:
//	student() { cout << 1 << endl; }
//	student(int a) { age = a; cout << 2<< endl; }//有参
//	student(const student& p) 
//	{ 
//		cout << 3 << endl;
//		age = p.age; 
//	}//拷贝构造，把人中属性拷贝进来，以引用的方式写进来
//	
//	
//	string name;
//	int age;
//	double score;
//
//
//
//
//	~student() { cout << 4<<endl; }
//};
//
//
////调用
//void test()
//{
//	//括号法
//	
//	//student p1;//默认构造函数调用，别加小括号()，因为加了小括号会被认为成为函数声明
//	//student p2(10);//有参构造调用
//	//student p3(p2);//拷贝调用
//
//	//显示法
//	//student p1;
//	//student p2 = student(10);//有参
//	//student p3 = student(p2);//拷贝
//
//	//student(10)是匿名构造，当前行执行结束后，系统会立即回收匿名对象
//	//不要利用拷贝函数初始化匿名对象，student(p3);,编译器会认为其==student p3;重定义，这是一个对象声明
//
//	//隐式转换
//
//	student p4 = 10;//相当于student p4= student(10)
//	student p5 = p4;//拷贝构造
//
//
//}

////编译器自动调用，空实现
//int main()
//{
//	
//	test();
//
//
//	return 0;
//}





//拷贝构造函数的调用时机

//class Person
//{
//public:
//	Person()
//	{
//		cout << 1 << endl;
//	}
//
//	Person(int age)
//	{
//		m_Age = age;
//		cout << 2 << endl;
//	}
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << 3 << endl;
//	}
//	~Person(){}
//
//	int m_Age;
//};

////1使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//}

//2值传递的方式给函数参数传值
//void dowork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	dowork(p);
//}
////值方式返回局部对象
//
//Person dowork02()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	Person p = dowork02();
//	cout << (int*)&p << endl;//改版了，地址一样了只调用了一次拷贝函数
//}
	


//默认情况下，C++至少给一个类添加三个函数：默认构造，默认析构，拷贝（对属性进行值拷贝）
//如果用户定义有参构造，c++不提供无参，但是提供拷贝
//如果用户定义拷贝，那么c++不在提供其他构造函数





//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作

//class Person
//{
//public:
//	Person()
//	{
//		cout << 1 << endl;
//	}
//
//	Person(int age,int height)
//	{
//
//		m_Age = age;
//		m_Height=new int(height);
//		cout << 2 << endl;
//	}
//	Person(const Person &p)
//	{
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;编译器自己写的浅拷贝，默认的
//
//		m_Height=new int(*p.m_Height);
//		cout << 3 << endl;
//	}
//	~Person()
//	{
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//	}//堆区数据，释放
//
//	int m_Age;
//	int* m_Height;//身高
//};
//void test01()
//{
//	Person p1(18, 160);
//	Person p2(p1);//浅拷贝，堆区内存重复释放
//}
//
//
//
//	int main()
//{
//	/*test01();*/
//	/*test02();*/
//	/*test03();*/
//
//
//		test01();
//
//
//
//	return 0;
//}