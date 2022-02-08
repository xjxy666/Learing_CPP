#pragma once
#include <iostream>
//#include "GoodGay.h"
using namespace std;

class Building
{

	friend class GoodGay;
	//friend void GoodGay::visit();
public:
	Building();
	

	string m_SittingRoom;

private:
	string m_BedRoom;

};

