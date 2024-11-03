#include<iostream>
using namespace std;
#include<list>

//链表

// 创建
//构造函数
//默认，区间，n elem 拷贝

//引用只读


//赋值交换
//=
//assign区间或者n ele
//swap



//大小
//size
//empty
//resize（n ele）或者（n）默认删除，默认添加



//插入删除
//push_back(ele)
//pop_back
//push_front(ele)
//pop_front()
//insert(pos,ele)  
//list<int>::iterator it=L.begin();
// L.insert(++it,1000);也可以迭代器偏移这么插入
//insert(pos,n,ele)
//insert(pos,beg,end)
//clear
//erase(beg,end)
//erase
//remove(ele)删除与容器中所有与ele值匹配的元素



//容器存取
//front返回第一个
//back返回最后一个
//不能用[]访问也不能at
//因为list本质是列表，不是连续线性空间储存数据，迭代器不支持随机访问
//支持双向++或者--，不能+1或者-1




//反转排序
//reverse反转列表L1.reverse
//sort（）//所有不支持随机访问迭代器的容器，不可以用标准算法
//sort(L1.begin(),L1.end())错误的
//所有不支持随机访问迭代器的容器，会提供内部算法
//L1.sort()成员函数，这是对的


