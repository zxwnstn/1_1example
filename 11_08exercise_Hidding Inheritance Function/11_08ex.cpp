#include<iostream>
using namespace std;

//using�� �Ἥ ��ӹ��� ������ �����ڸ� ������� �ٲ��ֱ�

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		: m_i(value)
	{}

	void print()
	{
		cout << "i'm base" << endl;
	}
};

class Derived : public Base
{
private:
	double m_d;
public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i;		// �̷��� ������� m_i�� �ۺ��� �Ǿ������ ���� ������ �ްԵȴ�.
							// �� �ۺ� ������ ���̿����Ѵ�.

private:
	using Base::print;		// �̶��� �Լ��� ȣ���ϴ� ���� �ƴ϶� ()�� ġ�� �ȵȴ�!!!!!!
	//�Ǵ�
	void print() = delete;	// �̷��� �ƿ� ����Ʈ�� ��������� ����

};

int main()
{
	Derived derived(7);
	derived.m_i = 1024;
	derived.print();		// �Ϲ������� �ۺ��� �θ� �Լ��� ���� ����
							// print�Լ��� private�� �ٲٰų� delete �ع����� ������ ��������.
	Base base(5);
	base.print();			//�̻����
}