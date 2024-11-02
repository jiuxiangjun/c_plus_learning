#include<iostream>
using namespace std;
#include<deque>


//deque:双端数组可以头尾进行插入删除操作
//deque头端操作效率低，数据越大，效率越低
//deque头端效率高
//deque访问元素快



//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//只读
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//
//	deque<int>d2= d1;
//	printDeque(d1);
//
//	deque<int>d3 ;
//	d3.assign(d1.begin(), d1.end());//end是开区间
//	printDeque(d3);
//
//	//n个elem方式赋值
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//赋值
//=
//assign(beg,end)
//assign(n,ele)



//容量和大小
//empty()//判断容器是否为空
//size（）//返回容器中元素的个数
//resize（int num)//重新指定容器的长度为num，若容器变长，则以默认值填充新位置，容器变短则删除超出长度的容器
//resize(int num,elem)//重新指定容器的长度为num，若容器变长，则以elem值填充新位置，容器变短则删除超出长度的容器




//插入和删除
//push_back(ele);尾部插入
//push_front(ele)头部插入
//pop_back();删除最后一个元素
//pop_front()删除第一个数据
//insert(pos,ele)定位插入ele，返回新数据位置d1.insert(d1.begin(),1000)
//insert(pos,int count,ele)定位插入count个ele，无返回值
//insert(pos,beg,endl)在pos位置插入区间数据，无返回值
//erase(pos)返回下一个数据位置
//erase(start,end)，返回下一个数据位置
//clear()


//存取
//at()返回索引数据
//[]=at（）
//front()返回元素第一个数据元素
//back()返回最后一个


//排序操作
//sort(d.begin(),de.end())//默认从小到大升序
//对于支持随机访问的迭代器的容器，都可以利用sort对其直接排序