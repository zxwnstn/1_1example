## ������
Ŭ������ ����Ʈ?

###

	Class Fraction
	{
	Private:
		int m_numberator;	//����
		int m_denominator;  //�и�

	public:
		void print()
		{
			cout << m_numberator << " / " << m_denominator << endl;
		}
	};

	int main()
	{
		Fraction frac;		// ����ʱ�ȭ�� �Ƚ�Ű��
		frac.print();		// ����Ѵٸ�? �̻��� ���ڵ��� �����?!

		//�ذ���1
		������� �ۺ����� �ٲٰ� �ܺο��� �ʱ�ȭ�� �ϳ��ϳ� ���ش�.
		�ʱ�ȭ�� ���� �ϳ��� ���ϰ� ���ϼȶ������̼� �ʱ�ȭ�� �����ټ� �ִ�.
		������ �ۺ����� ���� �ʰ� �ϰ� �ʹٸ� ��� ���־�� �ұ�?
		�⺻���� �����ϴ� ����� �ִ�
	}

	�ַ�� 1 - ������� �ʱ�ȭ ���ֱ�
	Class Fraction
	{
	Private:
		int m_numberator = 1;	//�⺻���� �׳� �����Ҽ� �ִ�
		int m_denominator = 1;

	public:
		void print()
		{
			cout << m_numberator << " / " << m_denominator << endl;
		}
	};

	int main()
	{
		Fraction frac;
		frac.print();		// 1 / 1 ���
	}

	Class Fraction
	{
	Private:
		int m_numberator;
		int m_denominator;

	public:
		//������
		Fraction()			// �ܺο��� ȣ���� ���� �ʴ´�(������ ����)
							// ����� ���ÿ� ����ȴ�.
		{
			m_numerator = 1;
			m_denominator = 1;

			cout << "Fraction() Constructor" << endl;
		}
		

		void print()
		{
			cout << m_numberator << " / " << m_denominator << endl;
		}
	};

	int main()
	{
		Fraction frac;		// ����ŷ� ������ �ٷ� �����ڷ� ��
		frac.print();		// 0 / 1 ���
	}
	//���ǻ��� �����ڵ� ������ �Լ��ε� �� ()�� ���� �ʳ�??
	//Fraction frac();�� �ùٸ� ǥ�� �ƴұ�??
	//�������� �Ű������� �ϳ��� ���� ��� ()�� ������ �ʴ´�(����)
	//�̸����� �����ڵ� �Ű������� ������ �ִٴ� ���̴�.
	//?? �������� �Ű������� �ϳ��� ����? �����ڸ� ������ �ʴ´ٸ� �����ڴ� ���°��ϱ�..

	Class Fraction
	{
	Private:
		int m_numberator;
		int m_denominator;

	public:
		//Fraction(const int & num_in, const int& den_in)
		Fraction(const int & num_in = 1, const int& den_in = 1) ������ �Ķ������ ����Ʈ���� �����Ҽ� �Ӥ���.
		{
			m_numerator = num_in;
			m_denominator = den_in;

			cout << "Fraction() Constructor" << endl;
		}

		//�����ڰ� ���ٸ� �ƹ��ϵ� ���ϴ� ����Ʈ �����ڰ� �����־� �����Ϸ��� �װ��� ����.
		//Fraction(){};

		//constructor�� �����ϴ°��� �ƴϴ�!!(����� �ǹ̷� �ľ����� ����)
		//�����ڴ� ���� Ŭ������ �ʼ������� ���� �Լ��� �Ұ� �ϴ�.


		void print()
		{
			cout << m_numberator << " / " << m_denominator << endl;
		}
	};

	int main()
	{
		Fraction one_thirds(1, 3);
		one_thirds.print();
		Fraction one_thirds();		// �򰥸��� ���� �̷��� �ϸ� �ȵȴ�.
		one_thirds.print();

		Fraction one_thirds;		// �´� ǥ��
		one_thirds.print();			// 1, 1
	}

	//�����ڸ� 2���� ����ٸ�??
	//�ߺ��� �Ǿ� ������ ���. ambiguos�����ʹ� �ٸ�

	//copy initialization ����ϱ�
	Fraction one_thirds = Fraction{1, 2}; // �������� ����
	Fraction one_thirds{1, 3};		//����Ǵ� ����
	Fraction one_thirds(1, 3);
	//���� ���̴� ??
	{}�� ���� class�� public�� ��� �ȵȴ�
	{}�� ��� �����ڰ� �ִٸ� ȣ���� ���ش�.
	�׸��� {}�� ��� ����ȯ�� ������� �ʴ´�.
	()�� ����ȯ�� ����� �ش�.
	���� {}�� �� �����ϰ� �����ϴٰ� �����ִ�.

### ��Ÿ Ŭ������ �ٸ� Ŭ������ ����϶�?


	class Second
	{
	public:
		second()
		{
			cout << "class Second constructor()" << endl;
		}
	};

	class First
	{
		Second sec;
	public:
		First()
		{
			cout << "class First constructor()" << endl;
		}
	};

	int main()
	{
		First fir;		// second�� ����, first�� ���߿�
						// ��� ���� second�� ���� ����� ���� firstŬ������ �����ִ�.
	}

	�����ڸ� private??
	�̰��� ��� �����Ҽ� ������? �����ð���..