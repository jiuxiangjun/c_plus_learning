#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
//函数对象（仿函数）
//是一个类，不是一个函数
//可以向普通函数一样调用，有参数有返回值
//超出普通函数的概念是函数对象可以有自己的状态
//函数对象可以作为参数传递



//可以向普通函数一样调用，有参数有返回值
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
////超出普通函数的概念是函数对象可以有自己的状态
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
//	int count;//记录内部自己的状态
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
////函数对象可以作为参数传递
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





//谓词：返回布尔类型的仿函数
//如果operator()接受一个参数，一元谓词
//如果operator()接受两个参数，二元谓词

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
//	//有没有大于5的数字
//	vector<int>::iterator it=find_if(v.begin(), v.end(), GreaterFive());//传入匿名对象
//	if (it == v.end())//没找到回到end，找到了返回是一个迭代器
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


//二元谓词

//class Greater {
//public:
//    bool operator()(int a, int b) const {
//        return a > b;  // 如果 a > b，则返回 true
//    }
//};
//
//int main() {
//    vector<int> vec = { 3, 1, 4, 1, 5, 9 };
//
//    // 使用二元谓词 Greater 对 vec 进行排序
//    sort(vec.begin(), vec.end(), Greater());
//
//    cout << "Sorted in descending order: ";
//    for (int n : vec) //将vec中的每个元素都赋值给n，并在循环体中使用n
//    {
//        cout << n << " ";
//    }
//    cout << endl;
//
//    return 0;
//}







//内建函数对象
//算数仿函数
//关系仿函数
//逻辑仿函数
//要包含#include<functional>



//算术
//加减乘除 取模（二元运算）plus minus multiplies divides modulus
//取反（一元运算）negate

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



//关系
//equal_to
//not_equal_to
//greater
//greater_equal
//less
//less_equal


//sort(v.beg,v.end,greater<int>())降序了,内建函数对象




//逻辑
//logical_and
//logical_or
//logical_not

