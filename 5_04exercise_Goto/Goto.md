## goto

지정한 곳으로 가라

<br>

### 사용법 
	#incldue<iostream>
	#include<cmath>
	using namespace std;

	int main()
	{
		double x;

	tryAgain : // label
		cout << "Enter a non-negative number" << endl;
		cin >> x;

		if ( x < 0.0 )
			goto tryAgain;

		cout << sqrt(x) << endl;
	}

<br>

	#incldue<iostream>
	#include<cmath>
	using namespace std;

	int main()
	{
		goto skip;	//논리적으로 말이 안되는 부분
					
		int x = 5;	
	skip:
		
		x += 3;		//x는 goto에 의해 선언이 안되어 있는 상태이다.

		return 0;
