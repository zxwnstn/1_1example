#include<iostream>
using namespace std;

void doSomething(const int &x)
{
	cout << x << endl;
}

void doSomething2(int x)
{
	cout << x << endl;
}

int main()
{
	for (int i = 0; i < 10; i++)
		doSomething(i);

	doSomething2(8);
}