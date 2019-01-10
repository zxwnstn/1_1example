## ��� ������ �����ε� �ϱ�
Ŭ������ ������ ������ �Ҽ� �ִ�?

###
	
	#include<iostream>
	using namespace std;

	class Cents
	{
	private:
		int m_cents;

	public:
		Cents(int cents = 0)
		{
			m_cents = cents;
		}
		int getCents() const { return m_cents; }
		int &getCents() { return m_cents; }
	};

	void add(const Cents &c1, const Cents &c2, Cents &c_out)
	{
		c_out.getCents() = c1.getCents() + c2.getCents();
	}	// ��������� ���̵� �Լ��� ���� ������ �ޱ� ����
	// ������ �޴°� �߼��̴�

	Cents add(const Cents &c1, const Cents &c2)
	{
		return Cents(c1.getCents() + c2.getCents());
	}


	int main()
	{
		Cents cents1(6);
		Cents cents2(8);

		/*�츮�� �Ҽ��ִ� cents������ ���ϱ� void�Լ� �����
		Cents sum;
		add(cents1, cents2, sum)

		cout << sum.getCents() << endl;
		//���� ������ �ʴ�??*/

		//������ ���
		//int i = 6, j = 8; cout << i + j << endl; �����ϰ� �Ǵµ� �̷��� 
		//���� ���� ����� ���� �ڷ���(Ŭ����)�� �̷����� �Ұ����� ���ϱ�?
	}

// ��������� �����!!

	class Cents
	{
	private:
		int m_cents;

	public:
		Cents(int cents = 0)
		{
			m_cents = cents;
		}
		int getCents() const { return m_cents; }
		int &getCents() { return m_cents; }
	};

	Cents operator + (const Cents &c1, const Cents &c2)	//�Լ����� �̷��� ���ٸ� ����
	{
		return Cents(c1.getCents() + c2.getCents());
	}


	int main()
	{
		Cents cents1(6);
		Cents cents2(8);

		cout << (cents1 + cents2).getCents() << endl;

		//�͸� ������Ʈ�̿��ϱ�!
		cout << (cents1 + cents2 + Cents(6)).getCents() << endl;
	}

//�׷��� ���� �����ư��� getCents���� ��ġ�� �ʰ�ʹٸ�??
//friend �Լ� �̿�!

	class Cents
	{
	private:
		int m_cents;

	public:
		Cents(int cents = 0)
		{
			m_cents = cents;
		}
		int getCents() const { return m_cents; }
		int &getCents() { return m_cents; }

		friend Cents operator + (const Cents &c1, const Cents &c2);
	};

	Cents operator + (const Cents &c1, const Cents &c2)	
	{
		return Cents(c1.getCents() + c2.getCents());
	}


	int main()
	{
		Cents cents1(6);
		Cents cents2(8);

		cout << (cents1 + cents2).getCents() << endl;
		cout << (cents1 + cents2 + Cents(6) + Cents(10)).getCents() << endl;
	}

	//���ǻ���

	// ?: ����ų� ���۷����ʹ� �����ε��� �ȵ�
	// sizeof, :: , .(���������) .*(��� ������ ������) �� �ȵ�
	// ������ �켱������ �״����, �̰� ���ٲ۴�.
	// ������ ���������� ���������� �ʹ�°͸� ������ �����ε��� �ϴ°��� ����.
	// �� �ܿ� �͵��� �����ε��ϴ°��� �����ϴ�, ���� �Լ��� ����
	// ^(bitwise xor) �� ���۷����ʹ� ()�� �ξ��Ѵ�. ���� ^�� �����ε� �ϴ°��� ���δ�..
	//

	//���ݴ� ������ ����?
	class Cents
	{
	private:
		int m_cents;

	public:
		Cents(int cents = 0)
		{
			m_cents = cents;
		}
		int getCents() const { return m_cents; }
		int &getCents() { return m_cents; }

		friend Cents operator + (const Cents &c1, const Cents &c2)
		{
			return Cents(c1.getCents() + c2.getCents());
		}
	};

	//�̷��� ������ �Լ��� ���� �ߵȴ�
	//������ �����带 ����� ��� ������� �ϰԵǸ�??
	class Cents
	{
	private:
		int m_cents;

	public:
		Cents(int cents = 0)
		{
			m_cents = cents;
		}
		int getCents() const { return m_cents; }
		int &getCents() { return m_cents; }

		Cents operator + (const Cents &c1, const Cents &c2) // ������ �����.
		{
			return Cents(c1.getCents() + c2.getCents());
		}
	};
	class Cents
	{
	private:
		int m_cents;

	public:
		Cents(int cents = 0)
		{
			m_cents = cents;
		}
		int getCents() const { return m_cents; }
		int &getCents() { return m_cents; }

		Cents operator + (const Cents &c1, const Cents &c2) //���ʿ� ���� this�� ��ü�ؾ� �Ѵ�.
		{
			return Cents(c1.m_cents + c2.m_cents); // �׸��� ��� ����̱� ������
														// ��� ������ ���� ������ �����ϴ�.
		}
		Cents operator + (const Cents &c2)
		{
			return Cents(this->m_cents  + c2.m_cents); 
		}
	};
	
	//���� ����
	//��� �����θ� �����ε� �ؾ��ϴ� ��� �ȵȴ�.
	// =(assignment) , [](subscript),  ()(functioncall), ->(member selection)
	//��� ������θ� �����ε��� ���� �ϴ�.