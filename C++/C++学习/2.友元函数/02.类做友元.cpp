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
	m_SittingRoom = "����";
	m_BedRoom = "����";

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
	Building* building;//����һ��ָ��Building���ָ��

private:

};

GoodGay::GoodGay()
{
	//�������������new�ڶ�����Ƥ�ռ�󷵻ص���ָ��
	building = new Building;

}

void GoodGay::visit() {
	cout << "�û������ڷ���" << building->m_SittingRoom << endl;
	cout << "�û������ڷ���" << building->m_BedRoom << endl;
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