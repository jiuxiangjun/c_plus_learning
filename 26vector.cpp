#include<iostream>
using namespace std;
#include<vector>
//��̬��չ��������ԭ�пռ�����������¿ռ䣬����Ѱ��һ��������ڴ�ռ䣬Ȼ��ԭ���ݿ����¿ռ䣬�ͷ�ԭ�ռ�
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//void test01()
//{
//	vector<int>v1;//Ĭ�Ϲ��죬�޲ι���
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//
//	//ͨ�����䷽ʽ����
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n��element��ʽ����
//	vector<int>v3(10, 100);//10��100
//	printVector(v3);
//
//	//��������
//	vector<int>v4(v3);
//	printVector(v4);
//}
//int main()
//{
//	test01();
//	return 0;
//}


//��ֵ

//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int>v2 = v1;
//	printVector(v1);
//
//	vector<int>v3 ;
//	v3.assign(v1.begin(), v2.end());//end�ǿ�����
//	printVector(v3);
//
//	//n��elem��ʽ��ֵ
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�����ʹ�С
//empty()//�ж������Ƿ�Ϊ��
//capacity����//����������v.capacity��Զ���ڵ���size
//size����//����������Ԫ�صĸ���
//resize��int num)//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã����������ɾ���������ȵ�����
//resize(int num,elem)//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�ã����������ɾ���������ȵ�����


//�����ɾ��
//push_back(ele);β������
//pop_back();ɾ�����һ��Ԫ��
//insert(pos,ele)��λ����ele
//insert(pos,int count,ele)��λ����count��ele
//erase(pos)
//erase(start,end)
//clear()


//��ȡ
//at()������������
//[]=at����
//front()����Ԫ�ص�һ������Ԫ��
//back()�������һ��



//��������
//swap��vec����vec�뱾��Ԫ�ػ���v1.swap(v2),����������������Ԫ��

//�����ڴ�
//vector<int>(v).swap(3)//��v�����ʹ�С�����3
//vector<int>(v)//�������󣬴���һ���ʼ������С����3������
//.swap(v)//��ԭʼv����һ������


//ע�⣺��������
//class MyClass {
//public:
//    MyClass(int x) {
//        cout << "Constructor called with value " << x << endl;
//    }
//    void display() const {
//        cout << "Display function called" << endl;
//    }
//};
//
//// ������������
//MyClass(10); // ������ MyClass �Ĺ��캯����������һ����������




//Ԥ���ռ�
//reserve(int len)//Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

//ͳ�ƿ��ٴ���
//void test01()
//{
//	vector<int>v;
//	//����reserveԤ���ռ�
//	v.reserve(1000);
//	int num = 0;
//	int* p = NULL;
//	for (int i = 0; i < 1000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])//�ռ���չ���ڴ��ı�
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << num << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}