//#include <iostream>
//using namespace std;
//
//void swapInt(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapDouble(double& a, double& b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>//����һ��ģ�壬T��ͨ����������
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01() {
//	int a = 10;
//	int b = 20;
//	//swapInt(a, b);
//	//1.�Զ������Ƶ�
//	//mySwap(a, b);
//
//	//2.��ʾָ������
//	mySwap<int>(a, b);
//	cout << "a= " << a << endl;  
//	cout << "b= " << b << endl;
//
//
//	double c = 1.1;
//	double d = 2.2;
//	//swapDouble(c,d);
//	//mySwap(a, c);
//	cout << "c= "  << c << endl;
//	cout << "d= " << d<< endl;
//}
//
//int main() {
//	test01();
//
//	return 0;
//}