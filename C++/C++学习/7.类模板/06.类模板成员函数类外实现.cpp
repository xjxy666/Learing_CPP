//#include <iostream>
//using namespace std;
//
////类模板成员类外实现
//template <class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template <class T1, class T2>
//Person<T1,T2>::Person(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template <class T1, class T2>
//void Person<T1,T2>::showPerson() {
//	cout << "name = " << m_Name << endl;
//	cout << "age = " << m_Age << endl;
//}
//
//template <class T>
//void printPerson(T& p) {
//	p.showPerson();
//}
//
//void test01() {
//	Person<string, int> p1("张三",18);
//	printPerson(p1);
//}
//
//int main() {
//	test01();
//	//test02();
//	//test03();
//	system("pause");
//	return 0;
//}
