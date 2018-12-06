#include<iostream>
using namespace std;

//이렇게 메인 함수 위에 함수를 선언하는 것을 전방선언(Declaration) 이라고 한다.
int Add(int a, int b); 
int Subtract(int a, int b);
int Multi(int a, int b);

int main()
{
	cout << Add(1, 2) << endl;
	cout << Subtract(1, 2) << endl;
	cout << Multi(1, 2) << endl;

	return 0;
}

//실제 함수의 내용부분을 정의(Definition)이라고 한다.
int Add(int a, int b)
{
	return a + b;
}

int Subtract(int a, int b)
{
	return a - b;
}

int Multi(int a, int b)
{
	return a * b;
}