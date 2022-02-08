//#include <iostream>
//using namespace std;
//
//class Person
//{
//	
//public:
//
//	Person(int age) : m_Age (new int(age)){};
//	
//	~Person();
//
//	Person& operator=(Person& p) {
//		if (m_Age != nullptr) {
//			delete m_Age;
//			m_Age = nullptr;
//		}
//
//		//深拷贝
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//
//	int *m_Age;
//
//};
//
//Person::~Person()
//{
//	if (m_Age != nullptr) {
//		delete m_Age;
//		m_Age = nullptr;
//	}
//	
//}
//
//
//void test01() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1;
//	cout << "p1年龄" << *p1.m_Age << endl;
//	cout << "p2年龄" << *p2.m_Age << endl;
//	cout << "p3年龄" << *p3.m_Age << endl;
//}
//
//int main() {
//	test01();
//	return 0;
//}