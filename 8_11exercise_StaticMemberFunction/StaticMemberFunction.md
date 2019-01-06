## ���� ��� �Լ�

###
	#include<iostream>
	using namespace std;

	class Something
	{
	private:
		static int s_value;
	public:
		int getValue()
		{
			return s_value;
		}
	};

	int main()
	{
		cout << Somethitng::s_value << endl;	// ���پȵ�

		Something s1;
		cout << s1.getValue() << endl;
		cout << s1.s_value << endl;		// ���پȵ�

		//Ư�� �Լ��� �ν��Ͻ��� ������� �θ��� ������ ���ٴ�..
	}

	class Something
	{
	private:
		static int s_value;

	public:
		static int getValue()
		{
			return s_value;
		}
	};
	int Something::s_value = 1024;

	int main()
	{
		cout << Something::getValue() << endl;	//�ν��Ͻ��� ���� ���� �ʴ� ����
												//�Լ��� �������!
		Something s1;
		cout << s1.getValue() << endl;

		return 0;
	}
	//������

	class Something
	{
	private:
		static int s_value;
		int m_value = 1;

	public:
		static int getValue()
		{
			return this->s_value;		//����ƽ ����Լ��� this�� ������.
			return m_value;				//�̳༮�� �־ȵɱ�??
			//�ϴ� m_value�� Ư�� �ν��Ͻ� �ӿ� �����ϴ� �༮�̴�.
			//�� ������ Ǯ���
			//this->m_value��� Ǯ���ְԵǴµ�
			//�̴� this�� ���ԵǴ°Ͱ� ���ԵǴ� ���̴�.
			//�ִ��� �޸𸮿� �Ѻκи��� �����ϰ� �ִ� �Լ��� this��� ������
			//�ּ� �ǹ̰� ������� �ȴ�.
			//static ����Լ��� Ư�� �ν��Ͻ��� ���ϴ� ���� �ƴ϶� this
			//������ ������ �Ұ����ϴ�.
		}
		
		int temp()
		{
			return this->s_value + this->m_value;
		}
	};
	int Something::s_value = 1024;

	int main()
	{
		cout << Something::getValue() << endl;	//�ν��Ͻ��� ���� ���� �ʴ� ����
												//�Լ��� �������!
		Something s1;
		cout << s1.getValue() << endl;

		//����Լ� ������ �������� - 1 �Ϲ����� ��� �Լ�
		int(Something::*fptr1)() = s1.temp;
		int(Something::*fptr1)() = &s1.temp;
		//�־ȵɱ�?? 
		//������ �սð��� ����� Ŭ���� ����Լ��� �ǹ̿��� ã�����ִ�.
		//Ŭ���� ��� �Լ��� Ŭ������ �ν��Ͻ��� ������������� ���ν��Ͻ���
		//���� �ϳ��� �������°��� �ƴϴ�.(����!!)
		//Ŭ���� ��� �Լ��� �޸� ��򰡿� �ϳ��� �����ϰ� �Ǹ�
		//�ν��Ͻ��� �̸��� s1�̶� �Ұ�� s1�� �����ͷ� �� ��� ������ �����Ͽ�
		//�� �Լ��� �۵�����! ��� �ǹ̸� ���� �Ǳ� �����̴�.
		//���� s1�� �Լ� temp�� �ּҶ�� ���� ���ƻ� ���� ���� �ʴ´�.

		//�̷���쿡 ���� ����ؾ� �Ǵ� ������ �ٷ� �̰��̴�.
		int(Something::*fptr1)() = &Something::temp;
		//�ٷ� Ŭ���� Something�� �ִ� ��� �Լ� temp�� �ּҸ� ��!
		//��� ���� ����� ����ؾ� �ϴ� ���̴�.

		//��� ���
		cout << (s2.*fptr1)() << endl;
		
		//s2�� �ѱ�� ���� s2this �����͸� �ѱ�°��̶� �����ؾ��Ѵ�.



		2 - ���� ��� �Լ� ������ �ޱ�

		int(Something::*fptr2)() = &Something::getValue;	//�ȵȴ�.

		int(*fptr) = &Something::getValue;					//����
		//�� �̷��� �ɱ�??
		//������ ���� ��� �Լ� getValue�� �������� ����Ǿ�
		//Ư�� �ν��Ͻ��� �������� �ʰ� �۵��ɼ� �־�� �ϱ� �����̴�.

		cout << fptr2() << endl;

		return 0;
	}

###
	static��� ������ ���������� constructor�� �ʱ�ȭ �Ҽ� ����.
	class Something
	{
	private:
		static int s_value;
		int m_value;

	public:
		Something()
			: s_value(123)		//�Ұ���
			, m_value(1234)
		{}
		//static�����ڶ�� �����ѵ� c++�� �������� �ʴ´�.
	}
	//��ȸ �ؼ� Ŭ���� �ȿ��� �ʱ�ȭ�� �����ϴ�.
	

### Ŭ���� �ȿ� Ŭ���� ������ ����ƽ ���� ���ο��� �ʱ�ȭ �ϱ�?
	class Something
	{
	public:				//�̳� Ŭ���� ����
		
		class _init
		{
		pulic:
			_init()
			{
				s_value = 9876;
			}
		};

	private:
		static int s_value;
		int m_value;

		static _init s_initializer;		//�̳� Ŭ������ static���� �����
	
	public:
		static int getValue()
		{
			return s_value;
		}
	
	};
	int Something::s_vlaue = 1024;
	Something::_init Something::s_initializer;
