#include <iostream>
using namespace std;

//加号运算符重载
class Person {
public:
	friend void test01();
	friend Person operator+(const Person& p1, int num);

	//成员运算符重载+号
	Person operator+(const Person& p);

	Person() = default;
	Person(int a, int b) : m_A(a), m_B(b) {};

private:
	int m_A;
	int m_B;
};

Person operator+(const Person& p1, int num) {
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}
//Person operator+(const	Person& p1, const Person& p2) {
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}


void test01() {


	Person p1(10, 10);
	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;

	Person p3 = p1 + p2;
	//成员函数本质 p3 = p1.operator+(p2);
	//全局函数本质 p3 = operator+(p1,p2);
	//运算符重载也可以发生函数重载
	cout << p3.m_A << " " << p3.m_B << endl;

	p3 = p1 + 15;

	cout << p3.m_A << " " << p3.m_B << endl;
	cout << p1.m_A << " " << p1.m_B << endl;
}

//1.成员函数重载
Person Person::operator+(const Person& p) {

	//this->m_A = this->m_A + p.m_A;
	//this->m_B = this->m_B + p.m_B;
	//return *this;
	Person temp;
	temp.m_A = this->m_A + p.m_A;
	temp.m_B = this->m_A + p.m_A;
	return temp;
};





int main() {
	test01();
	return 0;
}