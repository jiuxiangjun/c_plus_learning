#include<iostream>
using namespace std;
#include<set>
#include<string>
//����Ԫ���ڲ���ʱ���Զ�����
//����ʽ�������ײ��ö�����ʵ��
//set���������������ظ�Ԫ�أ��������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//multiset�����ظ�����Ϊ���������ݣ������ظ�����


//����
//Ĭ�ϣ�����

//��ֵ
//=

//����ɾ��
//insertֻ�����
//clear
//erase(pos)
//erase(beg,end)
//erase(ele)ɾ��ֵΪele��Ԫ��





//��С�ͽ���
//size
//empty
//swap
//����������ָ����С



//���Һ�ͳ��
//find(key)����key�Ƿ���ڣ����ظü��ĵ������������ڷ���set.end()
//count(key)ͳ��key����

//pair<,>�ɶԳ��ֵ�����
//pair<type,type>p(value1,value2)
//pair<type,type>p=make_pair(value1,value2)
//p.first   p.second





//�������򣬸ı��������
//���÷º����ı�


//class myClass
//{
//public:
//	bool operator()(int v1,int v2)//��һ�����ط��ţ��ڶ����ǲ����б�
//	{
//		return v1 > v2;//�º�������
//	}
//};
//int main()
//{
//	set<int, myClass>s2;//����º������ͣ�ָ���������Ӵ�С��������һ��s1 set����
//
//	return 0;
//}




//����Զ����������ͣ����ָ���������
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
//	bool operator()(const Person&p1, const Person&p2)const//��operator()����Ϊconst��Ա����
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