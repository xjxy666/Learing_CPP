//#include <iostream>
//#include <iterator>
//using namespace std;
////���Ӣ�۽ṹ��
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
//		cout << "Ӣ������ " << heroArray[i].name << " ���䣺 "
//			<< heroArray[i].age << " �Ա� " << heroArray[i].sex << endl;
//	}
//}
//
//int main() {
//	//��������������Ӣ��
//	struct Hero heroArray[5]=
//	{
//		{"����",23,"��"},
//		{"����",22,"��"},
//		{"�ŷ�",20,"��"},
//		{"����",21,"��"},
//		{"����",19,"Ů"},
//	};
//	int len = end(heroArray) - begin(heroArray);
//
//	//}
//	cout << "����ǰ" << endl;
//	printAns(heroArray, len);
//
//	//�������������
//	bubbleSort(heroArray,len);
//	cout << "\n�����" << endl;
//	printAns(heroArray, len);
//	return 0;
//}