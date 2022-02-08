#include <iostream>
using namespace std;

class Base
{
public:
	Base();
	~Base();
	static int m_A;

private:

};

int Base::m_A = 100;

Base::Base()
{
	cout << "Base���캯��" << endl;
}

Base::~Base()
{
	cout << "Base��������" << endl;
}
class Son :public Base
{
public:
	Son();
	~Son();
	static int m_A;
	int m_B;

private:

};
int Son::m_A = 200;

Son::Son()
{
	m_B = 300;
	cout << "Son���캯��" << endl;
}

Son::~Son()
{
	cout << "Son��������" << endl;
}

void test01() {
	Son son;
	cout << son.m_A << endl;
	cout << son.Base::m_A << endl;

	cout << Son::m_A << endl;
	cout << Son::Base::m_A << endl;
	cout << Son::m_B << endl;
}
int main() {
	test01();
	return 0;
}