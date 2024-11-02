#include<iostream>
using namespace std;

//多态
//分类：1静态多态：函数重载和运算符重载属于静态多态，复用函数名
//      2动态多态：派生类和虚函数实现运行时的多态
//区别：1静态多态的函数地址早绑定-编译阶段确定函数地址
//      2动态多态的函数地址晚绑定-运行阶段确定函数地址



//动态多态满足条件
//1.有继承关系
//2.子类要重写父类的虚函数


//动态多态使用：父类的指针或者引用 指向子类对象

//class Animal
//{
//public:
//	virtual void speak()//晚绑定，用猫,或者用狗，看对象
//	{
//		cout << "1" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	 void speak()//重写：子类和父类 函数返回值 函数名 参数列表 完全相同
//	{
//		cout << "2" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "3" << endl;
//	}
//};
//
//
////地址早绑定 在编译阶段确定函数地址
//void doSpeak(Animal & animal)//父类的引用，接受一个子类的对象，Animal&animal=cat
//{                             //用的Animal里面speak函数，如果想用猫里面的speak函数，那么函数地址不能早绑定，把virtual 加到动物那
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);//动态多态使用：父类的指针或者引用 指向子类对象
//}
//
//int main()
//{
//	test01();
//	return 0;
//}






//多态底层原理

//看截图




//纯虚函数和抽象类
//纯虚函数：virtual 返回值 函数名（参数列表）=0；
//当类中有了纯虚函数，这个类也称为抽象类
//抽象类无法实例化对象
//子类必须重写抽象类中的纯虚函数，否则无法实例化对象

//class Base
//{
//public:
//	virtual void func() = 0;
//};
//
//class Son : public Base
//{
//public:
//	virtual void func() { cout << "1" << endl; }//重写是带括号的不能写0
//};
//
//void test01()
//{
//	Son s1;
//	s1.func();
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}








//虚析构和纯虚析构
//多态使用时，如果有子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决方式：将父类中的析构函数改为虚析构或者纯虚析构


//虚析构和纯虚析构共性：
//1.都可以解决父类指针释放子类现象
//都需要有具体的函数实现


//区别：如果是纯虚析构，该类属于抽象类，无法实例化对象


//语法
//虚析构：virtual~类名（）{}
//纯虚  ：virtual~类名（）=0；
//        类名：：~类名（）{}



//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "4" << endl;
//	}
//	
//	//virtual ~Animal() { cout << "5" << endl; }//改进加一个virtual利用虚析构解决父类指针释放子类对象时，不干净的问题、
//   //纯虚析构
//	virtual ~Animal() = 0;
//
//	virtual void speak() = 0;//纯虚析构要有声明加实现，但是有了纯虚析构也变成抽象类了
//};
//Animal:: ~Animal() { cout << "6" << endl; }
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "3" << endl;
//		m_Name=new string(name);
//	}
//	virtual void speak()
//	{
//		cout << "1" <<*m_Name<< endl;
//	}
//	~Cat()
//	{
//		if (m_Name!=NULL)
//		{
//			cout << "2" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string *m_Name;
//};
//
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();//父类指针在析构时，不会调用子类中析构函数，导致如果子类中有堆区属性，出现内存泄露
//	delete animal;
//}
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//如果子类中没有堆区数据，可以不写虚析构或者纯虚析构