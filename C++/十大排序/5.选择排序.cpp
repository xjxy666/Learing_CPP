#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void SelectSort(int A[], int n) {
	for (int i = 0; i < n; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (A[j] < A[min]) {
				min = j;			
			}
		}
		if (min != i) {
			swap(A[i], A[min]);
		}
	}
}


void printBegin(int A[], int n) {
	cout << "排序前：";

	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;

}

void printAns(int A[], int n) {
	cout << "排序后：";

	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;

}

void test01() {
	int A[] = { 49,38,65,97,76,13,27,49 };
	int n = sizeof(A) / sizeof(A[1]);
	printBegin(A, n); //输出排序前数组

	SelectSort(A, n); //直接插入排序

	printAns(A, n); //输出排序后数组
}

int main() {
	test01();

	return 0;
}
