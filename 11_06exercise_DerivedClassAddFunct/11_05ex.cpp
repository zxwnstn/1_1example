#include<iostream>
using namespace std;

class Base
{
private:
	int m_value;
public:
	Base(int Value)
		: m_value(Value)
	{}
};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{}

	void setValue(int value)
	{
		//Base::m_value = value;	// ���پȵ� ��� �ϸ� �ɱ�?
								// Base�� m_value�� ���������ڸ� protected�� �ٲ��ָ� ������ �ذ�
		//�׷��� �� Derived���� ��ӹ��� ����� �ٲ�� �ϴ°��ϱ�?
		//����̺�忡�� ����� ����� ��ȣ�ۿ��� �ؾ��ϴ°�쿡�� 
		//Base���� ���� �����ϴ� ���̾ƴ϶�, Derived���� ���� �����ؾ� �Ǳ� �����̴�.
	}
};