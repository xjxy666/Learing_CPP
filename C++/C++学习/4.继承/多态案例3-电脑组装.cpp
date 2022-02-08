#include <iostream>
using namespace std;

//抽象不同零件类
//抽象CPU类
class CPU
{
public:
	//抽象计算的函数
	virtual void calculate() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	//抽象显示的函数
	virtual void display() = 0;
};

//抽象内存条类
class Memory
{
public:
	//抽象存储的函数
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu,VideoCard* vc,Memory* mem);
	//提供析构函数 释放三个电脑零件
	~Computer();

	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

private:
	CPU* m_cpu;//cpu硬件指针
	VideoCard* m_vc;
	Memory* m_mem;
};

Computer::Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
	m_cpu = cpu;
	m_vc = vc;
	m_mem = mem;
}
//提供析构函数 释放三个电脑零件
Computer::~Computer()
{
	if (m_cpu != NULL) {
		delete m_cpu;
		m_cpu = NULL;
	}
	if (m_vc != NULL) {
		delete m_vc;
		m_vc = NULL;
	}
	if (m_mem != NULL) {
		delete m_mem;
		m_mem = NULL;
	}
}

class IntelCPU :public CPU
{
	virtual void calculate() {
		cout << "Intel的CPU开始计算了" << endl;
	}
};

class IntelVideo :public VideoCard
{
	virtual void display() {
		cout << "Intel的显卡开始显示了" << endl;
	}
};

class IntelMemory :public Memory
{
	virtual void storage() {
		cout << "Intel的内存开始存储了" << endl;
	}
};


class LenovoCPU :public CPU
{
	virtual void calculate() {
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};

class LenovoVideo :public VideoCard
{
	virtual void display() {
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};

class LenovoMemory :public Memory
{
	virtual void storage() {
		cout << "Lenovo的内存开始存储了" << endl;
	}
};

void test01() {
	//第一台电脑零件
	CPU* intelCPU = new IntelCPU;
	VideoCard* intelCard = new IntelVideo;
	Memory* intelMem = new IntelMemory;


	//创建第一台电脑
	Computer* computer1 = new Computer(intelCPU, intelCard, intelMem);
	computer1->work();
	delete computer1;
	
	//创建第二台电脑
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideo, new LenovoMemory);
	computer2->work();
	delete computer2;
}

int main() {
	test01();

	return 0;
}