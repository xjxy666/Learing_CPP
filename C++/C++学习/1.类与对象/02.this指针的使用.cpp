#include <iostream>
using namespace std;

class Person
{

public:
	Person(int age) {
		this->age = age;
	}

	int age;

	Person& personAddAge(Person &p) {
		this->age += p.age;
		return *this;
	}
};

void test01() {
	Person p1(18);
	cout << "p1的年龄是：" << p1.age << endl;
}

void test02() {

	Person p1(10);

	Person p2(10);

	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1).personAddAge(p1);
	cout << "p2的年龄是：" << p2.age << endl;
}


int main() {
	//test01();
	test02();
	return 0;
}