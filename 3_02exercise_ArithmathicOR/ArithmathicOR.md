## 3-2강 산술 연산자

<br>

일반적 산수하고는 조금 다른 부분이 있다.

	#include <iostream>
	
	int main()
	{
		using namespace std;

		int x = 1;
		int y = -x;		// -는 x의 부호를 바꿔주는 연산자
					// 만약 - x 라 쓴다면 보는 사람이 헷갈릴수 있으니, 붙이도록 한다.
		
		int z= 1 - -x		// 애매할경우 주석을 달아놓는다.

		// 나머지 연산자
		x = 7
		y = 4
		z = x % y		// 3, z = 1 출력 나머지 연산자 
					// 정수 나누기 정수 이므로 정수가 나온다.
		
		// 나누기 연산자에 하나만 실수인 경우
		cout << x / y << endl;			// 1
		cout << float(x) / y << endl;		// 1.75
		cout << x / float(y) << endl;		// 1.75
		cout << float(x)/float(y) << endl;	// 1.75

		// 음의 정수를 나눌경우
		cout << -5 / 2 << endl;		// -2, cpp11 이상부터 소수부분을 절삭 처리한다.
		// 나머지 연산의 경우
		cout << -5 % 2 << endl; 	// -1, 왼쪽 리터럴의 부호에 따른다.

		// 연산자의 특수한 사용
		z += y; // z = z + y;와 동일
			// +뿐아니라,  - * / % 전부다 사용가능
		

		return 0;
	}
