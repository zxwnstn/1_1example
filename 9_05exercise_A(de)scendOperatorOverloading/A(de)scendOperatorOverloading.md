## 증감연산자 오버로딩하기
전위형이냐 후위 형이냐?

###
	#include<iostream>
	using namespace std;

	class Digit
	{
	private:
		int m_digit;
	public:
		Digit(init digit = 0)
			: m_digit(digit)
		{}

		// prefix 전위형
		Digit & operator ++ ()
		{
			++m_digit
			return *this;
		}

		// postfix 후위형
		//리턴을 한후에 연산이 되는 희한한 구조를 갖고 있다.
		Digit operator ++(int) // 더미 변수 하나 던저주기(구분을 위한)
		{
			Digit temp(m_digit);
			
			++(*this);
			return temp;
		}


		fried ostream& operator << (ostream &out, const Digit &d)
		{
			out << m_digit;
			return out;
		}
	};

	int main()
	{
		int a = 10;

		cout << ++a << endl;	// 11 먼저 연산자 계산
		cout << a << endl;		// 11

		cout << a++ << endl;	// 11 나중에 연산자 계산
		cout << a << endl;		// 12
		//이성질만 유의하자!

		Digit d(5);
		cout << ++d << endl;
		cout << d << endl;

	}