## 암시적 형변환과 명시적 형변환

### typeinfo
	
	#intclude<iostream>
	#include<typeinfo>

	int main()
	{
		using namespace

		int a = 123;
		cout << typeid(a).name() <<endl;		// 자료의 타입을 확인가능!
		
		return 0;
	}

### 암시적 형변환
컴파일러가 알아서 형변환 해버림

	#intclude<iostream>
	#include<typeinfo>
	#include<iomanip>
	int main()
	{
		using namespace

		int a = 123.0;
		cout << typeid(a).name() << endl;		//경고가 뜸
		//컴퓨터가 형변환을 할때는 뭔가 내부적으로 변화가 일어남
		//몇가지 규칙이 있음

		float a = 0.1f;
		double d = a;
		//더큰 자료형으로 형변환 하는 경우
		//a의 입장에선 손해 볼게 없음
		//numeric promotion

		double b = 3
		short s = 2;
		//자료형이 작은것으로 변하거나 영역이 달라질때.
		int i = 30000;
		char c = i; // char는 1바이트이므로 30000을 담을수 없다.
					// 무슨일이 일어날까?
		
		cout << static_cast<int>(c) << endl;	// 48
		//char타입이 표현가능한 최대의 숫자 128도 아니다.

		int i = 2;
		short s = i;		// short는 2를 담을수 있으므로 별 문제가 없다.

		doulbe d = 0.123456789;
		float f = d;

		cout << set::setprecision(12) << f << endl;		// 0.123456791043
														// 정밀도가 부족해서 완전히 표현하지 못함.
		
		float f = 3.14f;
		int i = f;
		cout << i << endl;		// 3이 나옴 (버림)
								// 반올림, 올림 ,버림을 지정 하는 함수는 따로있다.
		
		//unsigned의 형변환
		cout << 5u - 10; << endl; // 4283721797, unsigned의 우선순위가 더 높아 unsined 로 결과값을 하려한다.

		//우선순위
		1. int 가장낮음
		2. unsigned int
		3. unsigned long
		4. unsigned long long
		5. float
		6. double
		7. long double
					
		return 0;

### 명시적 형변환

	#include<iostream>
	#include

	int i = 4.0;
	int i = int(4.0); // cpp스타일
	int i = (int)4.0  // c 스타일
	int i = static_cast<int>(4.0)

### 숙제

numeric promotion과 numeric conversion의 차이?