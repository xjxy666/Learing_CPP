#include "GoodGay.h"

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
}
