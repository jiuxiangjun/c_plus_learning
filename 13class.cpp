#include<iostream>
using namespace std;
//class

//访问权限
//public公共权限：   成员在类内可以访问，类外可以访问
//protected保护权限：成员类内可以访问，类外不可以访问（子类也可以访问父类）
//private私有权限：  成员类内可以访问，类外不可以访问（子类也不可以访问）

//class circle
//{
//public:
//	int r;//属性
//	double PI = 3.14;
//	double calculate()//行为
//	{
//		return 2 * PI* r;
//	}
//
//private:
//	string name ;
//protected:
//	int age;
//
//public:
//	int func()
//	{
//		r = 20;
//		name = "wwx";
//		age = 18;
//		return age;
//	}//间接访问私有属性
//
//private://成员属性设置私有，可测试数据有效性
//	int a=10;//读写都行
//	double b;//只读,同理
//	string c;//只写，同理
//public:
//	void read_a()
//	{
//		
//		cout << a << endl;
//	}
//	void get_a(int a_1)
//	{
//		a = a_1;
//		cout << a << endl;
//	}
//	void set_a(int a_2 )
//	{
//		if (a_2 < 0 || a_2>150)//检测有效性
//		{
//			cout << "no" << endl;
//			return;
//		}
//		a = a_2;
//	}
//
//
//};

//class和struct区别，struct默认公有，class默认私有

//int main()
//{
//	//circle c1;
//	//c1.r = 2;
//	//cout << c1.calculate() << endl;
//
//	//circle c2;
//	////c2.name,无法访问
//
//	//cout << c2.func() << endl;
//
//
//	circle c3;
//	c3.get_a(100);
//
//	c3.set_a(160);
//
//
//
//
//
//	return 0;
//}






