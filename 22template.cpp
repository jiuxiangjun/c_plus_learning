#include<iostream>
using namespace std;


#include<string>

//ģ��
//����ģ�壺����һ��ͨ�ú������亯��ֵ����ֵ���ͺ��β����Ϳ��Բ�ȷ������һ�����������������
//�﷨��template<typename T>��typename������class���棬Tͨ��Ϊ��д�����滻
//      �����������߶���

//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void test01()
//{
//
//	int a = 10;
//	int b = 20;
//	//��ʽ1:�Զ������Ƶ�,�����Ƶ���һ�µ���������T���ſ���ʹ�ã�ab����һ������
//
//	//mySwap(a, b);
//
//	//��ʽ��:��ʾָ�����ͣ�ģ�����Ҫȷ��T���������Ͳſ���ʹ��
//
//	mySwap<int>(a, b);
//
//	cout << a << endl;
//	cout << b << endl;
//}




//int main()
//{
//	
//	test01();
//	return 0;
//}









//��ͨ������ģ�庯������
//1.��ͨ��������ʱ�����Է����Զ�����ת������ʽת����


//int func(int a, int b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 10;
//	char c = '1';
//
//	cout << func(a, c) << endl;//�ܵ���������c�Զ�ת����ASCII��Ȼ���
//
//}
//2.ģ������Զ��Ƶ���������ʽ

//template<typename T>
//T func1(T a, T b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 10;
//	char c = '1';
//
//	//cout << func1(a, c) << endl;//����
//
//	cout << func1<int>(a, c) << endl;//������ʽ
//
//}
//
//
////3.ָ�����ͣ�������ʽ
//
//
//
//
//
//int main()
//{
//	
//	test01();
//	return 0;
//}













//��ͨ������ģ��ĵ��ù���

//1��������ʵ�֣�������ͨ�������ͨ������ʵ��{}��Ҳ�õ�����ͨ
//2����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��


//func<>(a, b);������ǿ�Ƶ�ģ���ˣ�������ͨ��
//3����ģ��Ҳ���Է�������
// ��T func(T a,T b,T c){},�������ˣ�ǿ��ʱҲ�ô�����Ӧ�Ķ�����Ĳ���

//4�������ģ����Բ������õ�ƥ�䣬����ģ��

//������ͨ�����β���int�����Ǵ�����char����ͨ����Ҫ��ʽת��������ģ�庯�������Ըߣ����Զ����Ƶ����Ͳ�����ʽ�ˣ�ֱ�ӵ���

//ģ�����ͨһ�㲻ͬʱ����








//ģ��ľ�����

//�������ȾͲ�����ֱ�Ӵ���ģ����
//������Ҫ���廯��ʽ������ʵ��


//��������������ƣ��������޷��Ƚ��Զ�����������
//template<class T>
//bool func(T &a,T &b)//�������ഫ��Ļ�
//{
//
//}

//template<>bool func(Person &p1,Person &p2)
//{
//	if (p1.m_Name == p2.m_Mame && p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

//ѧϰģ�岻��Ϊ��дģ�壬������stl��������ϵͳģ��











//��ģ�壺�﷨
//template<typename T>
//��


//template<class NameType,class AgeType>
//class Person
//{
//public:
//	Person(NameType name,AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void func()
//	{
//		cout << this->m_Name << endl;
//		cout << this->m_Age << endl;
//	}
//
//		NameType m_Name;
//	    AgeType m_Age;
//};
//void test01()
//{
//	Person<string, int> p1("wwx", 22);
//	p1.func();
//	
//}
//int main()
//{
//	test01();
//
//	return 0;
//}









//��ģ���뺯��ģ������
//1��ģ��û���Զ������Ƶ�
//2��ģ����ģ������б��п�����Ĭ�ϲ���

//template<class NameType,class AgeType=int>
//Person<string> p1("wwx", 22);





//��ģ���г�Ա��������ʱ��
//��ͨ���г�Ա����һ��ʼ�ʹ���
//��ģ���г�Ա��������ʱ�ʹ���

//template<class T>
//class myClass
//{
//public:
//	T obj;
//
//	void func1()
//	{
//		obj.showPerson1();//����һ��person1������ǰ����������һ������
//	}
//	void func2()
//	{
//		obj.showPerson2();//����һ��person2������ǰ����������һ������
//	}
//};
//
//myClass<Person1>m;
////ֻ�ܵ�func1������func2��ֻ��Person2�ܵ�func2









//��ģ���������������
//1.ָ����������-ֱ����ʾ����Ĵ������ͣ����ã�
//2.����ģ�廯-�������еĲ�����Ϊģ����д���
//3.������ģ�廯-�������������ģ�廯���д���



//template<class T1,class T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << this->m_Name << endl;
//		cout << this->m_Age<<endl;
//	}
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1.ָ����������-ֱ����ʾ����Ĵ�������
//void printPerson1(Person<string, int>& p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person<string, int>p("wwx", 20);
//	printPerson1(p);
//}
////2.����ģ�廯-�������еĲ�����Ϊģ����д���
//
//template<class T1, class T2>
//void printPerson2(Person<T1,T2>& p)
//{
//	p.showPerson();
//	cout << typeid(T1).name() << endl;//��T1�����֣�����ַ�������
//}
//void test02()
//{
//	Person<string, int>p("clx", 30);
//	printPerson2(p);
//}
//
//
////3.������ģ�廯-�������������ģ�廯���д���
//template<class T>
//void printPerson3(T &p)
//{
//	p.showPerson();
//}
//void test03()
//{
//	Person<string, int>p("syx", 22);
//	printPerson3(p);
//}
//int main()
//
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}












//��ģ����̳�
//1.���̳еĸ�����һ����ģ���ʱ����������ʱ����Ҫָ���������е�����
//2�����ָ�����������޷�����������ڴ�
//3.��������ָ���������е�T���ͣ�����Ҳ��Ҫ��Ϊ��ģ��

//1.���̳еĸ�����һ����ģ���ʱ����������ʱ����Ҫָ���������е�����
//template<class T>
//class Base
//{
//	T m;
//};
//
//class Son :public Base<int>
//{
//
//};
////3.��������ָ���������е�T���ͣ�����Ҳ��Ҫ��Ϊ��ģ��
//
//template<class T>
//class Base
//{
//	T m;
//};
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//	T1 obj
//};
//
//Son2<int, char>S2;//int �������࣬char�������࣬�õ�m










//��ģ���г�Ա����������ʵ��

//���캯��������ʵ��
// template<class T1,class T2>
//�������� Person<T1,T2>����Person��T1 name,T2 age)
//{
//����
//}

//��Ա����������ʵ��
//template<class T1, class T2>
//void Person<T1,T2> ::showPerson();




//��ģ����ļ���д

//��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
//�����ʽ1��ֱ�Ӱ���cpp
//�����ʽ2����������ʵ��д��ͬһ���ļ��У���������׺hpp��hpp��Լ�������ƣ�����ǿ��

//��������
//1�����ʽ#include"22example.cpp"

//2�����ʽ
//����ʵ�ֶ�д��person.h��ͷ�ļ���Ȼ�����.hpp,
//#include"person.hpp"�ļ�






//��ģ������Ԫ
//ȫ�ֺ�������ʵ��-ֱ��������������Ԫ ֱ������friend
//ȫ�ֺ�������ʵ��-��Ҫ�ñ�������ǰ֪��ȫ�ֺ����Ĵ���

//��������������ʵ��ʱҪ��ģ����߱�����ʶ���������ģ�壬Ȼ�����ڵ�������һ����ģ���ʵ���б�<>,Ȼ�������ʵ�ָɵ����������棬�ñ�����ʶ
//Ȼ���ڰ�ʵ�������漰����ɵ������ϣ����߱���������ô���࣬���Ǹ�ģ����д��ģ������


