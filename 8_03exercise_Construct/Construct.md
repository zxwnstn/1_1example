## 생성자
클래스의 디폴트?

###

	Class Fraction
	{
	Private:
		int m_numberator;	//분자
		int m_denominator;  //분모

	public:
		void print()
		{
			cout << m_numberator << " / " << m_denominator << endl;
		}
	};

	int main()
	{
		Fraction frac;		// 멤버초기화를 안시키고
		frac.print();		// 출력한다면? 이상한 숫자들이 막출력?!

		//해결방법1
		멤버들을 퍼블릭으로 바꾸고 외부에서 초기화를 하나하나 해준다.
		초기화를 굳이 하나를 안하고 유니셜라이제이션 초기화를 시켜줄수 있다.
		하지만 퍼블릭으로 하지 않게 하고 싶다면 어떻게 해주어야 할까?
		기본값을 설정하는 방법이 있다
	}

	솔루션 1 - 멤버변수 초기화 해주기
	Class Fraction
	{
	Private:
		int m_numberator = 1;	//기본값을 그냥 설정할수 있다
		int m_denominator = 1;

	public:
		void print()
		{
			cout << m_numberator << " / " << m_denominator << endl;
		}
	};

	int main()
	{
		Fraction frac;
		frac.print();		// 1 / 1 출력
	}

	Class Fraction
	{
	Private:
		int m_numberator;
		int m_denominator;

	public:
		//생성자
		Fraction()			// 외부에서 호출은 하지 않는다(다음에 설명)
							// 선언과 동시에 실행된다.
		{
			m_numerator = 1;
			m_denominator = 1;

			cout << "Fraction() Constructor" << endl;
		}
		

		void print()
		{
			cout << m_numberator << " / " << m_denominator << endl;
		}
	};

	int main()
	{
		Fraction frac;		// 디버거로 찍으면 바로 생성자로 들어감
		frac.print();		// 0 / 1 출력
	}
	//주의사항 생성자도 일종의 함수인데 왜 ()를 쓰지 않나??
	//Fraction frac();이 올바른 표현 아닐까??
	//생성자의 매개변수가 하나도 없을 경우 ()를 붙이지 않는다(주의)
	//이말인즉 생성자도 매개변수를 가질수 있다는 뜻이다.
	//?? 생성자의 매개변수가 하나도 없다? 생성자를 만들지 않는다면 생성자는 없는것일까..

	Class Fraction
	{
	Private:
		int m_numberator;
		int m_denominator;

	public:
		//Fraction(const int & num_in, const int& den_in)
		Fraction(const int & num_in = 1, const int& den_in = 1) 생성자 파라미터의 디폴트값도 설정할숭 ㅣㅆ따.
		{
			m_numerator = num_in;
			m_denominator = den_in;

			cout << "Fraction() Constructor" << endl;
		}

		//생성자가 없다면 아무일도 안하는 디폴트 생성자가 숨어있어 컴파일러가 그것을 쓴다.
		//Fraction(){};

		//constructor가 생성하는것이 아니다!!(언어적 의미로 파악하지 말것)
		//생성자는 그저 클래스에 필수적으로 들어가는 함수에 불과 하다.


		void print()
		{
			cout << m_numberator << " / " << m_denominator << endl;
		}
	};

	int main()
	{
		Fraction one_thirds(1, 3);
		one_thirds.print();
		Fraction one_thirds();		// 헷갈리지 말자 이렇게 하면 안된다.
		one_thirds.print();

		Fraction one_thirds;		// 맞는 표현
		one_thirds.print();			// 1, 1
	}

	//생성자를 2개를 만든다면??
	//중복이 되어 에러가 뜬다. ambiguos문제와는 다름

	//copy initialization 사용하기
	Fraction one_thirds = Fraction{1, 2}; // 권장하지 않음
	Fraction one_thirds{1, 3};		//권장되는 형태
	Fraction one_thirds(1, 3);
	//둘의 차이는 ??
	{}의 경우는 class가 public일 경우 안된다
	{}의 경우 생성자가 있다면 호출을 해준다.
	그리고 {}의 경우 형변환을 허용하지 않는다.
	()은 형변환을 허용해 준다.
	따라서 {}가 더 엄격하고 정밀하다고 볼수있다.

### 기타 클래스가 다른 클래스의 멤버일때?


	class Second
	{
	public:
		second()
		{
			cout << "class Second constructor()" << endl;
		}
	};

	class First
	{
		Second sec;
	public:
		First()
		{
			cout << "class First constructor()" << endl;
		}
	};

	int main()
	{
		First fir;		// second가 먼저, first가 나중에
						// 멤버 변수 second가 먼저 만들어 져야 first클래스를 쓸수있다.
	}

	생성자를 private??
	이것은 어떻게 생각할수 있을까? 다음시간에..