#include<iostream>
using namespace std;
//1�����βο�����Ĭ��ֵ
//int func(int a, int b = 10, int c = 20)//�����ĳ��λ���Ѿ�����Ĭ��ֵ����ô�����λ��֮�󶼱������Ĭ��ֵ
//{
//	return a + b + c;
//}
//2�������������Ĭ�ϲ�������ô����ʵ�־Ͳ�����Ĭ�ϲ�����������ʵ�ֶ�ѡһ

//int func1(int d=10, int e=20);

//int func1(int d, int e)//������int d =10���֣�������
//{
//	return d + e;
//}



//3����ռλ��������ֻ��int��û��int a��������
//int func(int a, int) {//Ҳ����int =10
//	return a;
//}



//4.�������أ�������������ͬ����߸�����
//������ͬһ����������
//      �������ƿ�����ͬ
//      �����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
//ע�⣺�����ķ���ֵ�ǲ�������Ϊ�������ص�������������int func ��void func
//int test(int a, int b) 
//{
//	return a + b;
//}
//int test(int b, int a, string c)
//{
//	cout << c << endl;
//	return a + b;

//}
//4.1������Ϊ��������
//void func(int &a)
//{
//	cout << "1" << endl;
//}
//void func(const int &a)
//{
//	cout << "2" << endl;
//}



//4������������Ĭ�Ϻ���

//void func(int a)
//{
//	cout << "1" << endl;
//}
//void func(int)
//{
//	cout << "2" << endl;
//}
//int main()
//{
//	//cout << func(10, 30) << endl;;//����Լ�����ֵ����ô�ô����ֵ�����û������Ĭ��ֵ
//	//cout << func1(10, 10) << endl;
//
//	/*cout << func(10,10)*/;
//	/*cout << test(10, 20) << endl;;
//	cout << test(20, 30, "name") << endl;;*/
//
//
//	//int a = 10;
//	//func(a);//�����ǵ�һ����������Ϊconstֻ��
//
//	//func(10);//�����ǵڶ�����������Ϊ����ֻ������һ���Ϸ����ڴ�ռ䣬int &a=10,���Ϸ���
//	//�ڶ�����const int &a=10,�൱�ڱ�����������һ����ʱ����=10
//
//	func(10);//���ܵ���Ҫ����
//
//
//	return 0;
//}