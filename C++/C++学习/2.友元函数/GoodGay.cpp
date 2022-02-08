#include "GoodGay.h"

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友正在访问：" << building->m_BedRoom << endl;
}
