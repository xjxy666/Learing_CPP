//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	friend ostream& operator<<(ostream& cout, Person p);
//
//	//利用成员函数重载 左移运算符 p.operator<<(cout) 简化版本 p << cout
//	//不会利用成员函数重载<<运算符 因为无法实现cout在左侧
//
//
//	Person();
//	Person(int a, int b);
//	~Person();
//
//private:
//	int m_A;
//	int m_B;
//};
//
//Person::Person()
//{
//}
//
//Person::Person(int a,int b):m_A(a),m_B(b)
//{
//}
//
//Person::~Person()
//{
//}
//
////只能利用全局函数左移运算符
//ostream& operator<<(ostream& cout ,Person p) {//本质 operator<<(cout,p) 简化cout << p 
//	cout << "p1.m_A = " << p.m_A << endl;
//	cout << "p1.m_B = " << p.m_B << endl;
//	return cout;
//}
//
//void test01() {
//	Person p1(10, 10);
//	cout << p1 << endl;
//}
//
//int main() {
//	test01();
//	return 0;
//}