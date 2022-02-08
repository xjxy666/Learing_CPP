//#include <iostream>
//using namespace std;
//
//template<typename T>
//void mySwap(T &a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//template<typename T>
//void mySort(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		int max = i;
//		for (int j = i + 1; j < len; j++) {
//			if (arr[max] < arr[j]) {
//				max = j;
//			}
//		}
//		if (max != i) {
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
//template<class T>
//void printArr(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i]<<" ";
//		cout << endl;
//	}
//}
//
//
//void test01() {
//	char charArr[] = "EDFBCAG";
//	int len = sizeof(charArr) / sizeof(char);
//	mySort(charArr, len);
//	printArr(charArr, len);
//
//}
//
//int main() {
//	test01();
//
//	return 0;
//}