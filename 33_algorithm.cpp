#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<functional>
#include<numeric>



//�����㷨
//for_each(beg,end,�������������ͨ����)-����
//transform(beg1,end1,beg2,�������߷º���)������������һ��������Ŀ������Ҫ��ǰ���ٿռ�
//find��beg,end,value)
//find_if(beg,end,��������ν�ʷ��ص���bool���ͷº���������������//����������ڶ���
//adjacent_find��beg,end)���������ظ�Ԫ��
//binary_search(beg,end��value)���ֲ���,�ҵ������棬�Ҳ������ؼ�,�������в�����
//count��beg,end,value����������==����value���������Ƚ�
//count_if��beg,end,ν��)������ͳ��Ԫ�ظ���

//sort��beg,end,ν�ʣ�
//random_shuffle(beg,end)ϴ�� ָ����Χ�ڵ�Ԫ�������������
//merge(beg1,end1,beg2,end2,dest)�ϲ��������������ŵ���һ��������,��������������������ģ���˳��һ�£�dest��Ŀ��������ʼ������
//reverse(beg,end)ȡ��


//copy(beg,end,dest)
//replace(beg,end,oldvalue,newvalue)�ɻ���
//replace_if(beg,end,_pred,newvalue)�����ɻ���
//swap(c1,c2)



//���������㷨
//accumulate(beg,end,value��ʼֵ)��������������Ԫ���ܺ�
//fill(beg,end,value���ֵ)�����������Ԫ��

//�����㷨
//set_intersection��beg1,end1,beg2,end2,dest)����������������ǰ���ٿռ�min(v1.size(),v2.size())����ȡС����һ��,���ص��ǽ��������һ��������end
//set_union��beg1,end1,beg2,end2,dest)   resize��v1.size()+v2.size()������   ���ص��ǽ��������һ��������end
//set_difference��beg1,end1,beg2,end2,dest)   ����ѡ��������ռ����  �;���ǽ����Ĳ��֣����ǿ�����v1����v2����ǰ�����   ���ص��ǽ��������һ��������end
//���������ϱ�������
