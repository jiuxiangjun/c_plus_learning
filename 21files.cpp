//文件操作：数据持久化，因为运行时产生的数据都是临时数据，运行结束都被释放
//对文件操作要包含头文件<fstram>

//分类：文本文件：文件以文本的ASCII码形式储存在计算机中
//      二进制文件：二进制文件储存在计算机中，用户看不懂
//

//操作文件的三大类：1 ofstream：写操作
//                  2 ifstream：读操作
//                  3 fstream：读写操作




//写文件步骤
//1.包含头文件#include<fstream>
//2.创建流对象ofstream ofs；
//3.打开文件ofs.open("文件路径，打开方式");
//4.写数据ofs<<"写入的数据";
//5.关闭文件ofs.close();


//打开方式
//1.ios::in   为读文件而打开
//2.ios::out  为写文件而打开
//3.ios::ate  初始位置：文件尾
//4.ios::app  追加方式写文件
//5.ios::trunc 文件存在先删除，再创建
//6.ios::binary 二进制


//文件打开方式可以配合使用，利用| 操作符
//ios::binary | ios::out

#include<iostream>
using namespace std;
#include<fstream>
#include<string>

//void test01()
//{
//	ofstream ofs;
//	ofs.open("text.txt", ios::out);
//		ofs << "clx" << endl;
//		ofs << "wwx" << endl;
//		ofs.close();
//}
//int main()
//{
//	test01();
//	return 0;
//}


//读文件
//读文件步骤
//1.包含头文件#include<fstream>
//2.创建流对象ifstream ifs；
//3.打开文件ifs.open("文件路径，打开方式");判断是否打开成功
//4.读数据四种读取方式
//5.关闭文件ifs.close();


//void test01()
//{
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open()) //返回布尔类型，！代表取反。//此条代码判断是否打开成功
//	{
//		cout << "no" << endl;
//		return;
//	}


	//读文件4种方式

	//1
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/
	


//2

	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/



	//3
	/*string buf;
	while (getline(ifs,buf))
	{
		cout << buf << endl;
	}*/

	//4
	//char c;
	//while (c = ifs.get()!=EOF)//是否读到文件尾 end of file
	//{
	//	cout << c << endl;
	//}
	//ifs.close();
//}

//int main()
//{
//	test01();
//	return 0;
//}
