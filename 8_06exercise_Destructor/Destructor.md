## 소멸자
생성자의 반대가 되는 어떤것?
파괴를 하기 보다는 인스턴스가 사라질때 호출되는 함수를 말한다.

###

	#include<iostream>
	using namespace std;

	class Simple
	{
	private:
		int m_id;

	public:
		Simple(const int &id_in)
			: m_id(id_in)
		{
			cout << "Constructor" < m_id << endl;	
		}

		~Simple()
		{
			cout << "Destuctor" << m_id << endl;
		}
	};

	int main()
	{
		Simple s1(0);
		Simple s2(1);
		//	Constructor 0 
			Constructor 1
			Destuctor 1
			Destuctor 0		출력

		return 0;
	}

	//동적 할당시?

	int main()
	{
		Simple *s1 = new Simple(0);
		Simple s2(1);

		delete s1;

	//	Constructor 0 
		Constructor 1
		Destuctor 0
		Destuctor 1		출력
	}

언제 쓸수 있는가??

	#include<iostream>
	using namespace std;

	class IntArray
	{
	private:
		int *m_arr = nullptr;
		int m_length = 0;

	public:
		IntArray(const int length_in)
		{
			m_length = legth_in
			m_arr = new int[m_length];
			cout << "Constructor" << endl;
		}

		int size()
		{
			return m_length;
		}
	};

	int main()
	{
		while(true)
		{
			IntArray my_int_arr(100000);		// 메모리 누수가 발생됨.. delete이 없다..
			//delete [] my_int_arr.m_arr;		// m_arr는 private멤버라 외부에서 접근이 안된다
		}

		소멸자를 쓰면 아주 유용하다!!
	}

	class IntArray
	{
	private:
		int *m_arr = nullptr;
		int m_length = 0;

	public:
		IntArray(const int length_in)
		{
			m_length = legth_in
			m_arr = new int[m_length];
			cout << "Constructor" << endl;
		}

		~IntArray()
		{
			if(m_arr != nullptr)	// 안전장치
				delete [] m_arr;	// 아주 깔끔하게 메모리 누수를 막을수 있다.
									// 벡터 안에는 이미 구현이 되어있다.
		}

		int size()
		{
			return m_length;
		}
	};