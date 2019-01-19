#include<iostream>
using namespace std;

class Base
{
public:
	virtual ~Base() // virtual�� �ſ��߿�!
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int *m_array;

public:
	Derived(int length)
	{
		m_array = new int[length];
	}
	
	virtual ~Derived() override
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};

int main()
{
	//Derived derived(5);
	
	//������ ���
	Derived *derived = new Derived(5);
	Base *base = derived;
	delete base;
	// �̷��� ����ϰ� base�� delete���ִ� ���� �������̴�.
	// ������ �̷��� ������ �Ұ�쿡 ������ ����� ���� �ִµ�
	// �ٷ� Derived�� �Ҹ��ڴ� ������ ���� �ʴ´ٴ� ���̴�.

	//�̰��� �����ϰ� �ذ��Ҽ� �ִµ� �ٷ�
	//�Ҹ��ڸ� virtual�� �ٲٸ� �Ǵ°��̴�.

	return 0;
}