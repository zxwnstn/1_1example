## 익명 객체
	//print 함수를 이용하려면?

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
		A a;		// a라는 인스턴스를 만듦
		a.print()	// a라는 인스턴스를 굳이 만들어야 했을까?

		A().print() // r밸류 처럼 작동하고 있다.
		A().print()	// 재사용이 풀가능하다.
		A().print()	// 각각 생성소멸이 일어난다.

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
		A(1).printDouble(); // 2가 정상적으로 잘 호출된다.
	}

	//조금더 복잡한 사용?

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
		cout << int(6) + int (8) << endl;	// 과연이게 캐스팅이였을까?

	}