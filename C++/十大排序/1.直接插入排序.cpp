#include <iostream>
using namespace std;

void InsertSort(int A[], int n) {
	int i, j, temp; //存放临时的值
	for (i = 1; i < n; i++) { //将各元素插入已排好序的序列中
		if (A[i] < A[i - 1]) { //若A[i]关键字小于前驱		
			temp = A[i];  //用temp暂存A[i]
			for (j = i - 1; j >= 0 && A[j] > temp; j--) {  //检查前面所有已排好序的元素
				A[j + 1] = A[j]; //所有大于temp的耶稣都向后挪位
			}
			A[j + 1] = temp;//复制到插入位置
		}
	}
}

void printBegin(const int A[], int n) {
	cout << "排序前：";

	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;

}

void printAns(const int A[], int n) {
	cout << "排序后：";

	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;

}

int main() {
	int A[] = { 49,38,65,97,76,13,27,49 };
	int n = sizeof(A) / sizeof(A[1]);
	printBegin(A, n); //输出排序前数组
	InsertSort(A, n); //直接插入排序
	printAns(A, n); //输出排序后数组

	return 0;
}