#include<iostream>
using namespace std;
//����vector:��������
//�㷨for_each
//������<int>::iterator
#include<vector>
#include<algorithm>//��׼�㷨ͷ�ļ�
#include<string>


//void myPrint(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	vector<int> v;//����һ����������
//
//	v.push_back(10);//�������в�������
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	
//	////ͨ�����������������е�����
//	//vector<int>::iterator itBegin = v.begin();//��ʼ������  ָ�������еĵ�һ��Ԫ�ص�λ��
//	//vector<int>::iterator itEnd = v.end();//���������� ָ�����������һ��Ԫ�ص���һ��λ��
//
//	////1����
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//
//	//�ڶ��ֱ���
//	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}*/
//
//	//�����ֱ���������stl�ı����㷨
//	//for_each(v.begin(), v.end(), myPrint);//�ص��������Զ��������е�ÿ��Ԫ�ص��øú���
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
//	//���������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//����
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
////����Զ����������͵�ָ��
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
//	//���������������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//
//	//����
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










//����Ƕ������


//void test01()
//{
//	vector<vector<int>>v;
//
//	//����С����
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//
//	//��С�����������
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//
//	}
//
//	//��С�������������
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//ͨ�����������������ݱ���
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//(*it)��һ���������ͣ����Ի�Ҫ����һ��Ƕ��ѭ��
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