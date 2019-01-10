## ��ȯ������ convert constuctor

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
		doSomething(7);		// �̰��� �����ϴ�?? ��°��?
							// ���ڰ� ���Դµ� �װ��� ��Ī�� Ŭ�����ۿ� ���°��
							// �� ���ڸ� Ŭ������ �����ڷ� �Ѱܹ�����.
							// �װ��� converting constructor��� �Ѵ�.
							// �׸��� �̰��� ���� Ű���尡 explicit�̴�.
		doSomething(Frac(7))// explcit�� �����ߴٸ�, �̷������� ����ؾ߸� �Ѵ�.
		Fraction frac2('a');// ���� �̷������� ����ȯ�Ͽ� converting constructor��
							// �̿��ϰԲ� �Ҽ��ִ� ����� �ִµ�
							// �̰��� ���� Ű����� delete��
	}
	class Fraction
	{
	private:
		int mNumerator;
		int mDenominator;
	
	public:
		Fraction(char) = delete;		// �̶� delete�� �����Ҵ��� �޸� ������
										// �ǹ̿� �ٸ��Ƿ� ��������!
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