## ���� ��� ����

###
	#include<iostream>
	using namespace std;

	class Something
	{
	public:
		int m_value = 1;

	};

	int main()
	{
		Something st1;
		Something st2;
		st1.m_value = 2;

		cout << &st1.m_value << " " << st1.m_value << endl;
		cout << &st2.m_value << " " << st2.m_value << endl;
	}

	#include<iostream>
	using namespace std;

	class Something
	{
	public:
		//static int m_value = 1;		// ������ ��
									// ����ƽ ��������� �ʱ�ȭ �Ҽ� ����
		static int m_value;

	int Something::m_value = 1;
	};

	int main()
	{
		����Ե� Something �� �ν��Ͻ��� ��� ��������� �����Ѵ�.
		cout << &Something::s_value << " " << Something::s_value << endl;
		//�ؿ��� �ּҸ��� ����.
	
		Something st1;
		Something st2;
		st1.m_value = 2;

		cout << &st1.m_value << " " << st1.m_value << endl;		//����Ե� �ּҰ� ����
		cout << &st2.m_value << " " << st2.m_value << endl;		// ���� ���� ����
	}

	//���� ����
	���� ������ ���Ǵ� �ݵ��cpp�� �־�� �Ѵ�.(����� ������ �ȵ�)

	//const static�� ���
	class Something
	{
	public:
		static const int m_value = 1;		//�ʱ�ȭ ����
		static constexpr int s_value = 1;	//������ Ÿ�ӿ� �ݵ�� �ʱ�ȭ �Ǿ�� �ϴ�
											//constexpr���
	//�̱��� ������ ���Ͽ��� ���ϼ� ����.

	//int Something::m_value = 1; �̰��� �ȵ�
	};