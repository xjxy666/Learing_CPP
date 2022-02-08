#include <iostream>
using namespace std;

class Person
{
public:
	Person();
	Person(string name, int age);
	~Person();

	bool operator==(Person& p) {
		if (m_Age == p.m_Age && m_Name == p.m_Name) return true;
		return false;
	}

	bool operator!=(Person& p) {
		if (m_Age == p.m_Age && m_Name == p.m_Name) return false;
		return true;
	}

	string m_Name;
	int m_Age;

};

Person::Person()
{
}

Person::Person(string name, int age) :m_Name(name), m_Age(age)
{
}




Person::~Person()
{
}



void test01() {
	Person p1("Tom", 18);
	Person p2("Tom", 18);
	if (p1 == p2) {
		cout << "p1和p2相等" << endl;
	}
	else if (p1 != p2) {
		cout << "p1和p2不相等" << endl;
	}
}

int main() {
	test01();
	return 0;
}