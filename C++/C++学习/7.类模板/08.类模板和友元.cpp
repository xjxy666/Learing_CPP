#include <iostream>
#include <string>
using namespace std;


template<class T1, class T2>
class Person;

template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "name = " << p.m_Name << endl;
	cout << "age  = " << p.m_Age << endl;
}

//ͨ��ȫ�ֺ�����ӡperson��Ϣ

template<class T1, class T2>
class Person
{
	//ȫ�ֺ�������ʵ��
	friend void printPerson(Person<T1, T2> p) {
		cout << "name = " << p.m_Name << endl;
		cout << "age  = " << p.m_Age << endl;
	}


	//ȫ�ֺ�������ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪��
	friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age);

private:
	T1 m_Name;
	T2 m_Age;
};



template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
	this->m_Name = name;
	this->m_Age = age;
}


void test01() {
	Person<string, int> p1("����", 18);
	printPerson2(p1);

}

int main() {
	test01();
	//test02();
	//test03();
	system("pause");
	return 0;
}
