#include <iostream>
using namespace std;

class Person
{
public:
	Person();
	~Person();

	void showClassName() {
		cout << "this is Person class" << endl;
	}

	void showPersonAge() {

		if (this == nullptr) return;
		//����ԭ������Ϊ�����ָ���ǿ�
		cout << "age= " << this->m_Age << endl;
	}
	int m_Age;



private:

};

void test01() {
	Person* p = nullptr;
	p->showClassName();
	Person p1;
	p1.showPersonAge();
	p->showPersonAge();
}
Person::Person()
{
}

Person::~Person()
{
}

int main() {
	test01();
	return 0;
}