## const와 class

###
	#include<iostream>
	using namespace std;

	class Something
	{
	public:
		int m_value = 0;

		void setValue(int value) { m_value = value; }
		int getValue() { return m_value;}
	};

	int main()
	{
		const Something something;	//인스턴스를 변수, 오브젝트라 하기도 한다.
		something.setValue(3);		//오류가 생김
		//const로 인스트를 만든다는 것은 안에 있는 내용들 전부 const로 만든다는
		//것을 의미한다.

		cout << something.getValue() << endl; // 이번에도 역시 오류가 난다.
		//논리적으로는 할수 있어보인다.
		//멤버함수가 const라면 사용할수있다.
	}

	class Something
	{
	public:
		int m_value = 0;

		void setValue(int value) { m_value = value; }
		int getValue() const
		{ 
			return m_value;
		}
	};
	//이것이 가능하다면, setValue멤버 함수도 const로 바꿔 멤버 m_value도
	//바꿀수 있지 않을까 생각할수있다.

	class Something
	{
	public:
		int m_value = 0;

		void setValue(int value) const
		{ 
			m_value = value;	// 하지만 이부분에서 오류가 나게 된다.
		}						// m_value는 const이기 때문에 할수 없는것이다.
	};

	//const로 사용할수있는 함수라면 const로 막느것이 좋다.

	class Something
	{
	public:
		int m_value = 0;

		Something()
		{
			cout << "Costructor" << endl;
		}

		void setValue(int value) { m_value = value; }
		int getValue() { return m_value;}
	};

	void print(Something st)		//프린트 함수 만들기
	{
		cout << st.m_value << endl;
		cout << &st << endl;
	}

	int main()
	{
		const Something something;

		cout << &something << endl;	//출력되는 주소는 분명 다르다.
		print(something)			//컨트럭터는 한번 출력된다.
									//함수에서 복사가 이루어 지지 않는것일까?
		//복사가 되면서 초기화 되는건 맞다
		//하지만 클래스 안에는 복사 컨스트럭터가 숨어있다!!	
	}
	//숨겨진 컨스트럭터 확인하기 "Copy Constructor"

	class Something
	{
	public:
		int m_value = 0;

		Somthing(const Something& st_in)		//카피 컨스트럭터
		{
			m_value = st_in.m_value;
			cout << "Copy constructor" << endl;
		}

		Something()
		{
			cout << "Costructor" << endl;
		}

		void setValue(int value) { m_value = value; }
		int getValue() { return m_value;}
	};

	//이러한 복사연산을 막기위해 const &를 많이 쓴다.
	void print(const Something &st)

	//쓸수있다면 const는 다 쓰는것이 좋다.

### 멤버 const사용
멤버 함수 const로 오버로드 하기

	#include<string>
	#inclue<iostream>
	using namespace std;

	class Someting
	{
	public:
		string m_value = "default"

		const string& getValue() const
		{
			cout << "const version" << endl;
			return m_value;
		}

		string& getValue()
		{
			cout << "non-const version" << endl;
			return m_value;
		}
	}

	int main()
	{
		Something something
		something.getValue() = 10;		// 바꿀수 있음 리턴이 레퍼런스임


		const Something something2;
		something2.getValue() = 10;		// 바꿀수 없음 리턴이 컨스트레퍼런스임
		//레퍼런스를 리턴하는것은 똑같으나
		//여기서 주의깊게 살펴봐야 하는것은 멤버함수 오버로딩인데
		//리턴만 가지고는 오버로딩이 안된다고 했었다(지난 강의 참조)
		//리턴타입에 const를 붙이느냐 안붙이느냐에 따라서는 오버로딩이 된다.
		//다른 사람의 코드를 읽기 위해 알아두는 것이 좋다.
		//멤버함수를 const로 만든다면 일반적으로 리턴도 const로 한다.
	}