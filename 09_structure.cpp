#include<iostream>
using namespace std;
#include<string>


////�ṹ�������û��Զ������������
////1.�﷨��struct �ṹ��{�ṹ���Ա�б�}
//struct Student
//{
//	string name;
//	int age;
//	int score;
//}s3;
//
////4Ƕ��ѧ��
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//	struct Student stu;
//};
//
// //5�ṹ������������
////1.ֵ����
//void printstudent1(struct Student s1)
//{
//	s1.age = 100;
//	cout << s1.age;
//}
//
////2.��ַ����
//void printstudent2( const struct Student *p)//6.const�βθ�Ϊָ�룬���Լ��ٿռ䣬���Ҳ��Ḵ�Ƴ��µĸ�����constֻ��
//{
//	/*p->age = 100;*///��ֹ�����
//	cout << p->age;
//};
//int main()
//{
//
//	////������ˣ�struct�ؼ��ֿ���ʡ��
//	//struct Student s1;//��һ���巽ʽ
//	//s1.name = "zjr";
//	//s1.age = 25;
//	//s1.score = 100;
//
//	//cout << s1.name << s1.age << s1.score;
//
//
//	//struct Student s2 = { "zjr",19,90 };//�ڶ����巽ʽ��
//	//cout << s2.name << s2.age << s2.score;
//
//	////�����ṹ��ʱ��˳�㴴���ṹ��������������巽ʽ
//	//s3.name = "zjr";
//	//s3.age = 24;
//	//s3.score = 80;
//
//	//2�ṹ������
//    //�﷨��struct �ṹ������ �������ơ�Ԫ�ظ�����={{}��{}��{}}
//	//struct Student array[3] = {
//	//	{"zjr",25,100},
//	//	{"smq",24,90},
//	//	{"wwx",24,0}
//	//};
//
//	////��ֵ
//	//array[2].name = "clx";
//
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	cout << array[i].name;
//	//}
//
//
//	//3�ṹ��ָ�룺ͨ��->���ʳ�Ա����
//
//	//Student s4 =
//	//{
//	//	"clx",18,100
//	//};
//
//	//struct Student* p = &s4;//���ص��ǽṹ����������
//	//cout<<p->name<<p->age<<p->score;//�ṹ��ָ��
//
//
//
//	//4.Ƕ��������
//	/*teacher t;
//	t.id = 10000;
//	t.age = 50;
//	t.name = "lao wang";
//	t.stu.age = 18;
//	t.stu.name = "syx";
//	t.stu.score = 100;
//	cout << t.stu.name;*/
//
//	//5.�ṹ��������������������
//	//ֵ����
//	
//	/*struct Student s1;
//	
//	s1.name = "zjr";
//	s1.age = 25;
//	s1.score = 100;*/
//
//
//	/*printstudent1(s1);*///ʵ�β��ı�
//	//��ַ����
//	//printstudent2(&s1);//�βθı䣬�ı���ʵ��
//
//	//cout << s1.age;
//
//	
//	
//	//6.const��ֹ�����
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