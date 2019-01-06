## 정적 멤버 함수

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
		cout << Somethitng::s_value << endl;	// 접근안됨

		Something s1;
		cout << s1.getValue() << endl;
		cout << s1.s_value << endl;		// 접근안됨

		//특정 함수를 인스턴스와 상관없이 부를수 있으면 좋겟다..
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
		cout << Something::getValue() << endl;	//인스턴스에 구에 받지 않는 정적
												//함수를 만들었다!
		Something s1;
		cout << s1.getValue() << endl;

		return 0;
	}
	//주의점

	class Something
	{
	private:
		static int s_value;
		int m_value = 1;

	public:
		static int getValue()
		{
			return this->s_value;		//스태틱 멤버함수는 this를 못쓴다.
			return m_value;				//이녀석은 왜안될까??
			//일단 m_value는 특정 인스턴스 속에 존재하는 녀석이다.
			//저 리턴을 풀어보면
			//this->m_value라고 풀수있게되는데
			//이는 this를 쓰게되는것과 같게되는 것이다.
			//애당초 메모리에 한부분만을 차지하고 있는 함수라 this라는 포인터
			//주소 의미가 사라지게 된다.
			//static 멤버함수는 특정 인스턴스에 속하는 것이 아니라 this
			//포인터 접근이 불가능하다.
		}
		
		int temp()
		{
			return this->s_value + this->m_value;
		}
	};
	int Something::s_value = 1024;

	int main()
	{
		cout << Something::getValue() << endl;	//인스턴스에 구에 받지 않는 정적
												//함수를 만들었다!
		Something s1;
		cout << s1.getValue() << endl;

		//멤버함수 포인터 가져오기 - 1 일반적인 멤버 함수
		int(Something::*fptr1)() = s1.temp;
		int(Something::*fptr1)() = &s1.temp;
		//왜안될까?? 
		//이유는 앞시간에 배웠던 클래스 멤버함수의 의미에서 찾을수있다.
		//클래스 멤버 함수는 클래스의 인스턴스가 만들어질때마다 그인스턴스에
		//각각 하나씩 속해지는것이 아니다.(주의!!)
		//클래스 멤버 함수는 메모리 어딘가에 하나만 존재하게 되며
		//인스턴스의 이름이 s1이라 할경우 s1의 포인터로 그 멤버 변수를 접근하여
		//이 함수를 작동시켜! 라는 의미를 갖게 되기 때문이다.
		//따라서 s1의 함수 temp의 주소라는 것은 문맥상 말이 되지 않는다.

		//이럴경우에 따로 사용해야 되는 문법이 바로 이것이다.
		int(Something::*fptr1)() = &Something::temp;
		//바로 클래스 Something에 있는 멤버 함수 temp의 주소를 줘!
		//라는 식의 어법을 사용해야 하는 것이다.

		//사용 방식
		cout << (s2.*fptr1)() << endl;
		
		//s2를 넘기는 것은 s2this 포인터를 넘기는것이라 이해해야한다.



		2 - 정적 멤버 함수 포인터 받기

		int(Something::*fptr2)() = &Something::getValue;	//안된다.

		int(*fptr) = &Something::getValue;					//가능
		//왜 이렇게 될까??
		//이유는 정적 멤버 함수 getValue는 정적으로 선언되어
		//특정 인스턴스에 구에받지 않고 작동될수 있어야 하기 때문이다.

		cout << fptr2() << endl;

		return 0;
	}

###
	static멤버 변수는 같은이유로 constructor로 초기화 할수 없다.
	class Something
	{
	private:
		static int s_value;
		int m_value;

	public:
		Something()
			: s_value(123)		//불가능
			, m_value(1234)
		{}
		//static생성자라면 가능한데 c++은 지원하지 않는다.
	}
	//우회 해서 클래스 안에서 초기화는 가능하다.
	

### 클래스 안에 클래스 만들기와 스태틱 변수 내부에서 초기화 하기?
	class Something
	{
	public:				//이너 클래스 정의
		
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

		static _init s_initializer;		//이너 클래스를 static으로 만들기
	
	public:
		static int getValue()
		{
			return s_value;
		}
	
	};
	int Something::s_vlaue = 1024;
	Something::_init Something::s_initializer;
