## �͸� ��ü
	//print �Լ��� �̿��Ϸ���?

	class A
	{
	public:

		void print()
		{
			cout << "Hello" << endl;
		}
	};

	int main()
	{
		A a;		// a��� �ν��Ͻ��� ����
		a.print()	// a��� �ν��Ͻ��� ���� ������ ������?

		A().print() // r��� ó�� �۵��ϰ� �ִ�.
		A().print()	// ������ Ǯ�����ϴ�.
		A().print()	// ���� �����Ҹ��� �Ͼ��.

		return0;
	}

	class A
	{
	public
		int m_value;

		A(const int &input)
			: m_value(input)
		{}
		void printDouble()
		{
			cout << m_value * 2 << endl;
		}
	};

	int main()
	{
		A(1).printDouble(); // 2�� ���������� �� ȣ��ȴ�.
	}

	//���ݴ� ������ ���?

	class Cents
	{
	private:
		int m_cents;
	public:
		Cents(int cents){ m_cents = cents; }

		int getCents() const { return m_cents; }
	}

	Cents add(const Cents &c1, const Cents &c2)
	{
		return Cents( c1.getCents() + c2.getCents() );
	}

	int main()
	{
		cout << add(Cents(6), Cents(8)).getCents() << endl;
		cout << int(6) + int (8) << endl;	// �����̰� ĳ�����̿�����?

	}