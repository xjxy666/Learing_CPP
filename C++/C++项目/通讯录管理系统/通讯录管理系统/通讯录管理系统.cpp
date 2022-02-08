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
	struct Person personArray[MAX];//ͨѶ¼�б������ϵ������
	int m_Size;//ͨѶ¼�е���Ա����
};

void showMenu() {
	cout << "**************************" << endl;
	cout << "*****  1.�����ϵ��  *****" << endl;
	cout << "*****  2.��ʾ��ϵ��  *****" << endl;
	cout << "*****  3.ɾ����ϵ��  *****" << endl;
	cout << "*****  4.������ϵ��  *****" << endl;
	cout << "*****  5.�޸���ϵ��  *****" << endl;
	cout << "*****  6.�����ϵ��  *****" << endl;
	cout << "*****  0.�˳�ͨѶ¼  *****" << endl;
	cout << "**************************" << endl;
}

void addPerson(Addressbooks* abs) {
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼����" << endl;
		return;
	}
	else {
		//�������
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//����Ա�
		cout << "�������Ա� " << endl;
		cout << "1 --- ��   2 --- Ů" << endl;
		int sex = 0;
		while (true) {
			//���������ȷ�����˳�ѭ��
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}


		//�������
		int age = 0;
		cout << "���������䣺 " << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//��ӵ绰
		string phone;
		cout << "������绰�� " << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//���סַ
		string addr;
		cout << "�������ַ�� " << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ���" << endl;

		system("pause");//
		system("cls");//����
	}
}

void showPerson(const Addressbooks *abs) { //ֵ���ݻ������ڴ濪����ʹ�ó���ָ����������
	if (abs->m_Size == 0) {
		cout << "δ�ҵ��κ���ϵ��" << endl;
	}
	for (int i = 0; i < abs->m_Size; i++) {
		cout << "������ " << abs->personArray[i].m_Name << "\t";//�Ʊ�����а˸��ո�
		cout << "�Ա� " << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů" )<< "\t";//��Ŀ�����
		cout << "���䣺 " << abs->personArray[i].m_Age << "\t";
		cout << "�绰�� " << abs->personArray[i].m_Phone << "\t";
		cout << "סַ�� " << abs->personArray[i].m_Addr << endl;
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
	cout << "������Ҫɾ�����˵�����" << endl;
	cin >> name;
	int ans = isExist(abs, name);//��������˵�λ��
	if (ans == -1) {
		cout << "���޴���" << endl;
	}
	else
	{
		for (int i = ans; i < abs->m_Size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ��" << name << "��Ϣ�ɹ���" << endl;
	}
	system("pause");
	system("cls");
}

void findPerson(const Addressbooks* abs) {
	cout << "������Ҫ�����˵������� " << endl;
	string name;
	cin >> name;
	int ans = isExist(abs, name);
	if (ans == -1) {
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "������ " << abs->personArray[ans].m_Name << "\t";//�Ʊ�����а˸��ո�
		cout << "�Ա� " << (abs->personArray[ans].m_Sex == 1 ? "��" : "Ů") << "\t";//��Ŀ�����
		cout << "���䣺 " << abs->personArray[ans].m_Age << "\t";
		cout << "�绰�� " << abs->personArray[ans].m_Phone << "\t";
		cout << "סַ�� " << abs->personArray[ans].m_Addr << endl;
	}
	system("pause");
	system("cls");

}

void updatePerson(Addressbooks* abs) {
	cout << "������Ҫ�޸��˵������� " << endl;
	string name;
	cin >> name;
	int ans = isExist(abs, name);
	if (ans == -1) {
		cout << "���޴���" << endl;
	}
	else
	{
		//�������
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[ans].m_Name = name;

		//����Ա�
		cout << "�������Ա� " << endl;
		cout << "1 --- ��   2 --- Ů" << endl;
		int sex = 0;
		while (true) {
			//���������ȷ�����˳�ѭ��
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ans].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}


		//�������
		int age = 0;
		cout << "���������䣺 " << endl;
		cin >> age;
		abs->personArray[ans].m_Age = age;

		//��ӵ绰
		string phone;
		cout << "������绰�� " << endl;
		cin >> phone;
		abs->personArray[ans].m_Phone = phone;

		//���סַ
		string addr;
		cout << "�������ַ�� " << endl;
		cin >> addr;
		abs->personArray[ans].m_Addr = addr;

		cout << "�޸ĳɹ���" << endl;
	}
	system("pause");
	system("cls");

}

void cleanPerson(Addressbooks* abs) {
	abs->m_Size = 0;
	cout << "��ʼ���ɹ�" << endl;
	system("pause");
	system("cls");
}

int main() {
	Addressbooks abs;//�����ṹ�����
	abs.m_Size = 0;//��ʼ��ͨѶ¼������Ա����
	int select = 0;//�û�����ѡ��ı���
	string name;//����ʱ��Ҫ���������
	while (true) {
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:  //�����ϵ��
			addPerson(&abs);
			break;

		case 2:  //��ʾ��ϵ��
			showPerson(&abs);
			break;

		case 3:  //ɾ����ϵ��
			deletePerson(&abs);
			break;

		case 4:  //������ϵ��
			findPerson(&abs);
			break;

		case 5:  //�޸���ϵ��
			updatePerson(&abs);
			break;

		case 6:  //�����ϵ��
			cleanPerson(&abs);
			break;

		case 0:  //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			return 0;
			break;
		default:
			cout << "��������ȷѡ��" << endl;
			break;
		}
	}
	return 0;
}