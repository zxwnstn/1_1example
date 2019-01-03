	## 메모리 동적 할당 new와 delete

	### 동적 할당

		#include<iostream>
		using namespace std;

		int main()
		{
			int arr[10000000];		//4mb 밖에 안되지만 알수 없는 오류가 뜬다.
									//정적으로 들어가는 메모리는 stack에 들어간다.
									//동적으로 들어가는 메모리는 heap에 들어간다.
			int var;
			var = 7;

			//동적 할당 받기
			new int;				// int사이즈 만큼의 메모리를 할당받아 그 메모리 주소를 반환한다.
			int *ptr = new int
			*ptr = 7;

			할당받으며 초기화 하기
			int *ptr = new int(7); or {7};
			cout << ptr << endl;
			cout << *ptr << ednl;

			할당받은 메모리 os에 돌려주기

			delete ptr;				// 프로그램 끝나기전 먼저 걷어가도록 하는 방법이 delete

			cout << "Atfter deletd" << endl;
			cout << ptr << endl;	// 주소는 그대로 남아있음
			cout << *ptr << endl;	// 값은 다른 쓰레기값으로 채워저 있음
			//왜 이렇게 될까?
			//ptr변수에는 주소정보가 남아있기 때문이다.
			//ptr 자체가 이미 변수이기 때문이다.
			
			//이것을 방지하는법
			ptr = nullptr;			// null값을 할당해 준다.
			if( ptr != nullptr)
			{
				cout << ptr << endl;
				cout << *ptr << endl;
			}
			//외에 스마트 ptr도 있다.

			int *ptr = new(std::nothrow) int{7};	//오류를 발생시키지 않고 밀어 붙임

			//실수
			int *ptr2 = ptr;

			delete ptr;
			ptr = nullptr;		// ptr2에 ptr의 정보가 담기기 때문에 따로 풀어줘야 한다.
			ptr2 = nullptr;

			//메모리 누수(memory leak)
			while(true)
			{
				int *ptr = new int;
				cout << ptr << endl;		// 이러한 실수는 일어날 수밖에 없고 매우 위험하다.
											// 작업관리자로 메모리 상황을 본다.
											// 이렇게만 할경우 메모리 사용이 무한히 올라간다.
				delete ptr;
			}

			// new하고 delete은 조금 느리다. os를 경유하기 때문이다.
			// 최적화를 직접할때는 아주 좋을수 있는 기능이다.
		}
