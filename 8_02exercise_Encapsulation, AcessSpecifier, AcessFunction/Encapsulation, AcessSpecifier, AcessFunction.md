## 캡슐화, 접근 지정자, 접근 함수
뛰어난 프로그래머는?
복잡해 보이는것을 단순화하고, 정리하고, 연관관계를 깔끔히 하고, 간단히 설계하는것이다.
최근 소프트웨어의 방식은 재활용이다.

### 캡슐화 Encapsulation
	#include<iostream>;
	#include<string>
	#include<vector>
	using namespace std;

	stuct Date					//이것을 클래스로 바꾸면??
	{
		int m_month;
		int m_day;
		int m_year;
	};

	int main()
	{
		Date today;     //{8, 4, 2025};
		today.m_month = 8;
		today.m_day = 4;			//여기에 빨간줄이 쫙 뜬다.
		today.m_year = 2025;		//그것의 의미는? 클래스 Date꺼니까 건들지 마;;, 라고 말하는 것이다.
									//해소법으로는 class안에 public: 을 넣주면 된다.
	}




### 접근 지정자
public : 외부에서 접근 허용
private : 외부에서 접근 불허(디폴트)
protected : 다음 기회에..

그렇다면 private으로 막아논 클래스라면 어떠한 방식으로 멤버에 접근할까?
access 함수를 만들어준다!(클래스 멤버들의 메니져 같은 것임)


### 접근 함수


	class Date
	{
		int m_month;
		int m_day;
		int m_year;

	public:
		void setDate(const int &month_input, const int& day_input, const int& year_input)
		{
			m_month = month_input;
			m_day = day_input;
			m_year = year_input
		}	// 외부와 의사소통을 위한 함수 이고, 메니져라 생각하면 좋다!
			// 이 함수는 내부의 멤버변수들을 (내부에서) 자유로이 이용할 수 있으며 외부에서도 접근이 가능하다.

		void setMonth(const int& month_input)
		{
			m_month = month_input;
		}

		const int &getDay()
		{
			reuturn m_day;
		}

	};

	int main()
	{
		Date today;
		today.setDate(8, 4, 2025);		//요런식으로 정리 할수있다.
		today.setMonth(10);

		cout << today.getDay() << endl;

	}

이 today클래스를 복사 하고 싶다.. 함수를 만들어 보자!
copy.copyFrom(today); 정도로 만들수 있을까?

	class Date
	{
	private:
		int m_month;
		int m_day;
		int m_year;

	public:
		void setDate(const int &month_input, const int& day_input, const int& year_input)
		{
			m_month = month_input;
			m_day = day_input;
			m_year = year_input
		}		//	외부와 의사소통을 위한 함수 이고, 메니져라 생각하면 좋다!

		void setMonth(const int& month_input)
		{
			m_month = month_input;
		}// 영어권에서 이러한 클래스 함수를 setters

		const int &getDay()
		{
			reuturn m_day;
		}// 이러한 클래스 함수를 getters라고 부른다.

		void copyFrom(const Date &orginal) // copyFrom을 만들었다! 특이한점은 자신의 클래스 타입을 받아온다는 것이다.
		{
			m_month = original.m_month;
			m_day = original.m_day;
			m_year = original.m_year;		// 그렇다면 original.m_something은 private로 
											// 원칙상 외부로부터 접근이 불가능 한데 어떻게 이런 형태는 가능한 것일까?
		}

	};

	int main()
	{
		Date today;
		today.setDate(8, 4, 2025);		//요런식으로 정리 할수있다.
		today.setMonth(10);
		cout << today.m_month << endl;
		Date coppy;

		coppy.coppyFrom(today);

		cout << today.getDay() << endl;
	}

### 접근 함수 getter, setter를 쓰는 더 와닿는 이유?

	class Date
	{
	public:					// 멤버변수들을 전부 퍼블릭으로 바꿔주고, 외부에서 자유로이 접근해서 사용한다 가정해보자
		int m_month;
		int m_day;
		int m_year;

	public:
		void setDate(const int &month_input, const int& day_input, const int& year_input)
		{
			m_month = month_input;
			m_day = day_input;
			m_year = year_input
		}//setter

		void setMonth(const int& month_input)
		{
			m_month = month_input;
		}//getter

		const int &getDay()
		{
			reuturn m_day;
		}

		void copyFrom(const Date &orginal) // copyFrom을 만들었다! 특이한점은 자신의 클래스 타입을 받아온다는 것이다.
		{
			m_month = original.m_month;
			m_day = original.m_day;
			m_year = original.m_year;		// 그렇다면 original.m_something은 private로 
											// 원칙상 외부로부터 접근이 불가능 한데 어떻게 이런 형태는 가능한 것일까?
		}

	};

	int main()
	{
		Date today;
		today.setDate(8, 4, 2025);		//요런식으로 정리 할수있다.
		Date coppy;
		coppy.coppyFrom(today);

		copy.m_day =123;				//코드전반에 걸쳐 Date의 멤버변수가 많이 사용되고 있다고 해보자!
										//그런데 클래스 정의에서 m_day의 멤버변수명을 바꿧다면??
										//외부에 바꿔야할 일들이 매우 많아 지게 되고 매우 복잡해 진다.
										//rename을 해도 비주얼 스튜디오가 잡아지기 힘들어진다.
										//퍼블릭을 사용한다면 이러한 문제점이 생길수있다.

	}