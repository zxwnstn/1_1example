## 위임 생성자
다른 클래스의 생성자를 사용하는것?!

###
	#include<iostream>
	#include<string>
	using namespae std;

	class Student
	{
	private:
		static int m_id;
		string m_name;
	public:
		
		Student(const int  &id_in, const string &name_in)
			: m_id(id_in), m_name(name_in)			//이름만 받고 id는 기본값을 지정해
		{}											//클래스 생성시 id만 받게 할수 있는가?

		Stundent(const string &name_in)
			: m_id(0) ,m_id(id_in)					// 이런식으로 사용할순 있지만 매우 안좋은 사용이다.
		{}											// 대입하는곳과 초기화 하는곳은 한군데에만 있을수록 좋다.
		

		void print()
		{
			cout << m_id << " " << m_name << endl;
		}
	};

	int main()
	{
		Student st1(0, "Jack Jack")
		st1.print();

		Student st2
	}
올바른 사용례
	
	class Student
	{
	private:
		static int m_id;
		string m_name;
	public:
		
		Stundent(const string &name_in)
			: Student(0, name_in)				
		{}								//이런식으로 코딩하는것을 위임 생성자라 한다.

		Student(const int  &id_in, const string &name_in)
			: m_id(id_in), m_name(name_in)
		{}											

		//다른 방법 - 초기화 함수를 만들어 준다. 정모형 추천
		Stundent(const string &name_in)
		{
			init(0, name_in)
		}				

		Student(const int  &id_in, const string &name_in)
		{
			init(id_in, name_in)
		}			
		
		void init(const int &id_in, const string &name_in)
		{
			m_id = id_in;
			m_name = name_in
		}
		

		void print()
		{
			cout << m_id << " " << m_name << endl;
		}
	};