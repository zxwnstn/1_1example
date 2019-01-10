## 대입 연산자 오버로딩
깊은 복사 vs 얕은 복사

###
	#include<iostream>
	#include<cassert>
	using namespace std;

	class Mystring
	{
	//private:
	//public:
		char *m_date = nullptr;
		int m_length = 0;

	public:
		Mystring(const char* source = "")
		{
			assert(source);		//문자열이 비지는 않았는가.

			m_length = strlen(source) + 1;
			m_data = new char[m_length];

			for(int i = 0; i < m_length; i++)
				m_data[i] = source[i];

			m_data[m_length - 1] = '\0';
		}

		~Mystring()
		{
			delete[] = m_data;
		}

		char* getString()
		{
			cout << m_data;
		}
		
		int getLength()
		{
			return m_length;
		}
	};

	int main()
	{
		Mystring hello("Hello");

		cout << (int*)hello.m_data << endl;
		cout << hello.getString() << endl;

		{
			Mystring copy = hello;		// 복사생성자가 이용됨(대입연산자가 아니다!)
										// 단 따로 구현을 안했으므로 
										// 컴파일러가 던져주는 기본(또는 디폴트)
										// 복사생성자가 이용된다.

			// 그런데 여기서 한가지 문제가 발생된다!
			// 복사생성자가 char m_date의 주소를 그대로 복사해준다는 것이다.
			cout << (int*)copy.m_data << endl;	//따라서 이 mdate의 주소값은 위 hello.m_data와 같다.
			cout << copy.getString() << endl;
		}
		// 스코프가 끝나고 copy의 동적할당 메모리는 파괴자에 의해
		// delete가 되버리는데..

		cout << hello.getString() << endl;
		// 과연 앞선 copy와 같은 주소값을 가지고있던 hello.m_data에
		// 값들은 무사할수 있을까?
	}

### 대입연산자와 복사
	
	class Mystring
	{
	//private:
	//public:
		char *m_date = nullptr;
		int m_length = 0;

	public:
		Mystring(const char* source = "")
		{
			assert(source);		//문자열이 비지는 않았는가.

			m_length = strlen(source) + 1;
			m_data = new char[m_length];

			for(int i = 0; i < m_length; i++)
				m_data[i] = source[i];

			m_data[m_length - 1] = '\0';
		}

		Mystring(const Mystring &source)
		{
			cout << "copy constructor" << endl;

			m_length = source.m_length;

			if(souce.m_dat != nullptr)
			{
				m_data = new char[m_length];

				for(int i = 0; i < m_length; ++i)
					m_data[i] = source.m_data[i];
			}
			else
				m_data = nullptr;
		}
		// 이렇게 ptr주소가 같을때를 대비하여 새로운 ptr주소를 할당해 주는것을
		// "깊은 복사" 라고한다.
		// 또한 앞서 살펴봤던 copy constructor가 했던 주소값을 그대로 복사하는것을
		// "얕은 복사" 라고한다.

		//대망의 대입연산자 오버로딩하기!
		Mystring& operator = (const Mystring &source)
		{
			//shallow copy라면 그대로 복사하고 끝난다.
			/*
			this->m_data = source.m_data;
			this->m_length = source.m_length;
			*/

			//deep copy라면
			cout << "Assignment operator" << endl;

			if(this == &source)	// prevent self-assignment
				return *this;		// 대입연산자의 경우 자기가 자기를 대입할수 있다.
									// 쉽게 생각할수 있는 문제는 아니지만(너무도 당연히 안쓰기 때문)
									// 이를태면 이런것이다.
									//int a = 4;
									// a = a;

			delete [] m_data;	// 대입연산자라면 너무나도 당연하게
								// 내가 이미 갖고있는 메모리가 존재할 가능성이 높다. (적어도 nullptr이라도)
								// 이것을 지워버린후 다시 할당을 받는다.

			m_length = source.m_length;

			if(source.m_data != nullptr)
			{
				m_data = new char[m_length];	//이부분이 다시 할당 받는 부분
				
				for(int i = 0; i < m_length; i++)
					m_data[i] = source.m_data[i];
			}
			// 추가로 같은 코드들이 있다면.. 그것을 악착같이 찾아서 함수로 묶어주는것이 좋다.
			// 지금은 강의 설명상 보기 편하기 위해 부분이므로 이렇게 작성함
			
		}

		~Mystring()
		{
			delete[] = m_data;
		}

		char* getString()
		{
			return m_data;
		}
		
		int getLength()
		{
			return m_length;
		}
	};

	int main()
	{
		MyString hello("Hello");
		cout << (int*)hello.m_data << endl;
		cout << hello.getString << endl;

		{
			Mystring copy = hello;
			cout << (int*)copy.m_data << endl;		//주소가 다르다
			cout << copy.getString() << endl;
		}

		cout << hello.getString() << endl;			// 주소가 다른 ptr이 삭제됬으므로 정상출력 문제없음
	}

	//다른 예제
	int main()
	{
		Mystring hello("Hello");
		Mystring str1 = hello;		// copy constructor 작동
									// 초기화의 = 는 대입연산자가 아니다..

		Mystring str2;
		str2 = hello;				// Assignment operator 작동

		//이러한 대입과 초기화 등호가 했갈린다면
		// Mystring str(hello) 이런식으로 코딩하는것도 방법이다.
	}

	//복사 생성자를 구분할 여력이 없을때도잇다.
	//이럴때 shallow copy를 막기는 막아야 한다면
	//Mystring(const Mystring &source) = delete로 막는 차선책도 있다.

	//굳이 마이스트링을 구현하고 싶지 않고 기능만 추가 하고 싶다면
	//그냥 상속받으면 된다.