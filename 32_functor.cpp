#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
//�������󣨷º�����
//��һ���࣬����һ������
//��������ͨ����һ�����ã��в����з���ֵ
//������ͨ�����ĸ����Ǻ�������������Լ���״̬
//�������������Ϊ��������



//��������ͨ����һ�����ã��в����з���ֵ
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(10, 10) << endl;;
//}
//
////������ͨ�����ĸ����Ǻ�������������Լ���״̬
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		count++;
//	}
//	int count;//��¼�ڲ��Լ���״̬
//};
//void test02()
//{
//	MyPrint myPrint;
//	myPrint("wwx");
//	myPrint("wwx");
//	myPrint("wwx");
//
//	cout <<myPrint.count << endl;
//}
//
//
////�������������Ϊ��������
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//void test03()
//{
//	MyPrint myPrint;
//	doPrint(myPrint, "clx");
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//	return 0;
//	
//}





//ν�ʣ����ز������͵ķº���
//���operator()����һ��������һԪν��
//���operator()����������������Ԫν��

//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//��û�д���5������
//	vector<int>::iterator it=find_if(v.begin(), v.end(), GreaterFive());//������������
//	if (it == v.end())//û�ҵ��ص�end���ҵ��˷�����һ��������
//	{
//		cout << "1" << endl;
//	}
//	else
//	{
//		cout << "2" << *it<<endl;
//	}
//	
//}
//
//
//
//int main()
//{
//	test01();
//	
//	return 0;
//	
//}


//��Ԫν��

//class Greater {
//public:
//    bool operator()(int a, int b) const {
//        return a > b;  // ��� a > b���򷵻� true
//    }
//};
//
//int main() {
//    vector<int> vec = { 3, 1, 4, 1, 5, 9 };
//
//    // ʹ�ö�Ԫν�� Greater �� vec ��������
//    sort(vec.begin(), vec.end(), Greater());
//
//    cout << "Sorted in descending order: ";
//    for (int n : vec) //��vec�е�ÿ��Ԫ�ض���ֵ��n������ѭ������ʹ��n
//    {
//        cout << n << " ";
//    }
//    cout << endl;
//
//    return 0;
//}







//�ڽ���������
//�����º���
//��ϵ�º���
//�߼��º���
//Ҫ����#include<functional>



//����
//�Ӽ��˳� ȡģ����Ԫ���㣩plus minus multiplies divides modulus
//ȡ����һԪ���㣩negate

//void test01()
//{
//	negate<int>n;
//	n(50);
//	cout << n(50) << endl;
//}
//
//void test02()
//{
//	plus<int>p;
//	cout << p(10, 20) << endl;
//}
//
//
//
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//	
//}



//��ϵ
//equal_to
//not_equal_to
//greater
//greater_equal
//less
//less_equal


//sort(v.beg,v.end,greater<int>())������,�ڽ���������




//�߼�
//logical_and
//logical_or
//logical_not

