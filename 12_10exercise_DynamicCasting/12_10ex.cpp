#include<iostream>
#include<string>
using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Der : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "i'm derived" << endl;
	}
};

class Der2 : public Base
{
public:
	string mName = "Dr Martin";
	virtual void print() override
	{
		cout << "Im der2" << endl;
	}
};

int main()
{
	Der d1;
	d1.m_j = 2048;
	Base *base = &d1;
	//�������� ������..
	//d1������ �Լ��� ������� ������ �Ҽ�����.
	//base->m_j; // ���踦 ���ؼ� �̷����� ���ִ°� ����.
	//base�� �ٽ� Der�� �ٲ�� �Ҷ��� �ִ�. 

	auto *base_to_d1 = dynamic_cast<Der*>(base);
	cout << base_to_d1->m_j << endl;
	base_to_d1->m_j = 26;
	cout << d1.m_j << endl;
	//�ǵ��ؼ� ���� ���� ������ ���ϵ��� �Ѵ�..

	
	//���ǻ���!
	// Ȥ�� derived2�� ��������ȯ�� �Ҽ�������??
	auto *base_to_d2 = dynamic_cast<Der2*>(base);
	//���̳��� ĳ��Ʈ�� ����ȯ�� �����ϸ� �������͸� �־������..

	if (base_to_d2 != nullptr)
		cout << base_to_d2->mName << endl;
	else
		cout << "Failed" << endl;

	//staticĳ��Ʈ�� �Ȱ��� ����Ҽ��ִ�.
	// staticĳ��Ʈ�� �ִ��� �ɼ��ִµ��� �о� ���δ�.
	// dynamic_cast�� ��Ÿ�ӿ��� ����üũ�� ���ش�.
}