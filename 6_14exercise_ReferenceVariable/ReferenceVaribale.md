## 참조 변수
참조에 대해

###
	#include <iostream>
	using namespace std;

	int main()
	{
		int value = 5;
		int *ptr = nullptr;
		ptr = &value;			//일반적인 포인터 이용

		int &ref = value;
		cout << ref << endl;

		ref = 10;	// *ptr = 10; 을 해준것과 같다.

		cout << value << " " << ref << endl;
		// 참조는 별명처럼 사용 할수 있다.

		cout << &value << endl;	//FF864
		cout << &ref << endl;	//FF864 같은 메모리를 사용한다???
		cout << ptr << endl;	//FF864
		cout << &ptr << endl;	//FF858 포인터 자체의 변수 이므로
		// 자기 자신이 포인터 처럼 주소를 같는 것이 아니다!!

		int value = 5;
		int &ref;			// 참조는 반드시 초기화가 되어야 한다.
		int &ref = &value;	// 맞는 사용법
		int &ref = value;
		int &ref = 123;		// 불가능함

		//const
		int x = 5;
		int &ref = x;

		const int y = 8;
		int &ref = y;		// 불가능
		const int &ref = y;

		//재할당은 되는가?
		int value1 = 5;
		int value2 = 10;
		int &ref1 = value1;

		cout << ref1 << endl;	// 5

		ref1 = value2;

		cout << ref1 << endl;	// 10, 문제 없다.


	}
	
	void doSomething(int n)
	{
		n = 10;
		cout << "in doSomething " << n << endl;
		
	}

	int main()
	{
		int n =5;
		cout << n << endl;

		doSomething(n);

		cout << n << endl;		//5 함수의 n과 메인의 n이 다르다(함수내의 지역변수)
	}

	void doSomething(int &n)
	{
		cout << &n << endl;		//FFB64
		n = 10;
		cout << "in doSomething " << n << endl;		//10
		
	}

	int main()
	{
		int n =5;
		cout << n << endl;		//5
		cout << &n << endl;		//FFB64 주소가 아예 같다.

		doSomething(n);			//아예 그변수 자체가 넘어간다고 봐야한다.

		cout << n << endl;		//10
		// 복사하는게 아예 없기 때문에 퍼포먼스 자체를 줄여준다.

		// 그렇다면 n을 함수로 바꾸고 싶지 않다면?
		// 함수의 입력에 const를 추가해준다.
	}

	//배열 참조하기
	void printElements(int (&arr)[5])	// 엘레멘트의 숫자가 필요하다
	{
		for(int i=0; i<5; i++)
		{
			cout << arr[1] << " ";
		}
		cout << endl;
	}

	int main()
	{
		const int length = 5;
		int arr[length]{1, 2, 3, 4, 5};

		printElements(arr);
		return 0;
	}

	#include<iostream>
	using namespace std;

	struct Something
	{
		int v1;
		float v2;
	};

	struct Other
	{
		Somthing st;
	};

	int main()
	{
		other ot;
		ot.st.v1 = 1.0;		// 스트럭처 안의 스트럭처안의 v1에 접근하기

		int &v1 = ot.st.v1;	// v1을 참조하는 참조변수v1을 만들어 준다.
		v1 = 1;				// 아주 유용
	}
	
	int main()
	{
		int value = 5;
		int *const ptr = &value;
		int &ref = value;
		//기능상 동일
		//ref도 내부적으로는 포인터로 되어있다.
	}