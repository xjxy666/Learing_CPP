//#include <iostream>
//using namespace std;
//
////1.普通函数可以进行隐式形式转换
////2.函数模板 用自动类型推导，不可以发生隐式类型转换
////3.函数模板 用显示指定类型，可以发生隐式类型转换
//
//int myAdd01(int a, int b) {
//	return a + b;
//}
//
//template<typename T>
//int myAdd02(const T& a, const T& b) {
//	return a + b;
//}
//
//void test01() {
//	int a = 10;
//	int b = 20;
//	char c = 'c';//a - 97 c - 99
//	cout << "a+b=" << myAdd02<char>(a, c) << endl;
//}
//
//int main() {
//	test01();
//
//	return 0;
//}