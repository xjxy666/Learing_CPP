#include <iostream>
using namespace std;

//����ͬ�����
//����CPU��
class CPU
{
public:
	//�������ĺ���
	virtual void calculate() = 0;
};

//�����Կ���
class VideoCard
{
public:
	//������ʾ�ĺ���
	virtual void display() = 0;
};

//�����ڴ�����
class Memory
{
public:
	//����洢�ĺ���
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu,VideoCard* vc,Memory* mem);
	//�ṩ�������� �ͷ������������
	~Computer();

	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

private:
	CPU* m_cpu;//cpuӲ��ָ��
	VideoCard* m_vc;
	Memory* m_mem;
};

Computer::Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
	m_cpu = cpu;
	m_vc = vc;
	m_mem = mem;
}
//�ṩ�������� �ͷ������������
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
		cout << "Intel��CPU��ʼ������" << endl;
	}
};

class IntelVideo :public VideoCard
{
	virtual void display() {
		cout << "Intel���Կ���ʼ��ʾ��" << endl;
	}
};

class IntelMemory :public Memory
{
	virtual void storage() {
		cout << "Intel���ڴ濪ʼ�洢��" << endl;
	}
};


class LenovoCPU :public CPU
{
	virtual void calculate() {
		cout << "Lenovo��CPU��ʼ������" << endl;
	}
};

class LenovoVideo :public VideoCard
{
	virtual void display() {
		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
	}
};

class LenovoMemory :public Memory
{
	virtual void storage() {
		cout << "Lenovo���ڴ濪ʼ�洢��" << endl;
	}
};

void test01() {
	//��һ̨�������
	CPU* intelCPU = new IntelCPU;
	VideoCard* intelCard = new IntelVideo;
	Memory* intelMem = new IntelMemory;


	//������һ̨����
	Computer* computer1 = new Computer(intelCPU, intelCard, intelMem);
	computer1->work();
	delete computer1;
	
	//�����ڶ�̨����
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideo, new LenovoMemory);
	computer2->work();
	delete computer2;
}

int main() {
	test01();

	return 0;
}