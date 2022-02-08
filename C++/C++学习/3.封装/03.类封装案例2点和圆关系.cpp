#include <iostream>
#include "point.h"
#include "circle.h"
using namespace std;
//class Point
//{
//public:
//	//����X
//	void setX(int x) {
//		p_X = x;
//	}
//	//��ȡX
//	int getX() {
//		return p_X;
//	}
//
//	//����Y
//	void setY(int y) {
//		p_Y = y;
//	}
//
//	//��ȡY
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
//	//���ð뾶
//	void setR(int r) {
//		c_R = r;
//	}
//
//	//��ȡ�뾶
//	int getR() {
//		return c_R;
//	}
//	//����Բ��
//	void setCenter(Point p) {
//		c_Center = p;
//	}
//
//	//��ȡԲ��
//	Point getCenter() {
//		return c_Center;
//	}
//
//private:
//	int c_R;//Բ�İ뾶
//	//���п�������һ������Ϊ��Ա
//	Point c_Center;//Բ��
//
//};

void isInCircle(Circle& c, Point& p) {
	//��������֮������ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	//����뾶��ƽ��
	int rdistance = (c.getR()) * (c.getR());

	//�ж�
	if (distance == rdistance) {
		cout << "����Բ��" << endl;
	}
	else if (distance > rdistance) {
		cout << "����Բ��" << endl;
	}
	else {
		cout << "����Բ��" << endl;
	}
}

int main() {

	//����Բ
	Circle c1;
	c1.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);

	//������
	Point p1;
	p1.setX(10);
	p1.setY(10);

	//�жϹ�ϵ
	isInCircle(c1, p1);


	return 0;
}