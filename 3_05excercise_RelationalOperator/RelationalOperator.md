## 3-5강 관계 연산자
숫자의 대소관계및 대등한지 비교하는 연산자
<br>

### 종류

	#include<iostream>

	int main()
	{
		using namespace std;

		int x, y;
		cin x >> y;
		cout << "Your input values are : " << x <<
			" " << y << endl;

		if ( x == y )
			cout << "equal" << endl;
		if ( x != y )
			cout << "Not equal" << endl;
		if ( x > y )
			cout << "x is greater than y" << endl;
		if ( x < y )
			cout << "x is less than y" << endl;
		if ( x >= y )
			cout << "x is greater than y or equal to y" << endl;
		if ( x <= y )
			cout << "x is less than y or equal to y" << endl;

	}

	<br>

### 부동소수점 끼리의 관계연산자

	#include<iostream>
	#include<cmath>

	int main()
	{
		using namespace std;
		double d1 (100 -  99.99);	// 0.01
		double d2 (10 - 9.99 );		// 0.01

		if (d1 == d2)
			cout << "equal" << endl;
		else
		{
			cout << "Not equal" << endl;
			
			if (d1 > d2) 
				cout << "d1 > d2" << endl;
			else
				cout << "d1 < d2" << endl;			// 출력결과 d1 > d2
		
		//확인
		cout << d1 << endl;
		cout << d2 << endl;						// 2개가 0.01로 같다. ?? 
		
		//얼마나 다른건지 확인
		cout << std::abs( d1 - d2 ) << endl;	//abs는 절대값을 의미
										// 5.32907e-15로 아주작은 숫자
		return 0;
		}
<br>

 두개의 오차가 일정값 이하일때 대략 같다고 하고 싶다면 어떻게 하면 될까?

	#include<iosteam>
	#include<cmath>

	int main()
	{
	
		using namespace std;
		double d1 (100 -  99.99);	
		double d2 (10 - 9.99 );		

		const double epsilon = 1e-10;			// epsilon 을 더 작게 한다면, not equal이 될것이다.

		if (std::abs( d1 - d2 ) < epsilon)
			cout << "approximately equal" << endl;
		else 
			cout << "Not equal" << endl;

		return 0;
	}

1. epsilon을 결정하는것은 오차가 발생하는 상황에 따라 다르다.
2. 부동소수점수가 무한이나. non 이라면 관계연산자가 아예 적용이 되지않는다.
