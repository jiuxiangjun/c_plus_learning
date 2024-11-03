#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<functional>
#include<numeric>



//常用算法
//for_each(beg,end,函数对象或者普通函数)-遍历
//transform(beg1,end1,beg2,函数或者仿函数)搬运容器到另一个容器，目标容器要提前开辟空间
//find（beg,end,value)
//find_if(beg,end,函数或者谓词返回的是bool类型仿函数）按条件查找//比如年龄大于多少
//adjacent_find（beg,end)查找相邻重复元素
//binary_search(beg,end，value)二分查找,找到返回真，找不到返回假,无序序列不可用
//count（beg,end,value）可以重载==，将value换成类来比较
//count_if（beg,end,谓词)按条件统计元素个数

//sort（beg,end,谓词）
//random_shuffle(beg,end)洗牌 指定范围内的元素随机调整次序
//merge(beg1,end1,beg2,end2,dest)合并两个容器，并放到另一个容器中,这两个容器必须是有序的，且顺序一致，dest是目标容器开始迭代器
//reverse(beg,end)取反


//copy(beg,end,dest)
//replace(beg,end,oldvalue,newvalue)旧换新
//replace_if(beg,end,_pred,newvalue)条件旧换新
//swap(c1,c2)



//算术生成算法
//accumulate(beg,end,value起始值)计算区间内容器元素总和
//fill(beg,end,value填充值)向容器内添加元素

//集合算法
//set_intersection（beg1,end1,beg2,end2,dest)求两容器交集，提前开辟空间min(v1.size(),v2.size())可以取小的那一个,返回的是交集的最后一个迭代器end
//set_union（beg1,end1,beg2,end2,dest)   resize（v1.size()+v2.size()）并集   返回的是交集的最后一个迭代器end
//set_difference（beg1,end1,beg2,end2,dest)   开辟选最大容器空间就行  差集;不是交集的部分，但是看清是v1还是v2，在前面的是   返回的是交集的最后一个迭代器end
//这三个集合必须有序
