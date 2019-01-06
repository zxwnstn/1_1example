## this �����Ϳ� ���� ȣ��
Ŭ������ �ؾ ���?
�� �ν��Ͻ�(�ؾ)���� ��� �����Ҽ� ������?

###
	#include<iostream>
	using namespace std;

	class Simple
	{
	private:
		int m_id;

	pulic:
		Simple(int id)
		{
			this->setID(id);		// �ڱ��ڽ� �����ͷ� setID�Լ��� �̿��Ѵ�.
			(*this).id;
			this->m_id;				// ������ ���� �̷��� ���� �������� �ʴ´�.
									// ��� ������� �̰��� ����� ���� �ִ�..
									// ���� �ð���..

			setId(id);
			cout << this << endl;	// �ڱ� �ڽ��� �ּҸ� ��Ÿ���� 'this' Ű����
		}

		void setID(int id)
		{
			m_id = id;
		}

		int getID()
		{
			return m_id;
		}
	};

	int main()
	{
		Simple s1(1), s2(2);
		s1.setID(2);
		s2.setID(4);	//setID�� getID�Լ��� ��� s1�ȿ� ������ ���ִ°��ϱ�?
						//�׷��� �ʴ�.. ���� �����ٰ� �����̴�. ��� �����ؼ� ����.
						//�׷��ٸ� s1�� s2�� ������ ��� �Ҽ� ������?
		
		**********************************************************************
		******//Simple�� setID(&s2(������), 4(����)) ����� �̷� ������*******
		**********************************************************************
		
		// �ּ� ����
		cout << &s1 << " " << &s2 << endl;

	}

### Chaining Member Funtion

	#include<iostream>
	using namespace std;

	class Calc
	{
	private:
		int m_value;

	public:
		Calc(int init_value)
			: m_value(init_value)
		{}

		void add(int value) { m_value += value; }
		void sub(int value) { m_value -= value; }
		void mult(int value){ m_value *= value; }

		void print()
		{
			cout << m_value << endl;
		}
	};

	//���� ȣ�� �̿��ϱ�!
	int main()
	{
		Calc cal(10);
		cal.add(10);
		cal.sub(1);
		cal.mult(2);		// ���� ���ŷӴٰ� �����ϴ°�??

		cal.print);

	}

	#include<iostream>
	using namespace std;

	class Calc
	{
	private:
		int m_value;

	public:
		Calc(int init_value)
			: m_value(init_value)
		{}

		Calc& add(int value) { m_value += value; return *this }
		Calc& sub(int value) { m_value -= value; return *this }
		Calc& mult(int value){ m_value *= value; return *this }	// ����ȣ��� �Լ� ¥��

		void print()
		{
			cout << m_value << endl;
		}
	};

	int main()
	{
		Calc cal(10);
		cal.add(10).	//�ڱ� �ڽ��� ���ϵ� �°��̱� ������ �׳� . ���̰� ������ ������ ����.
		
		cal.add(10).sub(1).mult(2).print();
		
		�ÿ�����
		Calc cal(10);
		Calc &temp1 = cal.add(10);
		Calc &temp2 = cal.sub(1);
		Calc &temp3 = cal.mult(2);
		temp3.print();


		cal.print);

	}