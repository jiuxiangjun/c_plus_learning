#include<iostream>
using namespace std;
//1���� �������� &���� =


//2.1���ô���

//void myswap(int& a, int& b)//������ԭ��һ����
//{
//	int temp = a; 
//	a = b;
//	b = temp;
//}

//int& test01()
//{
//	int a = 10;
//	return a;
//}
//int& test02()
//{
//	static int a = 10;//��̬����
//	return a;
//}
//
//
//
//void showvalue(const int& val)
//{
//	//val = 1000;const��ֹ�����
//	cout << val << endl;
//}

//int main()
//{
//	//int a = 0;
//	//int& b = a;
//	//cout << b << endl;
//
//	//b = 100;//�Ա�����ֵҲ��ı�ԭֵ
//
//	//cout << b << endl;
//	//cout << a << endl;
//
//	////ע�⣺���ñ����ڳ�ʼ����
//	////      ����һ����ʼ��֮��Ͳ����Ը���
//
//	//int c = 20;
//	////int& b = c;
//	////cout << b << endl;�����
//
//
//	//b = c;
//	//cout << a << endl;
//	//cout << b << endl;
//	//cout << c << endl;//2��ֵ���ı���
//
//
//
//	//2��������������
//
//	//2.1�����������β�����ʵ�Σ����Ծͼ��޸�ʵ��
//	/*int a = 10;
//	int b = 20;
//	myswap(a, b);*/
//
//	//cout << a << endl;
//	//cout << b << endl;
//
//
//	//2.2��������������ֵ
//
//	//��Ҫ���ؾֲ�����������,�ֲ�������ջ������������ͱ��ͷ���
//	//int& ref = test01();
//	//cout << ref << endl;
//	//cout << ref << endl;
//	////�����ĵ��ÿ�����Ϊ��ֵ
//	//int& ref1 = test02();
//	//test02() = 1000;
//	//cout << ref1 << endl;
//	//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
//
//
//
//	//3���õı�����ָ�볣��
//
//	//int*const ref=int &ref,��ַ�����޸ģ����ݿ����޸�
//	//ref=20 ,*ref=20
//	//���ó�ʼ���Ժ󣬾Ͳ����Է����ı�
//
//
//
//	//4�������ã������βΣ���ֹ�βθı�ʵ��
//	/*int a = 10;
//	const int& ref = 10;*///const ��������Ϊ int temp =10;const int& ref=temp;�������const��ֻ������a��
//	//ref = 20;����const���ֻ��
//
//
//	int a = 100;
//	showvalue(a);
//
//
//	return 0;
//}