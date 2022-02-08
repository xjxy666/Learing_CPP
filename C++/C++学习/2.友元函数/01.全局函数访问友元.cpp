#include <iostream>
using namespace std;

class Building
{
	//友元函数可以访问私有类
	friend void goodGuy(Building& building);
public:
	Building();
	~Building();

	string m_BedRoom;

private:
	string m_SittingRoom;
};

Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

Building::~Building()
{
}

//全局函数
void goodGuy(Building& building) {
	cout << "好基友全局函数 正在访问" << building.m_BedRoom << endl;
	cout << "好基友全局函数 正在访问" << building.m_SittingRoom << endl;
}

void test01() {
	Building building;
	goodGuy(building);
}

int main() {
	test01();
	return 0;
}