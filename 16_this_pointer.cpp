#include<iostream>
using namespace std;


//��Ա�����ͳ�Ա�����ֿ�����
//ֻ�зǾ�̬�ĳ�Ա������������Ķ�����

/*class Person
{
	 static int m_A;//�����������
	 void func() {};//�Ǿ�̬��Ա������һ�޶�һ�ݣ�Ҳ�������������
	 static void func01() {};//��̬��Ա����Ҳ�����������


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
	test01();//�ն�����ڴ��С��һ���ֽ�
	//��Ϊc++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ�ռ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ

	test02();//�Ǿ�̬��Ա��������󣬷�����4���ֽ�
	
	return 0;
}*/

//this pointer,this ָ��ָ�򱻵��õĳ�Ա���������Ķ���thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ�룬����Ҫ�����壬ֱ��ʹ�ü���
//��;��1.���βκͳ�Ա����ͬ��ʱ������thisָ��������
//      2.����ķǾ�̬��Ա�����з��ض���������return*this


/*class Person
{
public:
	Person(int age)
	{
		this->age = age;//this ָ����Ǳ����õĳ�Ա���������Ķ���p1
	}

	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		return *this;//thisָ��p2��ָ�룬��*thisָ��ľ���p2�������ı���
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
	//��ʽ���
	p2.PersonAddAge(p1).PersonAddAge(p1);
	//������ص���ֵ�����õ��ǿ������캯���������󴴽�һ���¸���������ʽ���������¸����ϣ����ص���ԭֵp2��������20
	//����30
	cout << p2.age << endl;
}
int main()
{

	test01();
	test02();
	return 0;
}*/


//��ָ��Ҳ���Ե��ó�Ա���飬����ҲҪע����û���õ�thisָ��
//����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��


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
//		}//��߽�׳��
//		
//
//		cout << this->m_Age << endl;//������Ϊ�����ָ��Ϊ��
//	}
//	int m_Age;
//};
//
//void test01()
//{
//	Person * p = NULL;
//	p->showClassName();
//	p->showPersonAge();//������
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

//const���γ�Ա�������г��������������ڲ������޸ĳ�Ա����
//��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�



//class Person
//{
//public:
//	void showPerson() const//����thisָ�룬ָ���ֵҲ�����Ը��ˣ�const Person *const this
//	{
//		//this->m_A = 100;//thisָ��ı�����ָ�볣����ָ���ָ���ǲ������޸ĵ�:Person *const this
//		this->m_B = 200;
//	}
//
//	void func() 
//	{
//		m_A = 100;
//	};
//	int m_A;
//	mutable int m_B;//��������������ڳ������У�Ҳ�����޸����ֵ
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
//
////��������������ǰ��const�Ƹö���Ϊ������
////������ֻ�ܵ��ó�����
//
//void test02()
//{
//	const Person p1;//������
//	//p1.m_A = 100;�����޸�
//	p1.m_B = 100;//�����޸�
//
//	p1.showPerson();
//	//p1.func();�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
//
//}
//int main()
//{
//	test01();
//	return 0;
//}



