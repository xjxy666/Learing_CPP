//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	static void func() {
//		m_A = 100;
//		//m_B = 200;
//		cout << "static void func��������" << endl;
//	}
//	static int m_A;
//	int m_B;
//
//	Person() {
//		cout << "����" << endl;
//	}
//
//	~Person() {
//		cout << "����" << endl;
//	}
//};
//int Person::m_A = 10;
//
//void test01() {
//	Person p1;
//	cout << p1.m_A << endl;
//	p1.func();
//	cout << p1.m_A << endl;
//
//	/*Person::func();*/
//	cout << Person::m_A << endl;
//}
//
//int main() {
//	test01();
//
//	test01();
//
//	return 0;
//}