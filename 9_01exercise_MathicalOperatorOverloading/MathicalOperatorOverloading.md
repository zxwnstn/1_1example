## 산술 연산자 오버로딩 하기
클래스들 끼리도 연산을 할수 있다?

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
	}	// 요즘경향은 보이드 함수를 참조 변수로 받기 보단
	// 리턴을 받는게 추세이다

	Cents add(const Cents &c1, const Cents &c2)
	{
		return Cents(c1.getCents() + c2.getCents());
	}


	int main()
	{
		Cents cents1(6);
		Cents cents2(8);

		/*우리가 할수있는 cents끼리의 더하기 void함수 만들기
		Cents sum;
		add(cents1, cents2, sum)

		cout << sum.getCents() << endl;
		//뭔가 편하지 않다??*/

		//정수의 경우
		//int i = 6, j = 8; cout << i + j << endl; 간단하게 되는데 이렇게 
		//내가 만든 사용자 정의 자료형(클래스)는 이런것이 불가능한 것일까?
	}

// 산술연산자 만들기!!

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

	Cents operator + (const Cents &c1, const Cents &c2)	//함수명을 이렇게 ㅏ꾸면 끝남
	{
		return Cents(c1.getCents() + c2.getCents());
	}


	int main()
	{
		Cents cents1(6);
		Cents cents2(8);

		cout << (cents1 + cents2).getCents() << endl;

		//익명 오브젝트이용하기!
		cout << (cents1 + cents2 + Cents(6)).getCents() << endl;
	}

//그런데 나는 더나아가서 getCents마저 거치지 않고싶다면??
//friend 함수 이용!

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

	//주의사항

	// ?: 컨디셔널 오퍼레이터는 오버로딩이 안됨
	// sizeof, :: , .(멤버셀렉션) .*(멤버 포인터 셀렉션) 은 안됨
	// 연산자 우선순위는 그대로임, 이건 못바꾼다.
	// 가급적 수학적으로 직관적으로 와닿는것만 연산자 오버로딩을 하는것이 좋다.
	// 그 외에 것들을 오버로딩하는것은 위험하다, 차라리 함수를 쓰자
	// ^(bitwise xor) 이 오퍼레이터는 ()로 싸야한다. 따라서 ^는 오버로딩 하는것이 별로다..
	//

	//조금더 진보된 형태?
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

	//이렇게 프렌드 함수를 쓰면 잘된다
	//하지만 프렌드를 지우고 멤버 펑션으로 하게되면??
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

		Cents operator + (const Cents &c1, const Cents &c2) // 오류가 생긴다.
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

		Cents operator + (const Cents &c1, const Cents &c2) //왼쪽에 것은 this로 대체해야 한다.
		{
			return Cents(c1.m_cents + c2.m_cents); // 그리고 멤버 펑션이기 때문에
														// 멤버 변수에 직접 접근이 가능하다.
		}
		Cents operator + (const Cents &c2)
		{
			return Cents(this->m_cents  + c2.m_cents); 
		}
	};
	
	//주의 사항
	//멤버 변수로만 오버로딩 해야하는 경우 안된다.
	// =(assignment) , [](subscript),  ()(functioncall), ->(member selection)
	//멤버 펑션으로만 오버로딩이 가능 하다.