//#include <iostream>
//using namespace std;
//
//template<class T>
//class Base
//{
//public:
//	T m;
//};
//
////class Son :public Base//���󣬱���Ҫ֪���������������
//class Son:public Base<int>
//{
//
//};
//
//
//void test01() {
//	Son s1;
//	Base<int>* ptr = &s1;
//}
//
////.��������ָ�������е�T���ͣ�����Ҳ��Ҫ���ģ��
//template<class T1,class T2>
//class Son2:public Base<T2>
//{
//public:
//	T1 obj;
//	Son2() {
//		cout << "T1����������" << typeid(T1).name() << endl;
//		cout << "T2����������" << typeid(T2).name() << endl;
//	}
//};
//
//void test02() {
//	Son2 <int,char>s2;
//	Son2 <string,int>s3;
//	
//}
//
//int main() {
//	test01();
//	test02();
//	//test03();
//	system("pause");
//	return 0;
//}
