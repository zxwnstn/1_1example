## 친구 함수와 클래스
인캡슐레이션을 유지하기 위한 부가적 요소
친수함수와 친구 클래스

###
	#include<iostream>
	using namespace std;

	class A
	{
	private:
		int m_value = 1;

		friend void dosomething(A& a);	// 문제 해결
	};


	void doSomething(A& a)
	{
		cout << a.m_value << endl;		// 멤버변수가 private이라 접근이 안된다?
										// 그렇다면 private을 풀면 좋을까?
										// 할수도 있지만 객체지향적으로 옳은 접근은 아니다.
	}

	//Friend function 사용하기

	void doSomething(A& a)
	{
		cout << a.m_value << endl;
	}						


	//여러개의 클래스를 친구로 갖는 형태?

	class B;	//foward declaration 디버깅과 코드를 읽을때 불편하다.
				// 부득이 하게 써야될 경우가 많아 이용하지 않을수 없다..
				// 이경우에는 전방선언을 피하기 힘들다.

	class A
	{
	private:
		int m_value = 1;

		friend void doSomething(A &a, B& b); //이렇게 되면 A의 입장에서는 B를
											// 알수가 없게 된다. B가 A의 밑에 있으므로
	};										//이럴때 사용하는 것이 전방선언이다.

	class B
	{
	private:
		int m_value =2;

		friend void doSomething(A& a, B& b);
	}


	void doSomething(A& a, B& b)
	{
		cout << a.m_value << " " << b.m_value << endl;
	}
	
	//다른 클래스가 내 프라이빗 멤버를 접근할수 있도록 허용해 주자는 방법

	class B;
	
	class A
	{
	private:
		int m_value = 1;
	
		friend class B;
		// 1번
	};

	class B
	{
	private:
		int m_value = 2;
	
	public:
		void doSomething(A& a)
		{
			cout << a.m_value << endl;
		}
	};

	int main()
	{
		A a;
		B b;
		b.doSomething(a);
	}

	//통째로 열어주는것이 부담스럽다..
	// 특정 함수에만 열어주고 싶다면??
	1번 friend void B::doSomething(A& a)
	//그런데 전방선언을 누구를 하던간에 알수 없는 정의가 생겨 버린다.
	// 이경우에 해결방법은 어떻게 할것인가..
	//이경우에는 클래스 멤버함수의 선언과 정의를 분리 하여야 한다.
	// 올바른 답안

	calss A;	// 클래스 A의 전방선언

	class B
	{
	private:
		int m_value = 2;
	public
		void doSomething(A& a);
	};

	class A
	{
	private
		int m_value = 1;

		friend void B::doSomething(A& a);	//B의 멤버함수 doSomething 만 친구다 라는뜻
	};

	void B::doSomething(A& a)
	{
		cout << a.m_value << endl;
	}

	int main()
	{
		A a;
		B b;
		b.doSomehitng(a);

		return 0;
	}