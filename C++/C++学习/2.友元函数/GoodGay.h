#pragma once
#include <iostream>
#include "Building.h"

using namespace std;
//class Building;
class GoodGay
{
public:
	GoodGay();
	Building* building;
	void visit();//友元 可访问Building私有
	//void visit2();//非友元
};

