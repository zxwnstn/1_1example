#include<iostream>
#include<string>
using namespace std;

//class Mother
//{
//public:
//	int m_i;
//
//public:
//	Mother(const int & i_in = 0)
//		: m_i(i_in)
//	{
//		cout << "Mother construction" << endl;
//	}
//};
//
//class Child : public Mother
//{
//public:
//	double m_d;
//
//public:
//	Child()
//		//: Mother()/*��� �̳༮�� �����ִ°��̴�.*/, m_d(1.0)
//		//: Mother(1024), m_d(1.0)
//		: m_d(1.0), Mother(1024) // ���� �̷��� �ٲٴ��� ������ Mother����Ʈ���Ͱ�
//		//���� �����̵ȴ�.
//	{
//		m_i = 1024; //�̷������� �ʱ�ȭ�� �����ϴ�
//					//m_i�� �ʱ�ȭ�� ������ �������� ���⶧���̴�.
//		cout << "Child construction" << endl;
//	}
//};
//
//int main()
//{
//	Child c1;	//mother construction�� ���� �����
//	return 0;	//mother�� ������� �ʱ�ȭ �ǰ� child�� ������� �ʱ�ȭ��
//}

//���̰� ���� ����� �������?

class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
 	}
};

class B : public A
{
public:
	B()
	{
		cout << "B constructor" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C constructor" << endl;
	}
};

int main()
{
	C c; cout << endl;
	B b; cout << endl;
	A a; cout << endl;

	//����� destructor�� ������ ������ �ݴ�� ����.
	return 0;
}