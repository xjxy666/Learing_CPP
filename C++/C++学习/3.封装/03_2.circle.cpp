#include "circle.h"

void Circle::setR(int r) {
	c_R = r;
}

//��ȡ�뾶
int Circle::getR() {
	return c_R;
}
//����Բ��
void Circle::setCenter(Point p) {
	c_Center = p;
}

//��ȡԲ��
Point Circle::getCenter() {
	return c_Center;
}
