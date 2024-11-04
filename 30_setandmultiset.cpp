#include<iostream>
using namespace std;
#include<set>
#include<string>
//所有元素在插入时会自动排序
//关联式容器，底层用二叉树实现
//set不允许容器中有重复元素，插入数据的同时会返回插入结果，表示插入是否成功
//multiset可以重复，因为不会检测数据，可以重复插入


//构造
//默认，拷贝

//赋值
//=

//插入删除
//insert只有这个
//clear
//erase(pos)
//erase(beg,end)
//erase(ele)删除值为ele的元素





//大小和交换
//size
//empty
//swap
//不允许重新指定大小



//查找和统计
//find(key)查找key是否存在，返回该键的迭代器，不存在返回set.end()
//count(key)统计key个数

//pair<,>成对出现的数据
//pair<type,type>p(value1,value2)
//pair<type,type>p=make_pair(value1,value2)
//p.first   p.second





//容器排序，改变排序规则
//利用仿函数改变


//class myClass
//{
//public:
//	bool operator()(int v1,int v2)//第一个重载符号，第二个是参数列表
//	{
//		return v1 > v2;//仿函数重载
//	}
//};
//int main()
//{
//	set<int, myClass>s2;//放入仿函数类型，指定排序规则从大到小，假设有一个s1 set容器
//
//	return 0;
//}




//存放自定义数据类型，如何指定排序规则
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//class compare
//{
//public:
//	bool operator()(const Person&p1, const Person&p2)const//将operator()声明为const成员函数
//	{
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void test01()
//{
//	set<Person,compare>s;
//
//	Person p1("wwx", 25);
//	Person p2("clx", 24);
//	Person p3("syx", 26);
//	Person p4("zjr", 21);
//
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//
//	for (set<Person,compare>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << it->m_Name << it->m_Age << endl;
//	}
//
//
//}
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}