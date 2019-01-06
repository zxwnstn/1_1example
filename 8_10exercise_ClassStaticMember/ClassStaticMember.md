## 정적 멤버 변수

###
	#include<iostream>
	using namespace std;

	class Something
	{
	public:
		int m_value = 1;

	};

	int main()
	{
		Something st1;
		Something st2;
		st1.m_value = 2;

		cout << &st1.m_value << " " << st1.m_value << endl;
		cout << &st2.m_value << " " << st2.m_value << endl;
	}

	#include<iostream>
	using namespace std;

	class Something
	{
	public:
		//static int m_value = 1;		// 에러가 뜸
									// 스태틱 멤버변수는 초기화 할수 없음
		static int m_value;

	int Something::m_value = 1;
	};

	int main()
	{
		놀랍게도 Something 의 인스턴스가 없어도 멤버변수가 존재한다.
		cout << &Something::s_value << " " << Something::s_value << endl;
		//밑에와 주소마저 같다.
	
		Something st1;
		Something st2;
		st1.m_value = 2;

		cout << &st1.m_value << " " << st1.m_value << endl;		//놀랍게도 주소가 같다
		cout << &st2.m_value << " " << st2.m_value << endl;		// 또한 값도 같다
	}

	//주의 사항
	정적 변수의 정의는 반드시cpp에 있어야 한다.(헤더에 있으면 안됨)

	//const static의 경우
	class Something
	{
	public:
		static const int m_value = 1;		//초기화 가능
		static constexpr int s_value = 1;	//컴파일 타임에 반드시 초기화 되어야 하는
											//constexpr사용
	//싱글턴 디자인 패턴에서 쓰일수 있음.

	//int Something::m_value = 1; 이것이 안됨
	};