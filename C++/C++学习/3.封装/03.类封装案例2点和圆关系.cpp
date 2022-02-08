#include <iostream>
#include "point.h"
#include "circle.h"
using namespace std;
//class Point
//{
//public:
//	//设置X
//	void setX(int x) {
//		p_X = x;
//	}
//	//获取X
//	int getX() {
//		return p_X;
//	}
//
//	//设置Y
//	void setY(int y) {
//		p_Y = y;
//	}
//
//	//获取Y
//	int getY() {
//		return p_Y;
//	}
//private:
//	int p_X;
//	int p_Y;
//};

//class Circle
//{
//public:
//	//设置半径
//	void setR(int r) {
//		c_R = r;
//	}
//
//	//获取半径
//	int getR() {
//		return c_R;
//	}
//	//设置圆心
//	void setCenter(Point p) {
//		c_Center = p;
//	}
//
//	//获取圆心
//	Point getCenter() {
//		return c_Center;
//	}
//
//private:
//	int c_R;//圆的半径
//	//类中可以让另一个类作为成员
//	Point c_Center;//圆心
//
//};

void isInCircle(Circle& c, Point& p) {
	//计算两点之间距离的平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	//计算半径的平方
	int rdistance = (c.getR()) * (c.getR());

	//判断
	if (distance == rdistance) {
		cout << "点在圆上" << endl;
	}
	else if (distance > rdistance) {
		cout << "点在圆外" << endl;
	}
	else {
		cout << "点在圆内" << endl;
	}
}

int main() {

	//创建圆
	Circle c1;
	c1.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);

	//创建点
	Point p1;
	p1.setX(10);
	p1.setY(10);

	//判断关系
	isInCircle(c1, p1);


	return 0;
}