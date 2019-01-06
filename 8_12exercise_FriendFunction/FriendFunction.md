## ģ�� �Լ��� Ŭ����
��ĸ�����̼��� �����ϱ� ���� �ΰ��� ���
ģ���Լ��� ģ�� Ŭ����

###
	#include<iostream>
	using namespace std;

	class A
	{
	private:
		int m_value = 1;

		friend void dosomething(A& a);	// ���� �ذ�
	};


	void doSomething(A& a)
	{
		cout << a.m_value << endl;		// ��������� private�̶� ������ �ȵȴ�?
										// �׷��ٸ� private�� Ǯ�� ������?
										// �Ҽ��� ������ ��ü���������� ���� ������ �ƴϴ�.
	}

	//Friend function ����ϱ�

	void doSomething(A& a)
	{
		cout << a.m_value << endl;
	}						


	//�������� Ŭ������ ģ���� ���� ����?

	class B;	//foward declaration ������ �ڵ带 ������ �����ϴ�.
				// �ε��� �ϰ� ��ߵ� ��찡 ���� �̿����� ������ ����..
				// �̰�쿡�� ���漱���� ���ϱ� �����.

	class A
	{
	private:
		int m_value = 1;

		friend void doSomething(A &a, B& b); //�̷��� �Ǹ� A�� ���忡���� B��
											// �˼��� ���� �ȴ�. B�� A�� �ؿ� �����Ƿ�
	};										//�̷��� ����ϴ� ���� ���漱���̴�.

	class B
	{
	private:
		int m_value =2;

		friend void doSomething(A& a, B& b);
	}


	void doSomething(A& a, B& b)
	{
		cout << a.m_value << " " << b.m_value << endl;
	}
	
	//�ٸ� Ŭ������ �� �����̺� ����� �����Ҽ� �ֵ��� ����� ���ڴ� ���

	class B;
	
	class A
	{
	private:
		int m_value = 1;
	
		friend class B;
		// 1��
	};

	class B
	{
	private:
		int m_value = 2;
	
	public:
		void doSomething(A& a)
		{
			cout << a.m_value << endl;
		}
	};

	int main()
	{
		A a;
		B b;
		b.doSomething(a);
	}

	//��°�� �����ִ°��� �δ㽺����..
	// Ư�� �Լ����� �����ְ� �ʹٸ�??
	1�� friend void B::doSomething(A& a)
	//�׷��� ���漱���� ������ �ϴ����� �˼� ���� ���ǰ� ���� ������.
	// �̰�쿡 �ذ����� ��� �Ұ��ΰ�..
	//�̰�쿡�� Ŭ���� ����Լ��� ����� ���Ǹ� �и� �Ͽ��� �Ѵ�.
	// �ùٸ� ���

	calss A;	// Ŭ���� A�� ���漱��

	class B
	{
	private:
		int m_value = 2;
	public
		void doSomething(A& a);
	};

	class A
	{
	private
		int m_value = 1;

		friend void B::doSomething(A& a);	//B�� ����Լ� doSomething �� ģ���� ��¶�
	};

	void B::doSomething(A& a)
	{
		cout << a.m_value << endl;
	}

	int main()
	{
		A a;
		B b;
		b.doSomehitng(a);

		return 0;
	}