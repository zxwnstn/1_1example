#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	virtual void print(int x) { cout << "A" << endl; }
	//final�� �ٿ� ������ �Ǹ�
	//���� Ŭ���� �ؿ� ��ӹ����ֵ��� �������̵� �Ҽ�����.
};

class B : public A
{
public:
	void print(int x) { cout << "B" << endl; }
	//void print(short x) { cout << "B" << endl; }	// �Ķ���Ͱ� �ٸ��� ������
													// ��ǻ� �������̵��� �ƴϴ�.
	// �ӽù������� override �����ڸ� �����ִ�.
	//void print(short x) override { cout << "B" << endl; }
	//�����Ϸ��� �����

	//void print(int x) const override { cout << "B" << endl; }
	// ����Ʈ�� ���ΰ����� �ٸ��� �ν��ϱ� ������ �����Ϸ��� ����ټ� �ִ�.
	// ���� override�� �Ⱥٿ� ��ٸ� �������̵� ��������
	// �ٸ� �Լ��� �ν��Ͽ� ������ �������̴�.
};

class C : public B
{
public:
	void print(int x) final { cout << "C" << endl; }
};

class D : public C
{
public:
	void print(int x) { cout << "D" << endl; }
};

int main()
{
	A a;
	B b;
	C c;

	A &ref = b;
}