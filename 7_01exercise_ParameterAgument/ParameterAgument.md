## 매개변수와 인자의 구분

###
	
	#include<iostream>
	using namespace std;

	int foo(int x, int y);

	int foo(int x, int y)	// 변수가 선언 지역변수
	{
		return x+y;
	}

	int main()
	{
		int x = 1, y = 2;
		foo(6,7);			// 값이 필요한것이기 떄문에 이렇게해도 잘작동된다
							// 여기서 6과 7을 argument 또는 실인자(actual parameters)라고 한다.
		
		foo(x, y + 1)		//x에 들어가는 1이 argument가 되고 x는 그 1을 전달 해주는 역활을 한다.
							//그렇다면 x는 argument 1만을 전달하는 것일까?
		return 0;

	}