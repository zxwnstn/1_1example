## 변환생성자 convert constuctor

###

	#include <iostream>
	#include <cassert>
	using namespace std;

	class Fraction
	{
	private:
		int mNumerator;
		int mDenominator;
	
	public:
		Fraction(const int &numerator_in = 0, const int &denominaor_in = 1)
			: mNumerator(numerator_in), mDenominator(denominaor_in)
		{
			assert(mDenominator != 0);
		}
	
		Fraction(const Fraction& f)
			: mNumerator(f.mNumerator), mDenominator(f.mDenominator)
		{
			cout << "copy constructor operation!" << endl;
		};
	
		friend ostream & operator << (ostream& out, const Fraction& f)
		{
			out << f.mNumerator << "/" << f.mDenominator;
			return out;
		}
	};

	void doSomething(const Fraction& frac)
	{
		cout << frac << endl;
	}
	
	int main()
	{
		Fraction frac(7);
		doSomething(7);		// 이것이 가능하다?? 어째서?
							// 인자가 들어왔는데 그것의 매칭이 클래스밖에 없는경우
							// 그 인자를 클래스의 생성자로 넘겨버린다.
							// 그것을 converting constructor라고 한다.
							// 그리고 이것을 막는 키워드가 explicit이다.
		doSomething(Frac(7))// explcit을 지정했다면, 이런식으로 사용해야만 한다.
		Fraction frac2('a');// 또한 이런식으로 형변환하여 converting constructor를
							// 이용하게끔 할수있는 방식이 있는데
							// 이것을 막는 키워드는 delete다
	}
	class Fraction
	{
	private:
		int mNumerator;
		int mDenominator;
	
	public:
		Fraction(char) = delete;		// 이때 delete은 동적할당의 메모리 삭제의
										// 의미와 다르므로 유의하자!
		explicit Fraction(const int &numerator_in = 0, const int &denominaor_in = 1)
			: mNumerator(numerator_in), mDenominator(denominaor_in)
		{
			assert(mDenominator != 0);
		}
	
		Fraction(const Fraction& f)
			: mNumerator(f.mNumerator), mDenominator(f.mDenominator)
		{
			cout << "copy constructor operation!" << endl;
		};
	
		friend ostream & operator << (ostream& out, const Fraction& f)
		{
			out << f.mNumerator << "/" << f.mDenominator;
			return out;
		}
	};