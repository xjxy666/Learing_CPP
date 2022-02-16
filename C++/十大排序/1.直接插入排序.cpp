#include <iostream>
using namespace std;

void InsertSort(int A[], int n) {
	int i, j, temp; //�����ʱ��ֵ
	for (i = 1; i < n; i++) { //����Ԫ�ز������ź����������
		if (A[i] < A[i - 1]) { //��A[i]�ؼ���С��ǰ��		
			temp = A[i];  //��temp�ݴ�A[i]
			for (j = i - 1; j >= 0 && A[j] > temp; j--) {  //���ǰ���������ź����Ԫ��
				A[j + 1] = A[j]; //���д���temp��Ү�ն����Ųλ
			}
			A[j + 1] = temp;//���Ƶ�����λ��
		}
	}
}

void printBegin(const int A[], int n) {
	cout << "����ǰ��";

	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;

}

void printAns(const int A[], int n) {
	cout << "�����";

	for (int i = 0; i < n; i++) {
		cout << A[i] << "  ";
	}
	cout << endl;

}

int main() {
	int A[] = { 49,38,65,97,76,13,27,49 };
	int n = sizeof(A) / sizeof(A[1]);
	printBegin(A, n); //�������ǰ����
	InsertSort(A, n); //ֱ�Ӳ�������
	printAns(A, n); //������������

	return 0;
}