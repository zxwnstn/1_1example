### 흐름제어
<br>
### 흐름제어의 종류
중단 - Halt
<br>
점프 - Jump
goto, break, contine
<br>
조건 분기 - Conditional branches
if, switch
<br>
반폭(루프) - Loops
while, do while , for
<br>
예외 처리 - Exceptions
try, catch, throw

### 중단
	#include <iostream>
	#include <cstdlib>
	using namespace std;

	int main()
	{
		cout << "I love you" << endl;		//중간에 끊고 싶다면?

		// 중단에 대한 상황과 이유 주석처리
		
		exit(0);							// 긴급하게 나간다. 프로그램이 끝난다.
											// 디버깅할때 많이 쓴다.

		cout << "I love you too" << endl;

		return 0;
	}