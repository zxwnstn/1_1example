## this 포인터와 연쇄 호출
클래스는 붕어빵 기계?
각 인스턴스(붕어빵)들은 어떻게 구분할수 있을까?

###
	#include<iostream>
	using namespace std;

	class Simple
	{
	private:
		int m_id;

	pulic:
		Simple(int id)
		{
			this->setID(id);		// 자기자신 포인터로 setID함수를 이용한다.
			(*this).id;
			this->m_id;				// 하지만 굳이 이렇게 까지 써주지는 않는다.
									// 고급 기술에선 이것을 써먹을 때가 있다..
									// 다음 시간에..

			setId(id);
			cout << this << endl;	// 자기 자신의 주소를 나타내는 'this' 키워드
		}

		void setID(int id)
		{
			m_id = id;
		}

		int getID()
		{
			return m_id;
		}
	};

	int main()
	{
		Simple s1(1), s2(2);
		s1.setID(2);
		s2.setID(4);	//setID나 getID함수의 경우 s1안에 저장이 되있는것일까?
						//그렇진 않다.. 그저 가져다가 쓸뿐이다. 모두 공유해서 쓴다.
						//그렇다면 s1과 s2의 구분은 어떻게 할수 있을까?
		
		**********************************************************************
		******//Simple의 setID(&s2(포인터), 4(인자)) 개념상 이런 원리다*******
		**********************************************************************
		
		// 주소 찍어보기
		cout << &s1 << " " << &s2 << endl;

	}

### Chaining Member Funtion

	#include<iostream>
	using namespace std;

	class Calc
	{
	private:
		int m_value;

	public:
		Calc(int init_value)
			: m_value(init_value)
		{}

		void add(int value) { m_value += value; }
		void sub(int value) { m_value -= value; }
		void mult(int value){ m_value *= value; }

		void print()
		{
			cout << m_value << endl;
		}
	};

	//연쇄 호출 이용하기!
	int main()
	{
		Calc cal(10);
		cal.add(10);
		cal.sub(1);
		cal.mult(2);		// 뭔가 번거롭다고 생각하는가??

		cal.print);

	}

	#include<iostream>
	using namespace std;

	class Calc
	{
	private:
		int m_value;

	public:
		Calc(int init_value)
			: m_value(init_value)
		{}

		Calc& add(int value) { m_value += value; return *this }
		Calc& sub(int value) { m_value -= value; return *this }
		Calc& mult(int value){ m_value *= value; return *this }	// 연쇄호출용 함수 짜기

		void print()
		{
			cout << m_value << endl;
		}
	};

	int main()
	{
		Calc cal(10);
		cal.add(10).	//자기 자신이 리턴되 온것이기 때문에 그냥 . 붙이고 재사용이 가능해 진다.
		
		cal.add(10).sub(1).mult(2).print();
		
		늘여쓰면
		Calc cal(10);
		Calc &temp1 = cal.add(10);
		Calc &temp2 = cal.sub(1);
		Calc &temp3 = cal.mult(2);
		temp3.print();


		cal.print);

	}