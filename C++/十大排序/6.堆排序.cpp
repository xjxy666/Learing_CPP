#include <iostream>
using namespace std;

//���� k Ϊ������������Ϊ�����
void HeadAdjust(int A[], int k, int len) {
	A[0] = A[k]; //A[0]�ݴ������ĸ����
	for (int i = 2 * k; i <= len; i *= 2) { //��key�ϴ���ӽ������ɸѡ
		if (i < len && A[i] < A[i + 1])
			i++;  //ȡkey�ϴ���ӽ����±�
		if (A[0] >= A[i])
			break; //ɸѡ����
		else {
			A[k] = A[i];//��A[i]������˫�׽����
			k = i; //�޸�kֵ���Ա��������ɸѡ
		}
	}
	A[k] = A[0];//��ɸѡ����ֵ��������λ��
}


//���������
void BuildMaxHeap(int A[], int len) {
	for (int i = len / 2; i > 0; i--) //�Ӻ���ǰ�������з��ն˽��
		HeadAdjust(A, i, len); 
}


//������������߼�
void HeapSort(int A[], int len) {
	BuildMaxHeap(A, len); //��ʼ����
	for (int i = len; i > 1; i--) { //n-1�˵Ľ����ͽ��ѹ���
		swap(A[i], A[1]); //�Ѷ�Ԫ�غͶѵ�Ԫ�ؽ���
		HeadAdjust(A, 1, i - 1); //��ʣ��Ĵ�����Ԫ������ɶ�
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
	const int n = sizeof(A) / sizeof(A[1]);

	int tempArray[n + 1];
	//inputArray���¸��Ƶ�tempArray����
	for (int i = 0; i < n; ++i)
	{
		tempArray[i + 1] = A[i];
	}
	tempArray[0] = INT_MIN;

	printBegin(A, n); //�������ǰ����

	HeapSort(tempArray, n+1); //ֱ�Ӳ�������

	for (int i = 0; i < n; ++i)
	{
		A[i] = tempArray[i + 1];
	}

	printAns(A,n); //������������
}

int main() {
	test01();

	return 0;
}
