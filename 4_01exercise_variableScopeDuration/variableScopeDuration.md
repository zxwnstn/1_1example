## 4-1강 지역변수의 범위와 지속기간

<br>

### 변수의 범위와 지속기간
1. 범위는 눈으로 볼수 있는 범위라는 측면이 강함
2. 지속기간은 메모리의 지속기간을 의미
3. 범위와 지속기간은 같이 가는 것이나, 뉘앙스 차이가 있음

<br>

	#include<iostream>
	using namespace std;

	int main()
	{
		apple = 5;			// 바로 밑에 apple변수가 선언되어 있음에도
						// 사용할수 없다.

		int apple = 5;			// 이시점 부터 변수 apple을 사용할수 있음
		cout << apple << endl;
		
		if(ture)
		{
			apple = 1;		// 더큰 범위에서 선언된 apple을 사용하는 것이 가능하다.
			cout << apple << endl;
			int apple = 2;		// 새롭지만 이름이 같은 똑같은 apple을 선언하는것이 가능하다.
						// 하지만 범위는 {}내부 까지이다.
						// 가급적 이런식의 naming은 피하는것이 좋다.
		}

		cout << apple << endl; // 1

		return 0;
	}
	
	apple = 5;				// {}벗어난 시점에서 apple변수를 이용할수 없음

>현대의 코딩은 변수의 범위를 최소화 하는 방향을 지향한다.

<br>

### namespace

	namespace work1
	{	 
		int a = 1;
		void doSomthing(int a)
		{
	 		 a += 3 ;
		}
	}

	namespace work2
	{
		int a = 2; 
		void doSomething(int b)
		{
	 		 b += 5;
		}
	}
	//cf) 이름이 같지만 파라미터가 다를 경우 다른 함수로 처리한다. 
	
	//cpp17에서는 이러한 네임스페이스 지정 문법을 지원함
	namepace work1::work11::work111
	{
		int a = 3;
		void doSomething(int c)
			c += 5;
	}
	
	int main()
	{
		using namespace std;

		work1::a;				// ::은 범위지정 연산자
		work1::doSomething();

		work2::a;
		work2::doSomething();

		work1::work11::work111::doSomething();
		//일반적으로 depth를 깊게하느것은 피하는 것이 좋다.

		return 0;
	}
