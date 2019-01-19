#include<iostream>
using namespace std;

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
		cout << "I'm base" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Base &b)
	{
		out << "This is base output" << endl;
		return out;
	}

};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value, int value2 = 1.0)
		: Base(value), m_d(value2)
	{}

	void print()
	{
		Base::print();	// Base�� print �Լ��� ����ǰ� Derived�� print�Լ��� �����
		print(); // �̰�쿡�� ���� ��Ͱ� ����ȴ�. Derived�� print�Լ��� ��� ȣ���
		cout << "I'm derived" << endl;
	}//�׷��� �̸��� ���� �ߺ����� �������̵� �ϴ� ������ ����??
	//���� ����ϴ� ������ �մ�. �������̶� �ſ� �߿��� ��������!!! �����ð���


	friend std::ostream& operator << (std::ostream& out, const Derived &d)
	{
		cout << static_cast<Base>(d);  //static_cast�� �ɱ�??
									   //�ȴ� ������ �θ�Ŭ������ ����� �� �۱⶧��
									   //������ ©���� �θ�Ŭ������ ������ ����հԵȴ�.
		out << "This is derived output" << endl;
		return out;
	}


};

int main()
{
	Base base(5);
	//base.print();

	Derived derived(5);
	//derived.print();		// Base�� print�Լ��� ȣ���

	cout << base;
	cout << derived;


	const int a = 1;
	static_cast<double> (a);

}
