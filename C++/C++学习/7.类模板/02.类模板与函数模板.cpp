#include <iostream>
using namespace std;

template<class NameType, class AgeType = int>
class Person
{
public:
	Person() = default;
	Person(NameType name, AgeType age);
	void printPerson();
	NameType m_Name;
	AgeType m_Age;
};


template<class NameType, class AgeType>
Person<NameType, AgeType>::Person(NameType name, AgeType age)
{
	this->m_Name = name;
	this->m_Age = age;

}

template<class NameType, class AgeType>
void Person<NameType, AgeType>::printPerson()
{
	cout << "name = " << this->m_Name << endl;
	cout << "age = " << this->m_Age << endl;
}

//1.��ģ��û���Զ������Ƶ�
void test01() {
	Person<string, int> p1("�����", 1000);
	p1.printPerson();
}

//2.��ģ����ģ������б��п�����Ĭ�ϲ���
void test02() {
	Person<string, string> p2("��˽�", "����");
	p2.printPerson();
}

int main() {
	test01();
	test02();

	return 0;
}

