#include <iostream>
using namespace std;

class Person
{
public:
	Person();
	Person(int a, int b);
	~Person();

private:
	int m_A;
	int m_B;
};

Person::Person()
{
}

Person::Person(int a, int b) :m_A(a), m_B(b)
{
}


Person::~Person()
{
}

void test01() {
	Person p1(10, 10);
}

int main() {

	return 0;
}