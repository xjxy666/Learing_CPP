#include <iostream>
using namespace std;

class Base
{
public:
	//���麯��
	//ֻҪ��һ�����麯���������Ϊ������
	virtual void func() = 0;

};

class Son :public Base
{
public:
	virtual void func() {
		cout << "func��������" << endl;
	}

};

void test01() {
	//Base b;//�������޷�ʵ��������
	//new Base;
	Son s;//���������д����Ĵ��麯��
	Base* base = new Son;//����ָ��ָ���������
	base->func();//����ָ������������
}

int main() {
	test01();
	return 0;
}