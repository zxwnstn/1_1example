## �������� ��� �̴ϼȶ����� ����Ʈ

### 

	class Something
	{
	private:
		int m_i;
		double m_d;
		char m_c;
		int arr[5];

	public:
		Something()
			//: m_i(1), m_d(3.14), m_c('a')
			//: m_i{1}, m_d{3.14}, m_c{'a'} ���ݴ� ����
			m_i{1}, m_d{3.14}, m_c{'a'}, m_arr{1, 2, 3, 4, 5}

		void print()
		{
			cout << m_i << " " << m_d << " " << m_c << endl;
			for(auto &e : m_arr)
				cout << e << " ";
			cout << endl;
		}
	};

	int main()
	{
		Something som;
		som.print()	// 1 3.14 a
					// 1 2 3 4 5

	}


// Ŭ���� �ȿ� Ŭ������ ����� �ʱ�ȭ ����Ʈ ���

	class B
	{
	private:
		int m_b;
	public:		// ������
		B(const int& m_b_in)
			: m_b(m_b_in)

	}
	class Something
	{
	private:
		int m_i;
		double m_d;
		char m_c;
		int arr[5];
		B m_B;

	public:
		Something()
			//: m_i(1), m_d(3.14), m_c('a')
			//: m_i{1}, m_d{3.14}, m_c{'a'} ���ݴ� ����
			: m_i{1}, m_d{3.14}, m_c{'a'}, m_arr{1, 2, 3, 4, 5} ,  m_B(m_i - 1)
			{}
		void print()
		{
			cout << m_i << " " << m_d << " " << m_c << endl;
			for(auto &e : m_arr)
				cout << e << " ";
			cout << endl;
		}
	};

	int main()
	{
		Something som;
		som.print()	
	}

	�ʱ�ȭ ����Ʈ�� ��Ư�� ���������� ����Ʈ�� ���� �ڵ���Ÿ���� ���������� �ִ�.
	: m_i{1}, m_d{3.14}, m_c{'a'}, m_arr{1, 2, 3, 4, 5} ,  m_B(m_i - 1){}	//�� �����ϱ�
	: m_i{1}, m_d{3.14}, m_c{'a'},
		m_arr{1, 2, 3, 4, 5} ,  m_B(m_i - 1)
		{}	/������ ����

	: m_i{1}, 
	m_d{3.14}, 
	m_c{'a'}, 
	m_arr{1, 2, 3, 4, 5},  
	m_B(m_i - 1)		// �������پ���
	{}

	: m_i{1}
	, m_d{3.14}
	, m_c{'a'}
	, m_arr{1, 2, 3, 4, 5}
	, m_B(m_i - 1)		//�������پ��� �ĸ� ������ ������ ��Ÿ��
	{}

### �ʱ�ȭ �켱���� üũ �ϱ�
+ 2����(�ʱ�ȭ ����Ʈ, �����ʱ�ȭ)
	class B
	{
	private:
		int m_b;
	public:
		B(const int& m_b_in)
			: m_b(m_b_in)

	}
	class Something
	{
	private:
		int m_i = 100;
		double m_d = 100.0;
		char m_c = 'F';
		int arr[5] = {100, 200, 300, 400, 500};
		B m_B { 1025 } ;	// ���� ��� ������ �ʱ�ȭ �ϱ�

	public:
		Something()
			: m_i{1}
			, m_d{3.14}
			, m_c{'a'}
			, m_arr{1, 2, 3, 4, 5}
			, m_B(m_i - 1)
			{}

		void print()
		{
			cout << m_i << " " << m_d << " " << m_c << endl;
			for(auto &e : m_arr)
				cout << e << " ";
			cout << endl;
		}
	};

	int main()
	{
		Something som;
		som.print() // �ʱ�ȭ ����Ʈ�� ������
					// 1 3.14 a
					// 1 2 3 4 5
	}

+ 2����(�ʱ�ȭ ����Ʈ, �����ʱ�ȭ, ������)
	class B
	{
	private:
		int m_b;
	public:
		B(const int& m_b_in)
			: m_b(m_b_in)

	}
	class Something
	{
	private:
		int m_i = 100;
		double m_d = 100.0;
		char m_c = 'F';
		int arr[5] = {100, 200, 300, 400, 500};
		B m_B { 1025 } ;

	public:
		Something()
			: m_i{1}
			, m_d{3.14}
			, m_c{'a'}
			, m_arr{1, 2, 3, 4, 5}
			, m_B(m_i - 1)
			{
				m_i = 2;
				m_d = 6.28;
				m_c = 'b'
				// �տ��� �ʱ�ȭ ����Ʈ�� �����ʱ�ȭ�� ����ٸ�
				// m_i += 2;
				// m_i *= 2; �� ���µ� ����� �����ϴ�!
			
			}

		void print()
		{
			cout << m_i << " " << m_d << " " << m_c << endl;
			for(auto &e : m_arr)
				cout << e << " ";
			cout << endl;
		}
	};

	int main()
	{
		Something som;
		som.print() // �����ڰ� �����̴�
					// 2 6.28 b
					// 1 2 3 4 5
	}