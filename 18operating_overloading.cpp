#include<iostream>
using namespace std;
//�Ӻ����������


//class Person
//{
//public:
//	//��Ա��������
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
////ȫ�ֺ�������
//Person operator+(Person& p1, Person& p2)//����ֵ���ݣ���������
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
////�������ذ汾
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
//	//��Ա�������ʵ���
//	//Person p3 = p1.operator+(p2);
//	//ȫ�ֺ������ʵ���
//	//Person p3 = operator+(p1, p2);
//	Person p3 = p1 + p2;
//
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//	//���������Ҳ���Է�����������
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


//���������<<


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
//	//��Ա��������:һ�㲻�ó�Ա������p.operator<<(cout)  �򻯰汾p<<cout,�޷�ʵ��cout�����
//	//void operator<<(Person &p)
//
//	int m_A;
//	int m_B;
//	
//};
//
////ֻ����ȫ�ֺ�������
//
//ostream& operator<<(ostream &cout,Person & p)//����operator<<(cout,p)��cout<<p
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
//	cout << p << endl;//������ʽ��
//}
//int main()
//{
//	test01();
//
//	return 0;
//}




//�������������

//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout,const MyInteger& myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//����ǰ��++�����
//	MyInteger& operator++()
//	{
//		m_Num++;//������
//		return *this;//�ٽ�������һ������
//	}
//
//	
//	
//	//���غ���++�����  int����ռλ������������������ǰ�ú��õ�����ֻ����int
//	MyInteger operator++(int)
//	{
//		//�ȼ�¼��ʱ���
//		MyInteger temp = *this;
//
//		//�� ����
//		m_Num++;
//
//		//��󽫼�¼�������
//
//		return temp;//����ֵ������������
//	}
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream & cout ,const MyInteger& myint)//const��֤����ʱ����Ĳ����޸��ԣ�ʹ�ó������ð�����ʱ����
//{
//	cout << myint.m_Num << endl;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;//�������ã���Ϊ��һֱ��һ�����ݽ��в���
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





//��ֵ���������,ֻ�����ڶ���

//c++��һ������ĸ�������������ĸ����Ǹ�ֵ�����operator=�������Խ���ֵ����
//�������������ָ�����������ֵ����ʱҲ�������ǳ��������



//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age=new int(age);//��������
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	//����
//	Person& operator= (Person& p)
//	{
//		//�������ṩǳ����
//		//m_Age = p.m_Age;
//
//		//Ӧ���ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
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
//	p3 = p2 = p1;//��ֵ��������ָ��ͬһ�����ڴ棬�ͷ�����
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





//��ϵ���������==,!=,

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
//	//����
//
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)//��ִ�� p1 == p2 ʱ��p1.operator==(p2) �ᱻ���ã�this ָ��ָ�� p1��
//			                                                  //this->m_Name �� this->m_Age �ͷֱ�ָ���� p1 �� m_Name �� m_Age���� p �ǲ�����ָ�� p2��
//			                             //������ operator== �У�this->m_Name == p.m_Name && this->m_Age == p.m_Age ��Ƚ� p1 �� p2 �� m_Name �� m_Age �Ƿ���ȡ�
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





//����������������أ������������غ�ķ�ʽ�ǳ��������ã���˳�֮Ϊ�º������º���û�й̶�д���������

//class Myprint
//{
//public:
//	//���غ������������
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
////�ӷ���
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
//	//������������
//	cout << MyAdd()(100, 200) << endl;//lambda���ʽ[](){}
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}