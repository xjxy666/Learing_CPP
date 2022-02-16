#include <iostream>
using namespace std;

int* B;
//A[ Low..mid]和A[mid+1..high]各自有序，将两个部分归并
void Merge(int A[], int low, int mid, int high) {
	int i, j, k;
	for (k = low; k <= high; k++)
		B[k] = A[k]; //将A中所有元素复制到B中
	for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++) {
		if (B[i] <= B[j])
			A[k] = B[i++]; //将较小值复制到A中
		else
			A[k] = B[j++];
	}//for
	while (i <= mid)
		A[k++] = B[i++];
	while (j <= high)
		A[k++] = B[j++];
}
	void MergeSort(int A[], int low, int high) {
		if (low < high) {
			int mid = (low + high) / 2;
			//从中间划分
			MergeSort(A, low, mid);
			//对左半部分归并排序
			MergeSort(A, mid + 1, high);//对右半部分归并排序
			Merge(A, low, mid, high);
			//归并
		}//if
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

	B = new int[n] ; //辅助数组B

	MergeSort(A, 0,n-1); //直接插入排序

	printAns(A, n); //输出排序后数组
}

int main() {
	test01();

	return 0;
}
