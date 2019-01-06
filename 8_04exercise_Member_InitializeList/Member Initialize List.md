## 생성자의 멤버 이니셜라이져 리스트

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
			//: m_i{1}, m_d{3.14}, m_c{'a'} 조금더 엄격
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


// 클래스 안에 클래스를 쓸경우 초기화 리스트 사용

	class B
	{
	private:
		int m_b;
	public:		// 생성자
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
			//: m_i{1}, m_d{3.14}, m_c{'a'} 조금더 엄격
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

	초기화 리스트의 독특한 문법때문에 리스트를 쓰는 코딩스타일은 여러가지가 있다.
	: m_i{1}, m_d{3.14}, m_c{'a'}, m_arr{1, 2, 3, 4, 5} ,  m_B(m_i - 1){}	//쭉 나열하기
	: m_i{1}, m_d{3.14}, m_c{'a'},
		m_arr{1, 2, 3, 4, 5} ,  m_B(m_i - 1)
		{}	/적당히 끊기

	: m_i{1}, 
	m_d{3.14}, 
	m_c{'a'}, 
	m_arr{1, 2, 3, 4, 5},  
	m_B(m_i - 1)		// 한줄한줄쓰기
	{}

	: m_i{1}
	, m_d{3.14}
	, m_c{'a'}
	, m_arr{1, 2, 3, 4, 5}
	, m_B(m_i - 1)		//한줄한줄쓰기 컴마 앞으로 보내기 스타일
	{}

### 초기화 우선순위 체크 하기
+ 2개비교(초기화 리스트, 직접초기화)
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
		B m_B { 1025 } ;	// 직접 멤버 변수에 초기화 하기

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
		som.print() // 초기화 리스트가 먼저다
					// 1 3.14 a
					// 1 2 3 4 5
	}

+ 2개비교(초기화 리스트, 직접초기화, 생성자)
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
				// 앞에서 초기화 리스트나 직접초기화를 해줬다면
				// m_i += 2;
				// m_i *= 2; 의 형태도 충분히 가능하다!
			
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
		som.print() // 생성자가 제일이다
					// 2 6.28 b
					// 1 2 3 4 5
	}