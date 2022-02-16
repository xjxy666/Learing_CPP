#include <iostream>
using namespace std;

//将以 k 为根的子树调整为大根堆
void HeadAdjust(int A[], int k, int len) {
	A[0] = A[k]; //A[0]暂存子树的根结点
	for (int i = 2 * k; i <= len; i *= 2) { //沿key较大的子结点向下筛选
		if (i < len && A[i] < A[i + 1])
			i++;  //取key较大的子结点的下标
		if (A[0] >= A[i])
			break; //筛选结束
		else {
			A[k] = A[i];//将A[i]调整到双亲结点上
			k = i; //修改k值，以便继续向下筛选
		}
	}
	A[k] = A[0];//被筛选结点的值放入最终位置
}


//建立大根堆
void BuildMaxHeap(int A[], int len) {
	for (int i = len / 2; i > 0; i--) //从后往前调整所有非终端结点
		HeadAdjust(A, i, len); 
}


//堆排序的完整逻辑
void HeapSort(int A[], int len) {
	BuildMaxHeap(A, len); //初始建堆
	for (int i = len; i > 1; i--) { //n-1趟的交换和建堆过程
		swap(A[i], A[1]); //堆顶元素和堆底元素交换
		HeadAdjust(A, 1, i - 1); //把剩余的待排序元素整理成堆
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
	tempArray[0] = INT_MIN;

	printBegin(A, n); //输出排序前数组

	HeapSort(tempArray, n+1); //直接插入排序

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
