#include <iostream>
using namespace std;

int* B;
//A[ Low..mid]��A[mid+1..high]�������򣬽��������ֹ鲢
void Merge(int A[], int low, int mid, int high) {
	int i, j, k;
	for (k = low; k <= high; k++)
		B[k] = A[k]; //��A������Ԫ�ظ��Ƶ�B��
	for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++) {
		if (B[i] <= B[j])
			A[k] = B[i++]; //����Сֵ���Ƶ�A��
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
			//���м仮��
			MergeSort(A, low, mid);
			//����벿�ֹ鲢����
			MergeSort(A, mid + 1, high);//���Ұ벿�ֹ鲢����
			Merge(A, low, mid, high);
			//�鲢
		}//if
	}

void printBegin(int A[], int n) {
	cout << "����ǰ��";

	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;

}

void printAns(int A[], int n) {
	cout << "�����";

	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;

}

void test01() {
	int A[] = { 49,38,65,97,76,13,27,49 };
	int n = sizeof(A) / sizeof(A[1]);
	printBegin(A, n); //�������ǰ����

	B = new int[n] ; //��������B

	MergeSort(A, 0,n-1); //ֱ�Ӳ�������

	printAns(A, n); //������������
}

int main() {
	test01();

	return 0;
}
