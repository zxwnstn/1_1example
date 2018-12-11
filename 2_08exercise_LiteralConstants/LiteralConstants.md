## 2-8강 리터럴 상수

<br>

###Literal과 캐스팅
변수안에 저장되는 정보, 상수를 literal이라고 한다.

	#include<iostream>
	int main()
	{
		using namespace std;

		float pi = 3.14f;	// f가 없으면 double로 캐스팅인된다. f왜에도 l(long double)이 있따.
		int i = -12345u;	//  u가 붙으면 unsigned로 캐스팅 된다.
							// int의 경우 u 외에 uL , UL, LL 등이 있다.
							// 대부분의 경우 부동소수점 수의 f나 l, int의 u를 넣는 경우가 대부분이다.
							// 그러나 이렇게 표현하는것 보다는, 캐스팅으로 명확하게 보여주는것이 좋다.
		
		return 0;
	}

<br>

### 8진수와 16진수
Decimal	: 0 1 2 3 4 5 6 7 8 9 10
Octal	: 0 1 2 3 4 5 6 7 8 10
Hexa	: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10
1. 숫자앞에 0을 붙이면 8진수가 된다. 
2. 0x를 붙이면 16진수가 된다.
3. 16진수를 사용하는 경우가 꽤 많다.
4. 0b를 붙이면 2진수가 된다.

	#include<iostream>
	int main()
	{
		using namespace std;

		int x = 012;	// 8진수 표기 11
		int y = 0xF		// 16진수 표기 15
		cout << x << y << endl; // 출력은 기본적으로 10진수로 된다.
		x = 1011'1111'1010; 숫자사이에 '를 넣어도 컴파일러가 무시한다.
	
		return 0;
	}

<br>

### 심볼릭 상수	
	#include<iostream>
	int main()
	{
		using namespace std;

		//변수내에서 반복되는 숫자의 사용

		//1. 매직넘버 이용
		int items = 123
		int price = num_items * 10 // 여기서 10을 매직넘버라고 부른다.
								   // 일반적으로 잘 사용하지 않는다(좋지않다).

		//2. 심볼릭 상수의 이용
		const int price_per_item = 10; // const가 붙어 10이라는 literal은 절대 변할 수 없다.
		int num_items = 123;
		int price = num_items * price_per_item;

		return 0;
	}
