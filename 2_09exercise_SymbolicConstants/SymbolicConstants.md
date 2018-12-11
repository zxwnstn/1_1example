## 2-9강 심볼릭 상수 Constants
<br>

### 예약어 const 

	int main()
	{
	 	using namespace std;

		const double gravity{ 9.8 }; 
		// const를 써서 고정 시켜버림
		// const는  보통 앞에 붙인다. double const 도 가능하나 의미가 달라지는 경우가 있다.
		 
		gravity = 9.7; //이런식으로 심볼릭 상수는 값을 바꿀수 없다.
						// 또한 초기화도 반드시 해주어야 한다. 선언만 하는식으로는 이용할 수 없다.
		 
		return 0;
	}

누군가가 또는 어떠한 이유로, 특정한 변수의 상수를 바꾸지 못하게 하고 싶을때 사용할수있다.

<br>

### 심볼릭 상수의 이용

함수의 parameter

	#include<iostream>

	void printNumber(const int my_number)
	{
		int n = my_number 	 	// 굳이 바꾸고 싶다면 이런식으로 다시 선언하여 바꾼다.
		cout << my_number << endl;
	}
	
	int main()
	{
		printNumber(123);

	}

<br>

런타임 상수

	int main()
	{
		using namespace std;

		const int my_const(123)

		int number;
		cin >> number;

		const int special_number(number); 
	}
1. 심볼릭 상수 special_number 는 number가 입력 받아지는 순간 결정된다(컴파일 타임).
2. 심볼릭 상수 my_const는 컴파일할때 이미 결정되어져 있다(런타임).
3. compile 과 런타임의 차이는 무엇인가?
4. number라는 변수의 상수는 바꿀수 있지만 special_number는 바꿀수 없다.
5. compile타임 전용 예약어가 존재하는데 constexpr이 있다.

<br>

### 메크로 이용??
	#include<iostrea>
	#define 변하지 않는 상수 30
	using namespace std;

	int main()
	{
		int num_item  = 123;

		int price = num_item * (변하지 않는 상수)
		
		return 0;
	}
고전적인 스타일로 메크로를 사용할수있다. 하지만 현재는 메크로를 이런 목적으로 사용하지않는다.
이유는?
1. 디버깅이 힘들어짐 
2. Define은 헤더라서 전역으로 적용된다(범위가 넓음)

<br>

### const 몰아쓰기. Header와 namespace 이용

	헤더파일 MY_CONSTANS.h
	#pragma once
	
	namespace constants
	{
		constexpr double pi(3.141592);
		constexpr double avogadro(6.0221413e23);
		constexpr double moon_gravity( 9.8 / 6.0 )
	}

	cpp파일
	#include<iostream>
	#include"MY_CONSTANS.h"

	using namespace std;
	
	int main()
	{
		double radius
		cin >> radius;

		double circumference = 2.0 * radius * constants::pi;
	}
