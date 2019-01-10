## 복사 생성자, 복사 초기화, RVO

###
	#include<iostream>
	#include<cassert>
	using namespace std;

	class Fraction
	{
	private:
		int m_numerator;
		int m_denominator;
	public:
		Fraction(int num = 0, int den = 1)
			: m_numerator(num), m_denominator(den)
		{
			assert(den != 0);
		}
		
		Fraction(const Fraction &fraction) // copy constructor
			: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
		{
			cout << "Copy constructor called" << endl;
		}
		//자기자신이 들어왔을때 복사생성자가 호출된다.
		//자기자신이 복제되는것을 막고싶을때는 카피컨스트럭터를
		//private로 바꾸면 된다. 보안적 측면에서 이용이됨

		friend ostream& operator << (ostream &out, const Fraction& f)
		{
			out << f.m_numerator << " / " << f.m_denominator << endl;
			return out;
		}
	};

	Fraction doSomething()
	{
		Fraction temp(1, 2)
		return temp;
	}

	int main()
	{
		Fraction frac(3, 5)
		Fraction fr_copy(frac);	//카피 컨스트럭터가 작동됨

		cout << frac << " " << fr_copy << endl;		

		Fraction fr_copy = frac; // 카피 이니셜라이저
								 // 카피 컨스트럭터가 작동됨

		Fraction frac(3, 5)
		Fraction fr_copy(Fraction(3,10));	// 분명히 복사 생성자를 쓸것 같지만
											// 이경우에는 복사 생성자가 호출이 되지않음
											// 컴파일러가 알아서 (Fracton)부분을 삭제함
											// 생각해보면 아주 의미가 없음

		Fraction result = doSomthing();		// doSomething의 리턴이 result에 카피이니셜라이즈
											// 되고있으므로 카피 컨스트럭터가 작동함
											// 하지만 release모드 에서는
											// 카피컨스트럭터가 작동하지 않는다
											// 이것은 무슨일일까?
		// 컴파일러가 알아서 해주는 작동방식이다.
		// 리턴밸류가 함수를 벗어나게 되면 일시적으로 작동되었던 함수에
		// 리턴 인스턴스(Fraction temp)가 남아있을 이유가 없게되므로 자동으로 result로 옮겨주는 것이다.
		// 이를 반환값 최적화라고 한다.
		// 디버그 모드에서 각각의 주소값을 찍으면 주소가 달라 복사생성자를 부르게 되지만.
		// 릴리즈 모드에서 주소값을 찍으면 주소가 같게되어 복사생성자가 호출이 되지 않는다.


		return 0;
	}