## 3-6강 논리 연산자
수학에서의 사용과 동일
<br>

### 일반적 사용

	#include<iostream>

	int main()
	{
		using namespace stdl;
		
		bool = x , y;
		
		//Logical Not operator !
		// 반대로
		x = true;
		cout << !x << endl;

		//Logical AND operator &&
		// 두개다 true여야 true
		x = true;
		y = false;
		cout << ( x && y ) << endl;

		bool hit = true;
		int health = 10;

		if (hit == true && health < 20)	// 두 관계 연산자는 bool 값으로 반환
		{
			cout << "die" << endl;
		}
		else
			health -= 20;

		//Logical OR ||
		// 둘다 false일때만 false
		x = false;
		y = false;
		cout << x || y << endl;

		

		return 0;
	}
	
<br>

### 틀린 사용례

	
	#include
	using namespace std;

	int main ()
	{
		
		int x = 5;
		int y = 7;
		
		if ( !x == y )								// x != y 가 좋은 사용
		{
			cout << "x does not equal y" << endl;
		}
		else
			cout << "x equals y " << endl;			// 이것이 출력되는 이유는?

		return 0;
	}
가급적 명확하게, 단순하게 표현한다.
복잡한 논리연산자를 이용할 경우 많은 주석과 적절한 ()사용이 필요하다.

<br>

### 주의사항

	#include
	using namespace std;

	int main ()
	{
		int x = 1;
		int y = 2;

		if ( x == 1 && y++ == 2 )
		{
			//do something
		}

		cout << y << endl;		//x가 1일때는 y는 3
								//x가 2일때는 y는 2 (why?)

&&연산자의 경우 **컴퓨터 계산에서는 오른쪽이 false가 되버리면 왼쪽을 따지지 않음**<br>
어차피 한쪽값이 false이므로 한쪽값이 어떻든 결과는 false가 되버리기 때문에 계산을 굳이 하지 않는다.

<br>

### 특수한 사용

	#include
	using namespace std;

	int main ()
	{
		bool x = ture;
		bool y = false;

		//드 모르간의 법칙

		!(x && y) == !x && !y (x)
				  == !x || !y (o)

		// XOR operator

		// false false =  false
		// false ture = true
		// true false = true
		// true ture = false
		// c나 cpp에는 XOR operator는 없다.

		if (x != y)
		{
			//형태로 이용한다.
		}
		
<br>

### ||과 &&이 섞인다면?
	
	#include
	using namespace std;

	int main ()
	{
		bool v1 = true;
		bool v2 = false;
		bool v3 = false;

		bool r1 = v1 || v2 && v3;
		bool r2 = (v1 || v2) && v3;

		cout << r1 << r2 << endl; // 1 0
		
		return 0;

놀랍게도 || 과 &&의 우선순위가 다르고 **&&연산자의 우선순위가 더 높다!!**<br>
그런데 굳이 이사실을 이용해 코딩하는 것보단, 그냥 ()를 써서 명확하게 코딩하는게 더 좋은 코딩방법이다.

<br>

### 숙제
(true && true) || false<br>
(false && ture) || ture<br>
(false && true) || false || true<br>
(14 > 13 || 2 > 1) && (9 > 1)<br>
!(2314123 > 2) || 123123 > 2387<br>
