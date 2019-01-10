#include <iostream>
#include <cassert>
using namespace std;

class Fraction
{

private:
	int mNumerator;
	int mDenominator;

public:
	//Fraction(char) = delete;

	//explicit 
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

void dosomething(const Fraction& frac)
{
	cout << frac << endl;
}

int main()
{
	Fraction frac(3, 5);
	cout << frac << endl;
	Fraction frac2 = frac;
	cout << frac2 << endl;
	cout << endl;
	
	//delete와 explicit적용하지 않는 경우
	dosomething(6);		// 6/1 출력
	dosomething('a');	// 97/1 출력

	return 0;
}