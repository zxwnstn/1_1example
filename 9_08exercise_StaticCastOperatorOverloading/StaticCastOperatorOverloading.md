## 형변환을 오버로딩하기(typecast)

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
		printInt(cents);	// printInt함수를 통해 Cents자료형을 
							// int 자료형으로 암시적 형변환을 시도하지만..
							// 너무나도 당연하게 안된다.
		return 0;
	}

	//cast 오버로딩을 이용하여 해결하기!
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

		operator int()		// int자료형으로 캐스팅을 해주는 오버로딩 함수 구현!
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
		//이 모습은 흡사
		int value = (int)cents;
		value = int(cents);
		value = static_cast<int>(cents);	// 이러한 형태와 전부 같다

		printInt(cents);
	}

	//조금더 실용적 예제
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

		Cents cents = dol;		// 클래스 Dollars 자료형이 Cents로 암시적 형변환이 일어나고 있다.

		printInt(cents);

		return 0;
	}
