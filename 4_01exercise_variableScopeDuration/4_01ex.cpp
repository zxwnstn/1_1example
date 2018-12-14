#include<iostream>
using namespace std;

namespace work1
{
	int a = 1;

	void doSomething()
	{
		cout << "work1의 네임스페이스" << endl;
	}
}
namespace work2
{
	int a = 2;

	void doSomething()
	{
		cout << "work2의 네임스페이스" << endl;
	}
}

// 전역 변수, 함수 지정

int a = 10;

void doSomething()
{
	cout << "전역 함수 doSomething" << endl;

}

void doSomething(int a)
{
	cout << "전역함수 doSomething(int a)" << endl;
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





















