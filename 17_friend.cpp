#include<iostream>
using namespace std;

//friend:��һ������������ ������һ�����е�˽�г�Ա



//����ʵ�֣�
//1ȫ�ֺ�������Ԫ
//2������Ԫ
//3��Ա��������Ԫ


//ȫ�ֺ�������Ԫ
//class Building
//{
//	//friend void goodfriend(Building* building);//ȫ�ֺ�������Ԫ
//
//	//friend class Goodfriend;//2������Ԫ
//public:
//	//Building();//2������Ԫ
//	/*Building()
//	{
//		m_SittingRoom = "1";
//		m_BedRoom = "2";
//	}*///ȫ�ֺ�������Ԫ
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};

//1ȫ�ֺ�������Ԫ

//void goodfriend(Building * building)
//{
//	cout << building->m_SittingRoom << endl;
//	
//	cout << building->  m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodfriend(&building);
//}

//2������Ԫ
//class Goodfriend
//{
//public:
//	Goodfriend();
//	void visit();
//	Building* building;
//};
////����д��Ա����
//Building::Building()
//{
//	m_SittingRoom = "1";
//	m_BedRoom = "2";
//}
//Goodfriend::Goodfriend()
//{
//	building = new Building;
//}
//
//void Goodfriend::visit()
//{
//	cout << building->m_SittingRoom << endl;
//
//	cout << building->m_BedRoom << endl;
//}
//void test02()
//{
//	Goodfriend gf;
//	gf.visit();
//}


//class Building;
//class Goodfriend
//{
//public:
//	Goodfriend();
//
//	void visit();
//	void visit2();
//
//	Building* building;
//};
//
//class Building
//{
//	friend void Goodfriend::visit();//
//public:
//	Building();
//public:
//
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//Building::Building()
//{
//	m_SittingRoom = "1";
//	m_BedRoom = "2";
//}
//Goodfriend::Goodfriend()
//{
//
//	building = new Building;
//}
//
//void Goodfriend::visit()
//{
//	cout << building->m_SittingRoom << endl;
//
//	cout << building->m_BedRoom << endl;//������
//}
//void Goodfriend::visit2()
//{
//	cout << building->m_SittingRoom << endl;
//
//	//cout << building->m_BedRoom << endl;
//}
//
//void test03()
//{
//	Goodfriend gf;
//	gf.visit();
//	gf.visit2();
//}
//
//
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}