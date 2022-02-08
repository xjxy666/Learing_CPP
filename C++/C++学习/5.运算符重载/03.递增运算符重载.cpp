#include <iostream>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger();
	~MyInteger();

	//����ǰ��++�����
	MyInteger& operator++() {
		m_Num++;
		return *this;
	}


	//���غ���++�����
	//int����ռλ��������������ǰ�úͺ��õ���
	MyInteger operator++(int) { //���ܷ��ؾֲ�����������
		auto temp = *this;
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

MyInteger::MyInteger()
{
	m_Num = 0;
}

MyInteger::~MyInteger()
{
}

ostream& operator<<(ostream& cout, MyInteger myint) {
	cout << myint.m_Num << endl;
	return cout;
}

void test01() {
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main() {
	test01();
	return 0;
}