//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	friend ostream& operator<<(ostream& cout, Person p);
//
//	//���ó�Ա�������� ��������� p.operator<<(cout) �򻯰汾 p << cout
//	//�������ó�Ա��������<<����� ��Ϊ�޷�ʵ��cout�����
//
//
//	Person();
//	Person(int a, int b);
//	~Person();
//
//private:
//	int m_A;
//	int m_B;
//};
//
//Person::Person()
//{
//}
//
//Person::Person(int a,int b):m_A(a),m_B(b)
//{
//}
//
//Person::~Person()
//{
//}
//
////ֻ������ȫ�ֺ������������
//ostream& operator<<(ostream& cout ,Person p) {//���� operator<<(cout,p) ��cout << p 
//	cout << "p1.m_A = " << p.m_A << endl;
//	cout << "p1.m_B = " << p.m_B << endl;
//	return cout;
//}
//
//void test01() {
//	Person p1(10, 10);
//	cout << p1 << endl;
//}
//
//int main() {
//	test01();
//	return 0;
//}