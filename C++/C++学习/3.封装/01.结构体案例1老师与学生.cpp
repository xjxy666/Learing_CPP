#include <iostream>
#include <iterator>
#include <string>
#include <ctime>
using namespace std;
//����ѧ���ṹ��
struct Student
{
	string sName;
	int score = 0;
};
//������ʦ�ṹ��
struct Teacher
{
	string tName;
	struct Student sArray[5];
};
//�����Ϣ����



void allocateInfo(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	//����ʦ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "teacher_";
		tArray[i].tName += nameSeed[i];
		//ͨ��ѭ������ʦ��ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			int random = rand() % 61 + 40;// 40 ~ 100
			tArray[i].sArray[j].score = random;
		}
	}
}

//��ӡ������ʦ��ѧ������Ϣ
void printInfo(struct Teacher tArray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������ " << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout<<"\tѧ�������� " << tArray[i].sArray[j].sName <<
				"ѧ�������� " << tArray[i].sArray[j].score << endl;
		}	
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//����������ʦ������
	struct Teacher tArray[3];

	//ͨ����������ʦ��ֵ��������ʦ��ѧ����ֵ
	int len = end(tArray) - begin(tArray);
	allocateInfo(tArray, len);

	//��ӡ������ʦ��ѧ������Ϣ
	printInfo(tArray, len);

	system("pause");
}