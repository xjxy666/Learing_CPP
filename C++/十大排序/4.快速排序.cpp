#include <iostream>
using namespace std;

//�õ�һ��Ԫ�ؽ����������л��ֳ�������������
int Partition(int A[], int low, int high) {
	int pivot = A[low];
	//��һ��Ԫ����Ϊ����
	while (low < high) {
		//��low��high�������������λ��
		while (low < high && A[high] >= pivot) {
			--high; //highָ�벻�����ƣ�ֱ���ҵ�һ����������С
		}
		A[low] = A[high];//������С��Ԫ���ƶ������

		while (low < high && A[low] <= pivot) {
			++low;//lowָ�벻�����ƣ�ֱ���ҵ�һ�����������
		}
		A[high] = A[low];//��������Ԫ���ƶ����Ҷ�
	}
	A[low] = pivot;
	//����Ԫ�ش�ŵ�����λ��
	return
		low;
	//���ش�����������λ��
}


void QuickSort(int A[], int low, int high) {
	if (low < high) { //�ݹ�����������
		int pivotpos = Partition(A, low, high); //����
		QuickSort(A, low, pivotpos - 1); //�������ӱ�
		QuickSort(A, pivotpos + 1, high);//�������ӱ�
	}
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

	QuickSort(A, 0,n-1); //ֱ�Ӳ�������

	printAns(A, n); //������������
}

int main() {
	test01();

	return 0;
}
