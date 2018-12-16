## 조건문 if

### 구조

	#include<iostream>
	using namespace

	int main()
	{
		if(bool type조건)		// true면 실행, false면 실행되지 않음
		{
			실행문
		}
		else					// 위가 false일 경우 실행됨
		{
			실행문
		}
		return 0;
	}

### 기본 예제

	#include<iostream>
	using namespace

	int main()
	{
		int x;
		cin >> x;

		if(x > 10)		
			cout << x << "is greater than 10" << endl;
			//실행문이 1줄일때는 중괄호가 필요없다.
		
		else
		{
			cout << x << "is not greater than 10" << endl;
			cout << "Test 1" << endl;
		}	//실행문이 2줄 이상일때는 중괄호가 반드시 필요

		return 0;
	}
	
<br>

실행문 내에서 선언된 변수의 범위 

	int main()
	{
		int x;
		cin >> x;
		
		if (1)			//항상 실행 시킨다는 의미
			int x = 5;	//중복선언 오류가 나지 않는다. 다만
						//지역 변수 x로서 if문을 벗어나는 순간 사라진다.
		else 
			int x = 6;

	}

<br>
	int main()
	int x;
	cin >> x;

	if (x>10)
		cout << "X is greater than 10" << endl;
	else if (x<10)		// 위의 조건을 제외한상태에서 조건
		cout << "X is less than 10" << endl;
	else
		cout << "x is exactly 10" << endl;

	//보통은 if나 else문안에 if문을 (많이)사용하지 않는다.

<br>
	int main()
	int x;
	cin >> x;

	if (x >= 10)
		if (x <= 20)
			cout << "x is between 10 and 20" << endl;
		else 
	else				//	else의 위치???

	//중괄호로 명확하게 만들자
	if (x >= 10)
	{
		if (x <= 20)
			cout << "x is between 10 and 20" << endl;
		else 
			cout << "..." << endl;
	}

	//또는
	if (x >= 10)
	{
		if (x <= 20)
			cout << "x is between 10 and 20" << endl;
	}
	else 
		cout << "..." << endl;

### 논리연산자의 이용

	int main()
	int x, y;
	cin >> x >> y;

	if (x > 0 && y > 0)
		cout << "both numbers are positive" << endl;
	else if (x > 0 || y > 0)
		cout << "one of the numbers is positive" << endl;
	else
		cout << "Neither number is positive" << endl;

### 프로그램 종료예시

	int main()
	int x;
	cin >> x;

	if ( x > 10)
		cout << "A" << endl;
	else if ( x == -1 )
		return 0;			// main의 return이 나왔으므로, 프로그램 종료
	else if ( x < 0 )
		cout << "B " << endl;
	cout << "Hello " << endl;

### 대입연산자의 오류
	int main()
	{
		int x;
		cin >> x;

		if(x=o)				// 이 조건은 x=0; if(x)와 같다.
			cout << x << endl;

		cout << x << endl;	// 따라서 출력도 0이될 것이다.

		return 0;
	}
