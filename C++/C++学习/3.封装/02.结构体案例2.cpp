//#include <iostream>
//#include <iterator>
//using namespace std;
////设计英雄结构体
//struct Hero
//{
//	string name;
//	int age;
//	string sex;
//};
//
//
//void bubbleSort(struct Hero hArray[], int len) {
//	for (int i = 0; i < len-1; i++) {
//		for (int j = i + 1; j < len; j++) {
//			if (hArray[i].age > hArray[j].age) {
//				struct Hero temp = hArray[i];
//				hArray[i] = hArray[j];
//				hArray[j] = temp;
//			}
//		}
//	}
//}
//void printAns(struct Hero heroArray[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "英雄名： " << heroArray[i].name << " 年龄： "
//			<< heroArray[i].age << " 性别： " << heroArray[i].sex << endl;
//	}
//}
//
//int main() {
//	//创建数组存放五名英雄
//	struct Hero heroArray[5]=
//	{
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"},
//	};
//	int len = end(heroArray) - begin(heroArray);
//
//	//}
//	cout << "排序前" << endl;
//	printAns(heroArray, len);
//
//	//对数组进行升序
//	bubbleSort(heroArray,len);
//	cout << "\n排序后" << endl;
//	printAns(heroArray, len);
//	return 0;
//}