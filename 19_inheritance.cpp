#include<iostream>
using namespace std;


//�̳�


//��ͨʵ��

//class Java
//{
//public:
//	void header()
//	{
//		cout << "1" << endl;
//
//	}
//	void footer()
//	{
//		cout << "2" << endl;
//	}
//	void left()
//	{
//		cout << "3" << endl;
//	}
//	void content()
//	{
//		cout << "4" << endl;
//	}
//};
//
//
//
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "1" << endl;
//
//	}
//	void footer()
//	{
//		cout << "2" << endl;
//	}
//	void left()
//	{
//		cout << "3" << endl;
//	}
//	
//};
////�̳У�class���ࣺ�̳з�ʽ ����
////����Ҳ��������
////����Ҳ�л���
//
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "5" << endl;
//	}
//};
//
//
//void test01()
//{
//	Java ja;
//	ja.content();
//	ja.header();
//	ja.footer();
//	ja.left();
//}
//
//
//
//
//int main()
//{
//	test01();
//	return 0;
//}




//�����̳У�������Ĺ����ͱ��������໹�ǹ����ͱ���������˽�����ԣ����಻�ɷ���

//�����̳У�������Ĺ����ͱ���������䱣��������˽�У����಻�ɷ���

//˽�м̳У�����Ĺ����ͱ����������˽�У�����˽�У����಻�ɷ���


//class Basic1
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//class son1 :public Basic1
//{
//public:
//	void func()
//	{
//		a = 10;
//		b = 20;
//		//c = 30;���ɷ���
//	}
//};
//
//void test01()
//{
//	son1 s1;
//	//s1.b=20  �������ɷ���
//
//
//}




//�̳��еĶ���ģ��


//class Basic1
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//class son1 :public Basic1
//{
//public:
//	int d;
//};
//
////���ÿ�����Ա������ʾ���߲鿴����ģ��
////��ת�̷� F:
////��ת�ļ�·�� cd ����·������
////�鿴����
//// cl(L) /d1 reportSingleClassLayout���� �ļ�����tab���Զ����룩
//
//
//void test01()
//{
//	cout << sizeof(son1) << endl;//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//	//������˽�г�Ա���� �Ǳ������������ˣ�����޷����ʣ�����ȷʵ���̳���ȥ��
//}
//
//int main()
//{
//	test01();
//	return 0;
//}




//���������˳��



//class Basic1
//{
//public:
//	Basic1()
//	{
//		cout << "1" << endl;
//	}
//	~Basic1()
//	{
//		cout << "2" << endl;
//	}
//};
//
//class son1 :public Basic1
//{
//public:
//	son1()
//	{
//		cout << "3" << endl;
//	}
//	~son1()
//	{
//		cout << "4" << endl;
//	}
//	
//};
//
//void test01()
//{
//	//Basic1 b;
//	son1 s1;//�ȹ��츸�࣬�ٹ������࣬����������������������
//}
//
//int main()
//{
//	test01();
//	return 0;
//}





//ͬ����Ա����

//��������ͬ����Ա ֱ�ӷ���

//���ʸ���ͬ����Ա ��Ҫ��������

//class Base
//{
//public:
//	Base()
//	{
//		a = 10;
//	}
//	void func()
//	{
//		cout << "1" << endl;
//	}
//	void func(int)
//	{
//		cout << "3" << endl;
//	}
//	int a;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		a = 200;
//	}
//	void func()
//	{
//		cout << "2" << endl;
//	}
//	int a;
//};
//
//void test01()
//{
//	Son s;
//	cout << s.a << endl;//��������ͬ����Ա ֱ�ӷ���
//
//	cout << s.Base::a << endl;//ͨ�����������ʸ���ͬ����Ա ��Ҫ��������
//
//}
//
//void test02()
//{
//	Son s;
//	 s.func();
//	 s.Base::func();
//	 s.Base::func(100);//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص����������е�ͬ����Ա������ʸ�������������
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}








//ͬ����̬��Ա����


//�ͷǾ�̬һ��

//class Base
//{
//public:
//	
//	static int a;
//	static void func()
//	{
//		cout << "1" << endl;
//	}
//	static void func(int)//�������ⶨ��
//	{
//		cout << "3" << endl;
//	}
//};
//int Base::a = 100;//������������̬��Ա����ֻ�Ǹ��߱��������Ĵ��ڡ�
                      ////�����ⶨ�徲̬��Ա�����Ż�Ϊ�������ڴ档
//
//class Son :public Base
//{
//public:
//	static void func()
//	{
//		cout << "2" << endl;
//	}
//	static int a;
//};
//int Son::a = 200;
//
////ͬ����̬��Ա����
//
//void test01()
//{
//	//��һ�֣�ͨ���������
//	Son s;
//	cout << s.a << endl;
//
//	cout << s.Base::a << endl;
//
//
//	//�ڶ��֣�ͨ������������
//
//	cout << Son::a << endl;
//	cout << Son::Base::a << endl;
//}
////ͬ����̬��Ա����
//
//
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();//ͨ������
//
//
//	Son::func();
//	Son::Base::func();//ͨ������
//	Son::Base::func(100);//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص����������е�ͬ����Ա������ʸ�������������
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}







//��̳��﷨

//��̳п��ܻ�������������ͬ����Ա���֣���Ҫ�������������

//class ���ࣺ�̳з�ʽ ����1���̳з�ʽ������2......

//s.Base1::a
//s.Base2::a





//���μ̳У�һ����1����������̳У����������ֱ�һ����2�̳У���ʯ�̳�
//��2��̳�����һ�������ݣ���Դ�˷�
//������̳У������Դ�˷�
//�̳�֮ǰ��virtual�ؼ��ֱ���̳У��ʼ�ĸ���������
//class Sheep��virtual public Animal{}
//class tuo  ��virtual public Animal{}
//����ֱ�ӷ��ʣ������������������������ˣ�������ʾ��Ա������̳е���vbptr��virtual base pointer ��vbptrָ��ָ��vbtable���������vbptr
//ָ��һ����ַ��vbptr����vbtable��¼��ƫ����=ͬһ����