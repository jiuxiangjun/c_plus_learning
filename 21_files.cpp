//�ļ����������ݳ־û�����Ϊ����ʱ���������ݶ�����ʱ���ݣ����н��������ͷ�
//���ļ�����Ҫ����ͷ�ļ�<fstram>

//���ࣺ�ı��ļ����ļ����ı���ASCII����ʽ�����ڼ������
//      �������ļ����������ļ������ڼ�����У��û�������
//

//�����ļ��������ࣺ1 ofstream��д����
//                  2 ifstream��������
//                  3 fstream����д����




//д�ļ�����
//1.����ͷ�ļ�#include<fstream>
//2.����������ofstream ofs��
//3.���ļ�ofs.open("�ļ�·�����򿪷�ʽ");
//4.д����ofs<<"д�������";
//5.�ر��ļ�ofs.close();


//�򿪷�ʽ
//1.ios::in   Ϊ���ļ�����
//2.ios::out  Ϊд�ļ�����
//3.ios::ate  ��ʼλ�ã��ļ�β
//4.ios::app  ׷�ӷ�ʽд�ļ�
//5.ios::trunc �ļ�������ɾ�����ٴ���
//6.ios::binary ������


//�ļ��򿪷�ʽ�������ʹ�ã�����| ������
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


//���ļ�
//���ļ�����
//1.����ͷ�ļ�#include<fstream>
//2.����������ifstream ifs��
//3.���ļ�ifs.open("�ļ�·�����򿪷�ʽ");�ж��Ƿ�򿪳ɹ�
//4.���������ֶ�ȡ��ʽ
//5.�ر��ļ�ifs.close();


//void test01()
//{
//	ifstream ifs;
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open()) //���ز������ͣ�������ȡ����//���������ж��Ƿ�򿪳ɹ�
//	{
//		cout << "no" << endl;
//		return;
//	}


	//���ļ�4�ַ�ʽ

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
	//while (c = ifs.get()!=EOF)//�Ƿ�����ļ�β end of file
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
