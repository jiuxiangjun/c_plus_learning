#include<iostream>
using namespace std;
#include<vector>
//动态扩展：不是在原有空间基础上续接新空间，而是寻找一个更大的内存空间，然后将原数据拷贝新空间，释放原空间
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
//	vector<int>v1;//默认构造，无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//
//	//通过区间方式构造
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n个element方式构造
//	vector<int>v3(10, 100);//10个100
//	printVector(v3);
//
//	//拷贝构造
//	vector<int>v4(v3);
//	printVector(v4);
//}
//int main()
//{
//	test01();
//	return 0;
//}


//赋值

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
//	v3.assign(v1.begin(), v2.end());//end是开区间
//	printVector(v3);
//
//	//n个elem方式赋值
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


//容量和大小
//empty()//判断容器是否为空
//capacity（）//容器的容量v.capacity永远大于等于size
//size（）//返回容器中元素的个数
//resize（int num)//重新指定容器的长度为num，若容器变长，则以默认值填充新位置，容器变短则删除超出长度的容器
//resize(int num,elem)//重新指定容器的长度为num，若容器变长，则以elem值填充新位置，容器变短则删除超出长度的容器


//插入和删除
//push_back(ele);尾部插入
//pop_back();删除最后一个元素
//insert(pos,ele)定位插入ele
//insert(pos,int count,ele)定位插入count个ele
//erase(pos)
//erase(start,end)
//clear()


//存取
//at()返回索引数据
//[]=at（）
//front()返回元素第一个数据元素
//back()返回最后一个



//互换容器
//swap（vec）将vec与本身元素互换v1.swap(v2),互换了两个容器的元素

//收缩内存
//vector<int>(v).swap(3)//将v容量和大小都变成3
//vector<int>(v)//匿名对象，创建一个最开始容量大小都是3的容器
//.swap(v)//和原始v做了一个交换


//注意：匿名对象
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
//// 创建匿名对象
//MyClass(10); // 调用了 MyClass 的构造函数，创建了一个匿名对象




//预留空间
//reserve(int len)//预留len个元素长度，预留位置不初始化，元素不可访问

//统计开辟次数
//void test01()
//{
//	vector<int>v;
//	//利用reserve预留空间
//	v.reserve(1000);
//	int num = 0;
//	int* p = NULL;
//	for (int i = 0; i < 1000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])//空间拓展，内存会改变
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