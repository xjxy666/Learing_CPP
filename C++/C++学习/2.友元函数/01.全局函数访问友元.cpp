#include <iostream>
using namespace std;

class Building
{
	//��Ԫ�������Է���˽����
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
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

Building::~Building()
{
}

//ȫ�ֺ���
void goodGuy(Building& building) {
	cout << "�û���ȫ�ֺ��� ���ڷ���" << building.m_BedRoom << endl;
	cout << "�û���ȫ�ֺ��� ���ڷ���" << building.m_SittingRoom << endl;
}

void test01() {
	Building building;
	goodGuy(building);
}

int main() {
	test01();
	return 0;
}