#include <iostream>
using namespace std;

//普通实现页面


//java页面
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
	cout << "公共头部" << endl;
}

void Java::footer()
{
	cout << "公共底部" << endl;
}

void Java::left()
{
	cout << "公共分类列表" << endl;
}

void Java::content()
{
	cout << "Java学科视频" << endl;
}

void test01() {
	cout << "Java下载视频如下" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
}

int main() {


	return 0;
}