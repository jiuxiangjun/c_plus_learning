#include<iostream>
using namespace std;

//friend:让一个函数或者类 访问另一个类中的私有成员



//三种实现：
//1全局函数做友元
//2类做友元
//3成员函数做友元


//全局函数做友元
//class Building
//{
//	//friend void goodfriend(Building* building);//全局函数做友元
//
//	//friend class Goodfriend;//2类做友元
//public:
//	//Building();//2类做友元
//	/*Building()
//	{
//		m_SittingRoom = "1";
//		m_BedRoom = "2";
//	}*///全局函数做友元
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};

//1全局函数做友元

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

//2类做友元
//class Goodfriend
//{
//public:
//	Goodfriend();
//	void visit();
//	Building* building;
//};
////类外写成员函数
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
//	cout << building->m_BedRoom << endl;//有问题
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