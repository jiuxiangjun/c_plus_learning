#include<iostream>
using namespace std;
#include<deque>


//deque:˫���������ͷβ���в���ɾ������
//dequeͷ�˲���Ч�ʵͣ�����Խ��Ч��Խ��
//dequeͷ��Ч�ʸ�
//deque����Ԫ�ؿ�



//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)//ֻ��
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
//	d3.assign(d1.begin(), d1.end());//end�ǿ�����
//	printDeque(d3);
//
//	//n��elem��ʽ��ֵ
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


//��ֵ
//=
//assign(beg,end)
//assign(n,ele)



//�����ʹ�С
//empty()//�ж������Ƿ�Ϊ��
//size����//����������Ԫ�صĸ���
//resize��int num)//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã����������ɾ���������ȵ�����
//resize(int num,elem)//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�ã����������ɾ���������ȵ�����




//�����ɾ��
//push_back(ele);β������
//push_front(ele)ͷ������
//pop_back();ɾ�����һ��Ԫ��
//pop_front()ɾ����һ������
//insert(pos,ele)��λ����ele������������λ��d1.insert(d1.begin(),1000)
//insert(pos,int count,ele)��λ����count��ele���޷���ֵ
//insert(pos,beg,endl)��posλ�ò����������ݣ��޷���ֵ
//erase(pos)������һ������λ��
//erase(start,end)��������һ������λ��
//clear()


//��ȡ
//at()������������
//[]=at����
//front()����Ԫ�ص�һ������Ԫ��
//back()�������һ��


//�������
//sort(d.begin(),de.end())//Ĭ�ϴ�С��������
//����֧��������ʵĵ�����������������������sort����ֱ������