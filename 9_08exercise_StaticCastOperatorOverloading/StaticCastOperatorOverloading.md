## ����ȯ�� �����ε��ϱ�(typecast)

### 
	class Cents
	{
	private:
		int m_cents;
	public:
		Cents(int cents = 0)
		{
			m_cents = cents;
		}

		int getCents()
		{
			return m_cents;
		}

		void setCents(int cents)
		{
			m_cents = cents;
		}
	};

	void printInt(const int& value)
	{
		cout << value << endl;
	}

	int main()
	{
		Cents cents(7);
		printInt(cents);	// printInt�Լ��� ���� Cents�ڷ����� 
							// int �ڷ������� �Ͻ��� ����ȯ�� �õ�������..
							// �ʹ����� �翬�ϰ� �ȵȴ�.
		return 0;
	}

	//cast �����ε��� �̿��Ͽ� �ذ��ϱ�!
	class Cents
	{
	private:
		int m_cents;
	public:
		Cents(int cents = 0)
		{
			m_cents = cents;
		}

		int getCents()
		{
			return m_cents;
		}

		void setCents(int cents)
		{
			m_cents = cents;
		}

		operator int()		// int�ڷ������� ĳ������ ���ִ� �����ε� �Լ� ����!
		{
			cout << "cast here" << endl;
			return m_cents;
		}
	};

	void printInt(const int& value)
	{
		cout << value << endl;
	}

	int main()
	{
		Cents cents(7);
		//�� ����� ���
		int value = (int)cents;
		value = int(cents);
		value = static_cast<int>(cents);	// �̷��� ���¿� ���� ����

		printInt(cents);
	}

	//���ݴ� �ǿ��� ����
	class Dollar
	{
	private:
		int m_dollars = 0;
	public:
		Dollar(const int& input) 
			: m_dollars(input)
		{}

		operator Cents()
		{
			return cents(m_dolloars * 100);
		}
	};

	int main()
	{
		Dollars dol(2);

		Cents cents = dol;		// Ŭ���� Dollars �ڷ����� Cents�� �Ͻ��� ����ȯ�� �Ͼ�� �ִ�.

		printInt(cents);

		return 0;
	}
