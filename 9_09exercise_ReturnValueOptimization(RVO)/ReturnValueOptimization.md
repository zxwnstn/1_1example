## ���� ������, ���� �ʱ�ȭ, RVO

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
		//�ڱ��ڽ��� �������� ��������ڰ� ȣ��ȴ�.
		//�ڱ��ڽ��� �����Ǵ°��� ����������� ī������Ʈ���͸�
		//private�� �ٲٸ� �ȴ�. ������ ���鿡�� �̿��̵�

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
		Fraction fr_copy(frac);	//ī�� ����Ʈ���Ͱ� �۵���

		cout << frac << " " << fr_copy << endl;		

		Fraction fr_copy = frac; // ī�� �̴ϼȶ�����
								 // ī�� ����Ʈ���Ͱ� �۵���

		Fraction frac(3, 5)
		Fraction fr_copy(Fraction(3,10));	// �и��� ���� �����ڸ� ���� ������
											// �̰�쿡�� ���� �����ڰ� ȣ���� ��������
											// �����Ϸ��� �˾Ƽ� (Fracton)�κ��� ������
											// �����غ��� ���� �ǹ̰� ����

		Fraction result = doSomthing();		// doSomething�� ������ result�� ī���̴ϼȶ�����
											// �ǰ������Ƿ� ī�� ����Ʈ���Ͱ� �۵���
											// ������ release��� ������
											// ī������Ʈ���Ͱ� �۵����� �ʴ´�
											// �̰��� �������ϱ�?
		// �����Ϸ��� �˾Ƽ� ���ִ� �۵�����̴�.
		// ���Ϲ���� �Լ��� ����� �Ǹ� �Ͻ������� �۵��Ǿ��� �Լ���
		// ���� �ν��Ͻ�(Fraction temp)�� �������� ������ ���ԵǹǷ� �ڵ����� result�� �Ű��ִ� ���̴�.
		// �̸� ��ȯ�� ����ȭ��� �Ѵ�.
		// ����� ��忡�� ������ �ּҰ��� ������ �ּҰ� �޶� ��������ڸ� �θ��� ������.
		// ������ ��忡�� �ּҰ��� ������ �ּҰ� ���ԵǾ� ��������ڰ� ȣ���� ���� �ʴ´�.


		return 0;
	}