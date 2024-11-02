#include<iostream>
using namespace std;
#include<string>

//string容器
//本质是一个类
//char*是一个指针
//string是一个类，内部封装了char*，管理这个字符串，是一个char*的容器

//string内部封装了很多成员方法，find copy delete replace insert
//string管理char*所分配的内存，不用担心复制越界和取值越界，由类内部负责


//string构造函数
//string（）；创建一个空的字符串
//string（const char* s）；//使用字符串s初始化
//string（const string& str）；//使用一个string对象初始化另一个string对象
//string（int 你，char c）；//使用n个字符c初始化

//void test01()
//{
//	string s1;//默认构造
//	const char *str= "wwx";
//	string s2(str);
//	cout << s2 << endl;
//
//	string s3(s2);//拷贝构造
//	cout << s3 << endl;
//
//	string s4(10, 'a');
//		cout << s4 << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}



//string赋值操作
//string& operator=(const char* s)//char*类型字符串 赋值给当前的字符串
//string& operator=(cosnt string &s)//把字符串s赋值给当前字符串
//string& operator=(char c)//字符赋值给当前的字符串
//string& assign=(const char*s)//把字符串s赋值给当前字符串
//string& assign=(const char* ,int n)//把字符串前的n个字符赋值给当前的字符串
//string& assign=(const string &s)//把字符串s赋值给当前字符串
//string& assign=(int n,char c)//把n个字符c赋值给当前字符串



//void test01()
//{
//	string str1;
//	str1 = "wwx";
//	cout << str1 << endl;
//
//	string str2;
//	str2 = str1;
//
//	string str3;
//	str3 = 'a';
//
//	string str4;
//	str4.assign("clx");
//
//	string str5;
//	str5.assign("syx", 2);
//
//	string str6;
//	str6.assign(str5);
//
//	string str7;
//	str7.assign(10, 'w');
//
//}




//字符串拼接
//void test01()
//{
//	string str1 = "1";
//	str1 += "2";
//	cout << str1 << endl;
//
//	str1 += ':';
//	cout << str1 << endl;
//
//	string str2="clx123";
//	str1 += str2;
//	cout << str1 << endl;
//
//
//	string str3 = "I";
//	str3.append("love");
//	cout << str3 << endl;
//
//
//	str3.append("game 678", 6);
//	cout <<str3<< endl;
//
//	str3.append(str2);
//	cout << str3 << endl;
//
//	str3.append(str2, 1, 2);//从哪到哪
//	cout << str3 << endl;
//	str3.append(str2, 2, 4);//从哪个位置开始截取，截取几个字符
//	cout << str3<<endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}



//字符串查找和替换

//void test01()
//{
//	string str1 = "abcdefdeg";
//	int pos=str1.find("df");//find 默认是从第一次出现的地方开始查找，也可以改，返回值是int
//	cout << pos << endl;//没有所要查找的字符串会返回-1
//
//	//rfind
//	pos = str1.rfind("de");
//	cout << pos << endl;//rfind是从右往左查，find是从左往右查
//
//	//替换
//	string str2 = "abcdefg";
//	str2.replace(1, 3, "1111");//从1号位置起，3个字符，替换为“1111”
//	cout << str2 << endl;
//		
//	
//}
//int main()
//{
//	test01();
//	return 0;
//}




//字符串比较，按字符ASCII码逐个对比返回值0，1，-1

//void test01()
//{
//	string str1 = "clx";
//	string str2 = "clxwwx";
//		if (str1.compare(str2)<0)
//		{
//			cout << "da" << endl;
//		}
//}
//int main()
//{
//	test01();
//	return 0;
//}



//字符存取

//void test01()
//{
//	string str1 = "clxwwx";
//	cout<<str1<<endl;
//	//通过[]访问单个字符
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1[i] << endl;
//	}
//	cout << endl;
//	//通过at方式访问单个字符
//
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1.at(i) << endl;
//	}
//	cout << endl;
//
//
//	//修改单个字符
//	str1[0] = 'x';
//	cout << str1 << endl;
//	str1.at(1)='x';
//	cout << str1 << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}



//插入和删除


//void test01()
//{
//	string str = "llllu";
//	str.insert(3, "123");
//	cout << str << endl;
//
//	str.erase(3, 3);//从哪个位置删几个
//	cout << str << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}



//截取
//void test01()
//{
//	string str = "l234u";
//	string sub=str.substr(2, 3);//返回的是一个字符串
//	cout << sub << endl;
//
//
//	string mail = "zhangjiarui@gmail.com";
//	int pos = mail.find("@");
//	string username = mail.substr(0, pos);//截pos个
//	cout << username;
//}
//int main()
//{
//	test01();
//	return 0;
//}