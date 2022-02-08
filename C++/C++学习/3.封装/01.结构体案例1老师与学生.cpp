#include <iostream>
#include <iterator>
#include <string>
#include <ctime>
using namespace std;
//创建学生结构体
struct Student
{
	string sName;
	int score = 0;
};
//创建老师结构体
struct Teacher
{
	string tName;
	struct Student sArray[5];
};
//添加信息函数



void allocateInfo(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	//给老师赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "teacher_";
		tArray[i].tName += nameSeed[i];
		//通过循环给老师的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			int random = rand() % 61 + 40;// 40 ~ 100
			tArray[i].sArray[j].score = random;
		}
	}
}

//打印所有老师和学生的信息
void printInfo(struct Teacher tArray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名： " << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout<<"\t学生姓名： " << tArray[i].sArray[j].sName <<
				"学生分数： " << tArray[i].sArray[j].score << endl;
		}	
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//创建三名老师的数组
	struct Teacher tArray[3];

	//通过函数给老师赋值，并给老师的学生赋值
	int len = end(tArray) - begin(tArray);
	allocateInfo(tArray, len);

	//打印所有老师和学生的信息
	printInfo(tArray, len);

	system("pause");
}