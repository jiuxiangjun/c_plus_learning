#include<iostream>
using namespace std;



//��ʼ���б����캯������������1��ֵ��1������2��ֵ2��....{}
//Person(int a,int b,int c):m_A(a),m_B(b),m_C(c){}    ������������int m_A;.......


//���Ա����һ�����еĶ������ǳƸó�Ա�Ƕ����Ա

//class Phone
//{
//public:
//	Phone(string pName) 
//	{
//		m_PName = pName;
//	}
//	~Phone() { cout << 1 << endl; }
//	string m_PName;
//
//};
//
//class Person
//{
//public:
//	//Phone m_Phone = pName;��ʽת����
//	Person(string name, string pName) :m_Name(name),m_Phone(pName)
//	{
//
//	}
//	~Person() { cout << 2 << endl; }
//	string m_Name;
//	Phone m_Phone;
//};
//
//void test_01()
//{
//	Person p("wwx ", "vivo");
//	cout << p.m_Name << p.m_Phone.m_PName << endl;
//}
////�������������Ϊ�����Ա������ʱ���ȹ���������ٹ�������������˳���빹���෴
//
//int main()
//{
//	test_01();
//	
//	
//	return 0;
//}



//��̬��Ա����

//1.���ж�����һ������
//2.�ڱ���׶η����ڴ�,exe֮ǰ�ͷ����ڴ��ˣ���ȫ����
//3.���������������ʼ��


/*class Person
{
public:
	static int m_A;
	//��̬��Ա����Ҳ�з���Ȩ��
private:
	static int m_B;
};

int Person:: m_A = 100;//�����ʼ��
int Person::m_B = 200;*/

//void test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;//�����һ�����ݣ�˭���ˣ�����仯
//	cout << p.m_A << endl;
//}

/*void test02()
{
	//��̬��Ա���� ������ĳ���������ж��󶼹���һ������
	//��������ַ��ʷ�ʽ

	//1.ͨ��������з���
	Person p;
	cout << p.m_A << endl;
	//2.ͨ������ֱ�ӷ���
	cout << Person::m_A << endl;//::�������µ�

	//cout << Person::m_B << endl;˽��Ȩ��������ʲ���˽��
}

//��̬��Ա����



int main()
{
	//test01();
	test02();
	return 0;
}*/

//���ж�����һ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

/*class Person
{
public:
	static void func()
	{
		m_A = 200;
		//m_B = 300;���ɷ��ʷǾ�̬��Ա
		cout << 1 << endl;
	}
	static int m_A;
	int m_B = 300;

private:
	static void func2()
	{
		cout << 2 << endl;
	}
};
int Person ::m_A = 100;

void test01()
{
	//1.ͨ���������
	Person p;
	cout << p.func << endl;


	//2.ͨ����������
	Person::func;
	//Person::func2;�޷�����˽��
}


int main()
{
	return 0;
}*/