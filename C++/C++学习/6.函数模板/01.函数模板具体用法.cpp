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
//template<typename T>//声明一个模板，T是通用数据类型
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
//	//1.自动类型推导
//	//mySwap(a, b);
//
//	//2.显示指定类型
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