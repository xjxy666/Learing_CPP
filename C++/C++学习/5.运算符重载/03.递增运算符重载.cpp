#include <iostream>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger();
	~MyInteger();

	//重载前置++运算符
	MyInteger& operator++() {
		m_Num++;
		return *this;
	}


	//重载后置++运算符
	//int代表占位参数，可以区分前置和后置递增
	MyInteger operator++(int) { //不能返回局部变量的引用
		auto temp = *this;
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

MyInteger::MyInteger()
{
	m_Num = 0;
}

MyInteger::~MyInteger()
{
}

ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num << endl;
	return cout;
}

void test01() {
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {
	test01();
	return 0;
}