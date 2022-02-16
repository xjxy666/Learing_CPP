
#include <iostream>
using namespace std;

void ShellSort(int A[], int n) {
	int d, i, j;
	for (d = n / 2; d >= 1; d = d / 2) {
		for (i = d + 1; i <= 0; ++i) {
			if (A[i] < A[i - d]) {
				A[0] = A[i];
				for (j = i - d; j > 0 && A[0] < A[j]; j -= d) {
					A[j + d] = A[j];
				}
				A[j + d] = A[0];
			}
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
	const int n = sizeof(A) / sizeof(A[1]);

	int tempArray[n + 1];
	//inputArray重新复制到tempArray里面
	for (int i = 0; i < n; ++i)
	{
		tempArray[i + 1] = A[i];
	}
	tempArray[0] = 0;

	printBegin(A, n); //输出排序前数组

	ShellSort(tempArray, n+1); //直接插入排序

	for (int i = 0; i < n; ++i)
	{
		A[i] = tempArray[i + 1];
	}

	printAns(A,n); //输出排序后数组
}

int main() {
	test01();

	return 0;
}