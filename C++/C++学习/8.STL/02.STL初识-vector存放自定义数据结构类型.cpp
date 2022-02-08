#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

class Person
{
public:
	Person(string name,int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test01() {
	vector<Person> v;
	Person p1("����", 18);
	Person p2("����", 28);
	Person p3("����", 38);
	Person p4("����", 48);
	Person p5("����", 58);

	//���������������
	v.emplace_back(p1);
	v.emplace_back(p2);
	v.emplace_back(p3);
	v.emplace_back(p4);
	v.emplace_back(p5);

	//���������е�����
	for (vector<Person> ::iterator it = v.begin(); it != v.end(); it++) {
		cout << "������" << (*it).m_Name  <<" ���䣺" <<(*it).m_Age << endl;
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;

	}

}

void test02() {
	vector<Person*> v;
	Person p1("����", 18);
	Person p2("����", 28);
	Person p3("����", 38);
	Person p4("����", 48);
	Person p5("����", 58);

	//���������������
	v.emplace_back(&p1);
	v.emplace_back(&p2);
	v.emplace_back(&p3);
	v.emplace_back(&p4);
	v.emplace_back(&p5);

	//���������е�����
	for (vector<Person*> ::iterator it = v.begin(); it != v.end(); it++) {
		cout << "������" << (*it)->m_Name << " ���䣺" << (*it)->m_Age << endl;
		cout << "������" << (**it).m_Name << " ���䣺" << (**it).m_Age << endl;

	}

}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}