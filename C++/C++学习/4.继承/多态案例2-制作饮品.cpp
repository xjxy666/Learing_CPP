#include <iostream>
using namespace std;

class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;


	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void PutSomething() = 0;

	//������Ʒ
	void  makeDring() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//��������
class Coffee : public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() {
		cout << "��ũ��ɽȪ" << endl;
	}

	//����
	virtual void Brew() {
		cout << "���ݿ���" << endl;
	}


	//���뱭��
	virtual void PourInCup() {
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void PutSomething() {
		cout << "�����Ǻ�ţ��" << endl;
	}

};


//������Ҷ
class Tea : public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() {
		cout << "���Ȫˮ" << endl;
	}

	//����
	virtual void Brew() {
		cout << "���ݲ�ˮ" << endl;
	}


	//���뱭��
	virtual void PourInCup() {
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void PutSomething() {
		cout << "�������" << endl;
	}

};

//��������
void doWork(AbstractDrinking* abs) {
	abs->makeDring();
	delete abs;//���������ֶ������ֶ��ͷ�
}

void test01() {
	doWork(new Tea);
	cout << "------------------------" << endl;
	doWork(new Coffee);
}

int main() {
	test01();

	return 0;
}