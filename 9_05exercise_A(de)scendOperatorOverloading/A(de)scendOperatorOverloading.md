## ���������� �����ε��ϱ�
�������̳� ���� ���̳�?

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

		// prefix ������
		Digit & operator ++ ()
		{
			++m_digit
			return *this;
		}

		// postfix ������
		//������ ���Ŀ� ������ �Ǵ� ������ ������ ���� �ִ�.
		Digit operator ++(int) // ���� ���� �ϳ� �����ֱ�(������ ����)
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

		cout << ++a << endl;	// 11 ���� ������ ���
		cout << a << endl;		// 11

		cout << a++ << endl;	// 11 ���߿� ������ ���
		cout << a << endl;		// 12
		//�̼����� ��������!

		Digit d(5);
		cout << ++d << endl;
		cout << d << endl;

	}