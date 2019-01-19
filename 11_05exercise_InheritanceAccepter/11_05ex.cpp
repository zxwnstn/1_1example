#include<iostream>
using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

//class Derived : public Base // : public�� ����������̴�.
//{
//public:
//	Derived()
//	{
//		m_public = 123;
//		m_protected = 1234;
//		//m_private = 123; // �ȵ� private�� �ڽ�Ŭ���������� ����� ���� ����.
//	}
//};

//class Derived : protected Base
//{
//public:
//	Derived()
//	{
//		m_public = 123;		//��
//		m_protected = 1234;	//��
//		//m_private = 123;  //���� �ȵ�
//	}
//};

class Derived : private Base
{
public:
	Derived()
	{
		m_public = 123;		//��
		m_protected = 1234;	//�ǳ�?
		//m_private = 123;  //���� �ȵ�
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		Derived::m_public;	// ��ӹ��� public�� privateó�� �Ǿ �ȵ�
	}
};

int main()
{
	Base base;
	Derived derived;

	//public���� ��ӹ��� ���
	derived.m_public = 1024; //��
	//derived.m_protected = 123;	// �ȵ�
	//derived.m_private = 123;	// �ȵ�

	//public���� ��ӹ��� ���
	//derived.m_public = 1024;	 // �ȵ�
	//derived.m_protected = 123; // �ȵ�
	//derived.m_private = 123;	 // �ȵ�
	
	//private�� ��ӹ��� ���
}