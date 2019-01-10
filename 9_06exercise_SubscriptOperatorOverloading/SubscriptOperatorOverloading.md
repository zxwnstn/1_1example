## 첨자 연산자 오버로딩 하기
어레이나 벡터를 이용할때 []을 이용한다

###
	#include<iostream>
	using namespace estd;

	class IntList
	{
	private:
		int m_list[10]{0, 1, 2, 3, 4, 5, 6, 7, 8 , 9};		
		
	public:
		void setItem(int index, int value)
		{
			m_list[index] = value;
		}

		int getItem(int index)
		{
			return m_list[index];
		}

		//조금더 편하게? (포인터 이용하기)
		int *getList()
		{
			return m_list;
		}
	};

	int main()
	{
		IntList my_list;
		my_list.setItem(3, 1);
		cout << my_list(3) << endl;
		// 상당히 조악한 구현방식(개인적 의견)

		my_list.getList()[3] = 1;
		cout << my_list.getList()[3] << endl;
		// 조금은 나을수도 있지만... 조악한건 매한가지

	}

	첨자 연산자 구현하기
	class IntList
	{
	private:
		int m_list[10]{0, 1, 2, 3, 4, 5, 6, 7, 8 , 9};	

	public:
		int & operator [](const int index)	// 다른 자료형도 들어올수 있다!
		{
			return m_list[index];			// 매우깔끔!
		}
	};
	//왜 operator [] 은 레퍼런스로 리턴이 되어야 하는가?
	잘생각해보자
	밑에 1번같은 경우처럼 값을 변환해야 할때도 있고
	더 정확하게는
	리턴이 되는 이녀석은 항상 주소를 갖고 있는 lvalue여야 한다는 점때문이다.

	int main()
	{
		IntList my_list;
		my_list[3] = 10;	// 1번
		cout << my_list[3] << endl;
	}

	const를 따져보자!
	int main()
	{
		const IntList my_list;
		my_list[3] = 10;	// 값변경은 당연히 불가하다. 하지만
		cout << my_list[3] << endl;	// 읽는것 정도는 할수 있지 않아야 하는가?
		//안타깝지만 그렇게는 안되며 const 버전 operator를 따로만들어야 한다.
	}

	class IntList
	{
	private:
		int m_list[10]{0, 1, 2, 3, 4, 5, 6, 7, 8 , 9};	

	public:
		int & operator [](const int index)	
		{
			return m_list[index];			
		}

		//const 버전의 [] 연산자 오버로딩
		const int & operator [](const int index) const
		{
			return m_list[]
		}
	};

## 가장중요한 부분!
	//assert 사용하기

	#include<iostream>
	#include<cassert>
	using namespace std;

	class IntList
	{
	private:
		int m_list[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
	public:
		int & operator [] (const int index)
		{
			assert(index >= 0);	// assert로 잘못된 입력 차단!
			assert(index < 10);	// 런타임에러 디버깅이 수월해진다.

			return m_list[index];
		}
		//보통 subscript 연산자는 연산량이 매우을때 사용한다.
		//inline으로 밖아놔도 모자른판이다.
		//if문도 쓸수는 있겟지만 연산속도 저해가 매우 심각하다.

		const int & operator [] (const int index) const 
		{
			assert(index >= 0);
			assert(index < 10);

			return m_list[index];
		}
	};

	//주의사항

	int main()
	{
		IntList *list = new IntList;	//포인터로 만들어 쓰는경우?
		// 클래스 IntList의 어레이가 동적배열로 할당이 되는 형태이다.

		list[3]	= 10// 이런식으로 포인터에 바로 인덱스 접근은 불가능 하다..
					// 라기 보다는 의도가 달라진다.
		(*list)[3]	// 디레퍼런싱을 한번 해주고
	}