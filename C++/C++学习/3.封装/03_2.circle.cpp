#include "circle.h"

void Circle::setR(int r) {
	c_R = r;
}

//获取半径
int Circle::getR() {
	return c_R;
}
//设置圆心
void Circle::setCenter(Point p) {
	c_Center = p;
}

//获取圆心
Point Circle::getCenter() {
	return c_Center;
}
