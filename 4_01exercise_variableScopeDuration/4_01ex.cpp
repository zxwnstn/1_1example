#include<iostream>
using namespace std;

namespace work1
{
	int a = 1;

	void doSomething()
	{
		cout << "work1�� ���ӽ����̽�" << endl;
	}
}
namespace work2
{
	int a = 2;

	void doSomething()
	{
		cout << "work2�� ���ӽ����̽�" << endl;
	}
}

// ���� ����, �Լ� ����

int a = 10;

void doSomething()
{
	cout << "���� �Լ� doSomething" << endl;

}

void doSomething(int a)
{
	cout << "�����Լ� doSomething(int a)" << endl;
}

int main()
{
	cout << a << endl;
	doSomething(1);
	doSomething();

	cout << work1::a << endl;
	cout << work2::a << endl;

	work1::doSomething();
	work2::doSomething();

	return 0;
}





















