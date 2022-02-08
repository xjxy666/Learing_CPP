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
	Person p1("张三", 18);
	Person p2("李四", 28);
	Person p3("王五", 38);
	Person p4("赵六", 48);
	Person p5("孙七", 58);

	//向容器中添加数据
	v.emplace_back(p1);
	v.emplace_back(p2);
	v.emplace_back(p3);
	v.emplace_back(p4);
	v.emplace_back(p5);

	//遍历容器中的数据
	for (vector<Person> ::iterator it = v.begin(); it != v.end(); it++) {
		cout << "姓名：" << (*it).m_Name  <<" 年龄：" <<(*it).m_Age << endl;
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;

	}

}

void test02() {
	vector<Person*> v;
	Person p1("张三", 18);
	Person p2("李四", 28);
	Person p3("王五", 38);
	Person p4("赵六", 48);
	Person p5("孙七", 58);

	//向容器中添加数据
	v.emplace_back(&p1);
	v.emplace_back(&p2);
	v.emplace_back(&p3);
	v.emplace_back(&p4);
	v.emplace_back(&p5);

	//遍历容器中的数据
	for (vector<Person*> ::iterator it = v.begin(); it != v.end(); it++) {
		cout << "姓名：" << (*it)->m_Name << " 年龄：" << (*it)->m_Age << endl;
		cout << "姓名：" << (**it).m_Name << " 年龄：" << (**it).m_Age << endl;

	}

}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}