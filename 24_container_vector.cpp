#include<iostream>
using namespace std;
//容器vector:理解成数组
//算法for_each
//迭代器<int>::iterator
#include<vector>
#include<algorithm>//标准算法头文件
#include<string>


//void myPrint(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	vector<int> v;//创建一个数组容器
//
//	v.push_back(10);//向容器中插入数据
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	
//	////通过迭代器访问容器中的数据
//	//vector<int>::iterator itBegin = v.begin();//起始迭代器  指向容器中的第一个元素的位置
//	//vector<int>::iterator itEnd = v.end();//结束迭代器 指向容器中最后一个元素的下一个位置
//
//	////1遍历
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//
//	//第二种遍历
//	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}*/
//
//	//第三种遍历，利用stl的遍历算法
//	//for_each(v.begin(), v.end(), myPrint);//回调技术，自动对容器中的每个元素调用该函数
//
//
//
//}

//int main()
//{
//	test01();
//
//
//	return 0;
//}




//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector<Person>v;
//
//	Person p1("clx", 24);
//	Person p2("wwx", 24);
//	Person p3("syx", 25);
//	Person p4("smq", 25);
//	Person p5("cmy", 24);
//
//
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//遍历
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		/*cout << (*it).m_Name << endl;
//		cout << (*it).m_Age << endl;*/
//		cout << it->m_Age << endl;;
//		cout << it->m_Name<<endl;
//	}
//
//
//}
//
//
////存放自定义数据类型的指针
//
//void test02()
//{
//	vector<Person*>v;
//
//	Person p1("clx", 24);
//	Person p2("wwx", 24);
//	Person p3("syx", 25);
//	Person p4("smq", 25);
//	Person p5("cmy", 24);
//
//
//	//向容器中添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//
//	//遍历
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it)->m_Name << (*it)->m_Age << endl;
//	}
//}
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}










//容器嵌套容器


//void test01()
//{
//	vector<vector<int>>v;
//
//	//创建小容器
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//
//	//向小容器添加数据
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//
//	}
//
//	//将小容器插入大容器
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//通过大容器把所有数据遍历
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//(*it)是一个容器类型，所以还要再做一个嵌套循环
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}