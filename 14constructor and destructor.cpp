#include<iostream>
using namespace std;


//���캯������ʼ��
// �﷨����������{}1û�з���ֵ��Ҳ��дvoid  2��������������ͬ 3.�в���Ҳ��������4.���������ö����Զ�������ֻ����һ��
//��������������
// �﷨��~����(){},�������ڲ������в��������������أ���������ǰ���Զ�����


//���캯�����ࣺ�в��޲Σ�������ͨ����
//���ֵ��÷�ʽ





//class student
//{
//public:
//	student() { cout << 1 << endl; }
//	student(int a) { age = a; cout << 2<< endl; }//�в�
//	student(const student& p) 
//	{ 
//		cout << 3 << endl;
//		age = p.age; 
//	}//�������죬���������Կ��������������õķ�ʽд����
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
////����
//void test()
//{
//	//���ŷ�
//	
//	//student p1;//Ĭ�Ϲ��캯�����ã����С����()����Ϊ����С���Żᱻ��Ϊ��Ϊ��������
//	//student p2(10);//�вι������
//	//student p3(p2);//��������
//
//	//��ʾ��
//	//student p1;
//	//student p2 = student(10);//�в�
//	//student p3 = student(p2);//����
//
//	//student(10)���������죬��ǰ��ִ�н�����ϵͳ������������������
//	//��Ҫ���ÿ���������ʼ����������student(p3);,����������Ϊ��==student p3;�ض��壬����һ����������
//
//	//��ʽת��
//
//	student p4 = 10;//�൱��student p4= student(10)
//	student p5 = p4;//��������
//
//
//}

////�������Զ����ã���ʵ��
//int main()
//{
//	
//	test();
//
//
//	return 0;
//}





//�������캯���ĵ���ʱ��

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

////1ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//}

//2ֵ���ݵķ�ʽ������������ֵ
//void dowork(Person p)
//{
//
//}
//void test02()
//{
//	Person p;
//	dowork(p);
//}
////ֵ��ʽ���ؾֲ�����
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
//	cout << (int*)&p << endl;//�İ��ˣ���ַһ����ֻ������һ�ο�������
//}
	


//Ĭ������£�C++���ٸ�һ�����������������Ĭ�Ϲ��죬Ĭ�������������������Խ���ֵ������
//����û������вι��죬c++���ṩ�޲Σ������ṩ����
//����û����忽������ôc++�����ṩ�������캯��





//ǳ�������򵥵ĸ�ֵ��������
//������ڶ�����������ռ䣬���п�������

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
//		//m_Height = p.m_Height;�������Լ�д��ǳ������Ĭ�ϵ�
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
//	}//�������ݣ��ͷ�
//
//	int m_Age;
//	int* m_Height;//���
//};
//void test01()
//{
//	Person p1(18, 160);
//	Person p2(p1);//ǳ�����������ڴ��ظ��ͷ�
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