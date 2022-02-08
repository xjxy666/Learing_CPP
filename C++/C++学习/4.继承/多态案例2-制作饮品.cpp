#include <iostream>
using namespace std;

class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;


	//倒入杯中
	virtual void PourInCup() = 0;

	//加入辅料
	virtual void PutSomething() = 0;

	//制作饮品
	void  makeDring() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//制作咖啡
class Coffee : public AbstractDrinking
{
public:
	//煮水
	virtual void Boil() {
		cout << "煮农夫山泉" << endl;
	}

	//冲泡
	virtual void Brew() {
		cout << "冲泡咖啡" << endl;
	}


	//倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void PutSomething() {
		cout << "加入糖和牛奶" << endl;
	}

};


//制作茶叶
class Tea : public AbstractDrinking
{
public:
	//煮水
	virtual void Boil() {
		cout << "煮矿泉水" << endl;
	}

	//冲泡
	virtual void Brew() {
		cout << "冲泡茶水" << endl;
	}


	//倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void PutSomething() {
		cout << "加入枸杞" << endl;
	}

};

//制作函数
void doWork(AbstractDrinking* abs) {
	abs->makeDring();
	delete abs;//堆区数据手动开辟手动释放
}

void test01() {
	doWork(new Tea);
	cout << "------------------------" << endl;
	doWork(new Coffee);
}

int main() {
	test01();

	return 0;
}