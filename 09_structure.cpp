#include<iostream>
using namespace std;
#include<string>


////结构体属于用户自定义的数据类型
////1.语法：struct 结构名{结构体成员列表}
//struct Student
//{
//	string name;
//	int age;
//	int score;
//}s3;
//
////4嵌套学生
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct Student stu;
//};
//
// //5结构体做函数参数
////1.值传递
//void printstudent1(struct Student s1)
//{
//	s1.age = 100;
//	cout << s1.age;
//}
//
////2.地址传递
//void printstudent2( const struct Student *p)//6.const形参改为指针，可以减少空间，而且不会复制出新的副本，const只读
//{
//	/*p->age = 100;*///防止误操作
//	cout << p->age;
//};
//int main()
//{
//
//	////具体的人，struct关键字可以省略
//	//struct Student s1;//第一定义方式
//	//s1.name = "zjr";
//	//s1.age = 25;
//	//s1.score = 100;
//
//	//cout << s1.name << s1.age << s1.score;
//
//
//	//struct Student s2 = { "zjr",19,90 };//第二定义方式；
//	//cout << s2.name << s2.age << s2.score;
//
//	////创建结构体时，顺便创建结构体变量，第三定义方式
//	//s3.name = "zjr";
//	//s3.age = 24;
//	//s3.score = 80;
//
//	//2结构体数组
//    //语法：struct 结构体名称 数组名称【元素个数】={{}，{}，{}}
//	//struct Student array[3] = {
//	//	{"zjr",25,100},
//	//	{"smq",24,90},
//	//	{"wwx",24,0}
//	//};
//
//	////赋值
//	//array[2].name = "clx";
//
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	cout << array[i].name;
//	//}
//
//
//	//3结构体指针：通过->访问成员属性
//
//	//Student s4 =
//	//{
//	//	"clx",18,100
//	//};
//
//	//struct Student* p = &s4;//返回的是结构体数据类型
//	//cout<<p->name<<p->age<<p->score;//结构体指针
//
//
//
//	//4.嵌套在上面
//	/*teacher t;
//	t.id = 10000;
//	t.age = 50;
//	t.name = "lao wang";
//	t.stu.age = 18;
//	t.stu.name = "syx";
//	t.stu.score = 100;
//	cout << t.stu.name;*/
//
//	//5.结构体做函数参数，在上面
//	//值传递
//	
//	/*struct Student s1;
//	
//	s1.name = "zjr";
//	s1.age = 25;
//	s1.score = 100;*/
//
//
//	/*printstudent1(s1);*///实参不改变
//	//地址传递
//	//printstudent2(&s1);//形参改变，改变了实参
//
//	//cout << s1.age;
//
//	
//	
//	//6.const防止误操作
//
//	
//
//	struct Student s1;
//
//	s1.name = "zjr";
//	s1.age = 25;
//	s1.score = 100;
//
//
//	printstudent2(&s1);
//
//	return  0;
//}