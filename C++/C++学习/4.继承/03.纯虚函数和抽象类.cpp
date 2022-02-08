#include <iostream>
using namespace std;

class Base
{
public:
	//纯虚函数
	//只要有一个纯虚函数，这个类为抽象类
	virtual void func() = 0;

};

class Son :public Base
{
public:
	virtual void func() {
		cout << "func函数调用" << endl;
	}

};

void test01() {
	//Base b;//抽象类无法实例化对象
	//new Base;
	Son s;//子类必须重写父类的纯虚函数
	Base* base = new Son;//父类指针指向子类对象
	base->func();//父类指针调用子类对象
}

int main() {
	test01();
	return 0;
}