#include <iostream>
using namespace std;

//用第一个元素将待排序序列划分成左右两个部分
int Partition(int A[], int low, int high) {
	int pivot = A[low];
	//第一个元素作为枢轴
	while (low < high) {
		//用low、high搜索枢轴的最终位置
		while (low < high && A[high] >= pivot) {
			--high; //high指针不断左移，直到找到一个数比枢轴小
		}
		A[low] = A[high];//比枢轴小的元素移动到左端

		while (low < high && A[low] <= pivot) {
			++low;//low指针不断右移，直到找到一个数比枢轴大
		}
		A[high] = A[low];//比枢轴大的元素移动到右端
	}
	A[low] = pivot;
	//枢轴元素存放到最终位置
	return
		low;
	//返回存放枢轴的最终位置
}


void QuickSort(int A[], int low, int high) {
	if (low < high) { //递归跳出的条件
		int pivotpos = Partition(A, low, high); //划分
		QuickSort(A, low, pivotpos - 1); //划分左子表
		QuickSort(A, pivotpos + 1, high);//划分右子表
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

	QuickSort(A, 0,n-1); //直接插入排序

	printAns(A, n); //输出排序后数组
}

int main() {
	test01();

	return 0;
}
