#include <iostream>
using namespace std;

//��ͨʵ��ҳ��


//javaҳ��
class Java
{
public:
	Java();
	~Java();

	void header();
	void footer();
	void left();
	void content();

private:

};

Java::Java()
{
}

Java::~Java()
{
}

void Java::header()
{
	cout << "����ͷ��" << endl;
}

void Java::footer()
{
	cout << "�����ײ�" << endl;
}

void Java::left()
{
	cout << "���������б�" << endl;
}

void Java::content()
{
	cout << "Javaѧ����Ƶ" << endl;
}

void test01() {
	cout << "Java������Ƶ����" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
}

int main() {


	return 0;
}