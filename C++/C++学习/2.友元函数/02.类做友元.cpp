#include <iostream>
using namespace std;
class Building
{
	friend class GoodGay;
public:
	Building();
	~Building();
	string m_SittingRoom;

private:
	string m_BedRoom;
};

Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";

}

Building::~Building()
{
}
class GoodGay
{
public:
	GoodGay();
	~GoodGay();
	void visit();
	Building* building;//创建一个指向Building类的指针

private:

};

GoodGay::GoodGay()
{
	//创建建筑物对象，new在堆区卡皮空间后返回的是指针
	building = new Building;

}

void GoodGay::visit() {
	cout << "好基友正在访问" << building->m_SittingRoom << endl;
	cout << "好基友正在访问" << building->m_BedRoom << endl;
}

GoodGay::~GoodGay()
{
}

void test01() {
	GoodGay gg;
	gg.visit();
}

int main() {
	test01();
	return 0;
}