#include<iostream>
using namespace std;
#include<string>

//string����
//������һ����
//char*��һ��ָ��
//string��һ���࣬�ڲ���װ��char*����������ַ�������һ��char*������

//string�ڲ���װ�˺ܶ��Ա������find copy delete replace insert
//string����char*��������ڴ棬���õ��ĸ���Խ���ȡֵԽ�磬�����ڲ�����


//string���캯��
//string����������һ���յ��ַ���
//string��const char* s����//ʹ���ַ���s��ʼ��
//string��const string& str����//ʹ��һ��string�����ʼ����һ��string����
//string��int �㣬char c����//ʹ��n���ַ�c��ʼ��

//void test01()
//{
//	string s1;//Ĭ�Ϲ���
//	const char *str= "wwx";
//	string s2(str);
//	cout << s2 << endl;
//
//	string s3(s2);//��������
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



//string��ֵ����
//string& operator=(const char* s)//char*�����ַ��� ��ֵ����ǰ���ַ���
//string& operator=(cosnt string &s)//���ַ���s��ֵ����ǰ�ַ���
//string& operator=(char c)//�ַ���ֵ����ǰ���ַ���
//string& assign=(const char*s)//���ַ���s��ֵ����ǰ�ַ���
//string& assign=(const char* ,int n)//���ַ���ǰ��n���ַ���ֵ����ǰ���ַ���
//string& assign=(const string &s)//���ַ���s��ֵ����ǰ�ַ���
//string& assign=(int n,char c)//��n���ַ�c��ֵ����ǰ�ַ���



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




//�ַ���ƴ��
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
//	str3.append(str2, 1, 2);//���ĵ���
//	cout << str3 << endl;
//	str3.append(str2, 2, 4);//���ĸ�λ�ÿ�ʼ��ȡ����ȡ�����ַ�
//	cout << str3<<endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}



//�ַ������Һ��滻

//void test01()
//{
//	string str1 = "abcdefdeg";
//	int pos=str1.find("df");//find Ĭ���Ǵӵ�һ�γ��ֵĵط���ʼ���ң�Ҳ���Ըģ�����ֵ��int
//	cout << pos << endl;//û����Ҫ���ҵ��ַ����᷵��-1
//
//	//rfind
//	pos = str1.rfind("de");
//	cout << pos << endl;//rfind�Ǵ�������飬find�Ǵ������Ҳ�
//
//	//�滻
//	string str2 = "abcdefg";
//	str2.replace(1, 3, "1111");//��1��λ����3���ַ����滻Ϊ��1111��
//	cout << str2 << endl;
//		
//	
//}
//int main()
//{
//	test01();
//	return 0;
//}




//�ַ����Ƚϣ����ַ�ASCII������Աȷ���ֵ0��1��-1

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



//�ַ���ȡ

//void test01()
//{
//	string str1 = "clxwwx";
//	cout<<str1<<endl;
//	//ͨ��[]���ʵ����ַ�
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1[i] << endl;
//	}
//	cout << endl;
//	//ͨ��at��ʽ���ʵ����ַ�
//
//	for (int i = 0; i < str1.size(); i++)
//	{
//		cout << str1.at(i) << endl;
//	}
//	cout << endl;
//
//
//	//�޸ĵ����ַ�
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



//�����ɾ��


//void test01()
//{
//	string str = "llllu";
//	str.insert(3, "123");
//	cout << str << endl;
//
//	str.erase(3, 3);//���ĸ�λ��ɾ����
//	cout << str << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}



//��ȡ
//void test01()
//{
//	string str = "l234u";
//	string sub=str.substr(2, 3);//���ص���һ���ַ���
//	cout << sub << endl;
//
//
//	string mail = "zhangjiarui@gmail.com";
//	int pos = mail.find("@");
//	string username = mail.substr(0, pos);//��pos��
//	cout << username;
//}
//int main()
//{
//	test01();
//	return 0;
//}