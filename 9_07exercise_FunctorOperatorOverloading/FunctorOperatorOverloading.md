## 괄호 연산자 오버로딩과 함수 객체
마치 객체가 함수인것 처럼 사용하기!(의미 파악 중요!)

###
	class Accumulator
	{
	private:
		int m_counter = 0;

	public:
		int operator() (int i)
		{
			return (m_counter += i);
		}
	};

	int main()
	{
		Accumulator acc;
		cout << acc(10) << endl;	// 객체지만 얼핏보기에 함수같아 보인다!
		cout << acc(20) << endl;

		return 0;
	}