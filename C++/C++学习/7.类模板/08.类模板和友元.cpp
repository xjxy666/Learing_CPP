//#include <iostream>
//#include <string>
//using namespace std;
//
//
//template<class T1, class T2>
//class Person;
//
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "name = " << p.m_Name << endl;
//	cout << "age  = " << p.m_Age << endl;
//}
//
////通过全局函数打印person信息
//
//template<class T1, class T2>
//class Person
//{
//	//全局函数类内实现
//	friend void printPerson(Person<T1, T2> p) {
//		cout << "name = " << p.m_Name << endl;
//		cout << "age  = " << p.m_Age << endl;
//	}
//	
//
//	//全局函数类外实现
//	//加空模板参数列表
//	//如果全局函数是类外实现，需要让编译器提前知道
//	friend void printPerson2<>(Person<T1, T2> p);
//
//public:
//	Person(T1 name, T2 age);
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
//
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//
//void test01() {
//	Person<string, int> p1("张三", 18);
//	printPerson2(p1);
//
//}
//
//int main() {
//	test01();
//	//test02();
//	//test03();
//	system("pause");
//	return 0;
//}
