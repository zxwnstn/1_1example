#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
	void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	//�߰����� �Լ��� ���������� �ٲ������ ��� �ɱ�?
	//int print() { cout << "C" << endl; return 0; } �������̵� �ȵ� �̤�..
	void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	void print() { cout << "D" << endl; }
};
//���� �̷��� ���� ����� ��� ���� �ʴ´�.

int main()
{
	A a;
	//a.print();
	B b;
	//b.print();
	C c;
	//c.print();
	D d;
	//d.print();
	//A B C D ������� Ȯ��

	//A &ref = b;
	//ref.print();	//���� A�� ��µ�

	//B &ref_b = c;	//���� B�� ��µ�
	//ref_b.print();
	//C &ref_c = d;	//C
	//ref_c.print();


	//A�� virtual�� ���δٸ�
	A &ref = b;
	ref.print();	//B�� ��µ�


	B &ref_b = c;	//C�� ��µ�(???)
	ref_b.print();	//B�� ������� �ƴѵ�??
					//���� ���� Ŭ������ ������� �ؿ� ��ӹ��� �Լ��鿡
					//���� ������ �ȴ� �����ϸ� �ȴ�.
					//���� ���α׷��Ӱ� ���������� �ڽ�Ŭ�����鿡�� virtual��
					//�Ⱥٿ��� ������ ������
					//���������� �ڽ�Ŭ�����鿡�� virtual�� �ٿ�
					//�̰��� �����Լ��� �������̵��Ͽ��ٴ� ǥ���� ����°��̴�.
					//������ ����
	
	C &ref_c = d;	//D�� ��µ�
	ref_c.print();

	//virtual�� �ý��������� stack�� �̿��ϴ°��� �ƴϴ�.
	//� ǥ�� ���� ã�ư��� �ý����̴�. ���� �׷��� ������ �ʴ�.
	//���� �ݺ��� ���ٸ� virtual�� ���� �ʴ°��� ����.
	//�ʿ��� ���� �����ϰ� ����ϴ� ���� �߿�!

	return 0;

}