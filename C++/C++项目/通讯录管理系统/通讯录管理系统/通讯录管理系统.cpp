#include<iostream>
#include<iterator>
#define MAX 1000
using namespace std;

struct Person
{
	string m_Name;
	int m_Sex;//1.man 2.woman
	int m_Age;
	string m_Phone;
	string m_Addr;
};

struct Addressbooks
{
	struct Person personArray[MAX];//通讯录中保存的联系人数组
	int m_Size;//通讯录中的人员个数
};

void showMenu() {
	cout << "**************************" << endl;
	cout << "*****  1.添加联系人  *****" << endl;
	cout << "*****  2.显示联系人  *****" << endl;
	cout << "*****  3.删除联系人  *****" << endl;
	cout << "*****  4.查找联系人  *****" << endl;
	cout << "*****  5.修改联系人  *****" << endl;
	cout << "*****  6.清空联系人  *****" << endl;
	cout << "*****  0.退出通讯录  *****" << endl;
	cout << "**************************" << endl;
}

void addPerson(Addressbooks* abs) {
	if (abs->m_Size == MAX) {
		cout << "通讯录已满" << endl;
		return;
	}
	else {
		//添加姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//添加性别
		cout << "请输入性别： " << endl;
		cout << "1 --- 男   2 --- 女" << endl;
		int sex = 0;
		while (true) {
			//如果输入正确，则退出循环
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}


		//添加年龄
		int age = 0;
		cout << "请输入年龄： " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//添加电话
		string phone;
		cout << "请输入电话： " << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//添加住址
		string addr;
		cout << "请输入地址： " << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//更新通讯录人数
		abs->m_Size++;
		cout << "添加成功！" << endl;

		system("pause");//
		system("cls");//清屏
	}
}

void showPerson(const Addressbooks *abs) { //值传递会增加内存开销，使用常量指针避免误操作
	if (abs->m_Size == 0) {
		cout << "未找到任何联系人" << endl;
	}
	for (int i = 0; i < abs->m_Size; i++) {
		cout << "姓名： " << abs->personArray[i].m_Name << "\t";//制表符，有八个空格
		cout << "性别： " << (abs->personArray[i].m_Sex == 1 ? "男" : "女" )<< "\t";//三目运算符
		cout << "年龄： " << abs->personArray[i].m_Age << "\t";
		cout << "电话： " << abs->personArray[i].m_Phone << "\t";
		cout << "住址： " << abs->personArray[i].m_Addr << endl;
	}
	system("pause");
	system("cls");
}

int isExist(const Addressbooks* abs,string name) {

	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}

void deletePerson(Addressbooks* abs) {
	string name;
	cout << "请输入要删除的人的姓名" << endl;
	cin >> name;
	int ans = isExist(abs, name);//保存查找人的位置
	if (ans == -1) {
		cout << "查无此人" << endl;
	}
	else
	{
		for (int i = ans; i < abs->m_Size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除" << name << "信息成功！" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(const Addressbooks* abs) {
	cout << "请输入要查找人的姓名： " << endl;
	string name;
	cin >> name;
	int ans = isExist(abs, name);
	if (ans == -1) {
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "姓名： " << abs->personArray[ans].m_Name << "\t";//制表符，有八个空格
		cout << "性别： " << (abs->personArray[ans].m_Sex == 1 ? "男" : "女") << "\t";//三目运算符
		cout << "年龄： " << abs->personArray[ans].m_Age << "\t";
		cout << "电话： " << abs->personArray[ans].m_Phone << "\t";
		cout << "住址： " << abs->personArray[ans].m_Addr << endl;
	}
	system("pause");
	system("cls");

}

void updatePerson(Addressbooks* abs) {
	cout << "请输入要修改人的姓名： " << endl;
	string name;
	cin >> name;
	int ans = isExist(abs, name);
	if (ans == -1) {
		cout << "查无此人" << endl;
	}
	else
	{
		//添加姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[ans].m_Name = name;

		//添加性别
		cout << "请输入性别： " << endl;
		cout << "1 --- 男   2 --- 女" << endl;
		int sex = 0;
		while (true) {
			//如果输入正确，则退出循环
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ans].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}


		//添加年龄
		int age = 0;
		cout << "请输入年龄： " << endl;
		cin >> age;
		abs->personArray[ans].m_Age = age;

		//添加电话
		string phone;
		cout << "请输入电话： " << endl;
		cin >> phone;
		abs->personArray[ans].m_Phone = phone;

		//添加住址
		string addr;
		cout << "请输入地址： " << endl;
		cin >> addr;
		abs->personArray[ans].m_Addr = addr;

		cout << "修改成功！" << endl;
	}
	system("pause");
	system("cls");

}

void cleanPerson(Addressbooks* abs) {
	abs->m_Size = 0;
	cout << "初始化成功" << endl;
	system("pause");
	system("cls");
}

int main() {
	Addressbooks abs;//创建结构体变量
	abs.m_Size = 0;//初始化通讯录当中人员个数
	int select = 0;//用户输入选择的变量
	string name;//查找时需要输入的人名
	while (true) {
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:  //添加联系人
			addPerson(&abs);
			break;

		case 2:  //显示联系人
			showPerson(&abs);
			break;

		case 3:  //删除联系人
			deletePerson(&abs);
			break;

		case 4:  //查找联系人
			findPerson(&abs);
			break;

		case 5:  //修改联系人
			updatePerson(&abs);
			break;

		case 6:  //清空联系人
			cleanPerson(&abs);
			break;

		case 0:  //退出通讯录
			cout << "欢迎下次使用" << endl;
			return 0;
			break;
		default:
			cout << "请输入正确选项" << endl;
			break;
		}
	}
	return 0;
}