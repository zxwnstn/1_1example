## 부동소수점 수(Floating Point Numbers)

### 종류

영역 Category| 형 Type| 최소 크기 | 전형적인 크기
----------- | -------------- | ------------- | ----------
부동소수점 Floating point | float | 4byte | 4byte
<br> | double | 8byte | 8byte
<br> | long double | 8byte | 8,12,16 byte

1. double은 float의 2배여서 더블이다. 
2. long double 에서 8byte는 최소규격이다. 최근 컴퓨터 언어에서는 double을 많이 사용하지만, 일반적으로 연산이 가장빠른 타입은 float이다.

<br>

부호 sign | 지수 exponent | 가수 mantissa
-------------|---------|----------------
0 | 000000111| 110000000000000000000000

>가수 부분은 실제 컴퓨터 내에서 작은 수(즉 2의 마이너스승)들의 합으로 표현된다.<br>
+(1+0.75)*2^(7-127) = +1.316554*10^-36

<br>

### 각 유형별 크기

	#include<iostream>
	#include<iomanip>
	#include<limits>


	int main()
	{
		using namespace std;
		float f;
		double d;
		long double ld;
	
		cout << sizeof(f) << endl;
		cout << sizeof(d) << endl;
		cout << sizeof(ld) << endl;	// d와 ld가 같다. 차이는 없는 것일까?
		
		cout << numeric_limits<float>::max() << endl;
		cout << numeric_limits<double>::max() << endl;
		cout << numeric_limits<long double>::max() << endl;

		cout << numeric_limits<float>::min() << endl;
		cout << numeric_limits<double>::min() << endl;
		cout << numeric_limits<long double>::min() << endl;   // 음수 표현은 안되는 것인가?

		cout << numeric_limits<float>::lowest() << endl;
		cout << numeric_limits<double>::lowest() << endl;
		cout << numeric_limits<long double>::lowest() << endl;
		
		return 0;
	}

1. sizeof로 볼때 double과 longdouble이 같은것 같다.
2. numeric_limits<>::min은 표현가능한 가장작은 절대 값을 의미한다.
3. numeric_limits<>::lowest는 표현가능한 가장 작은 값이다.

<br>

### float의 초기화
	#include<iostream>

	int main()
	{
		using namespace std;

		float f(3.141592f); 
		float f(31.4e-1f);

		/*cf) e에의한 숫자 표현
		cout << 3.14 << endl;
		cout << 31.4e-1 << endl; // e는 10을 의미한다. 즉 10의 -1승을 의미
		cout << 31.4e-2 << endl;
		cout << 31.4e1 << endl;
		cout << 31.4e2 << endl;  */
	}

>주의! float형 자료형일때는 숫자뒤(리터럴)에 f를 넣어 주어야 한다. 그렇지 않으면 자료형이 double로 casting 한다.

<br>

### 부동소수점 수를 사용할때 주의사항

###### 1. 오차와 누적오차

	#include<iostream>
	#include<iomanip>  // iostream범위를 조잘할수 있게해주는 전처리기
	
	int main()
	{
		using namespace std;
		cout << std::setprecision(16); // 소수점 범위를 16자리까지 라는 의미의 함수이며, defalt값은 8이다.
		cout << 1.0 / 3.0 << endl;
		
		float f(123456789.0f) // 10 significant digits

		cout << std::setprecision(9);
		cout << f << endl;  // 123456792출력
		
		double d(0.1);

		cout << d <<endl;
		cout << std::setprecision(27)
		cout << d << endl; // 0.10000000000000000001 이진수로 표현할수 있는 가장 가까운수
		
		double d1(1.0)
		double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

		cout << std::setprecision(17);
		cout << d1 << endl;	// 0.1
		cout << d2 << endl;	// 0.999999999999989

		return 0;
	}
1. 컴퓨터 내부에서 작동하는것은 우리의 직관과는 다를수있다.
2. 부동소수점수를 나타낼때, 실제로 컴퓨터가 반환하는 값은 **그수에 가장 가까운 2진수**이다.
3. 이로인해 작지만 오차가 발생한다(당연한 결과이다).
4. 다만, 작은 오차라 할지라도 여러번 사용되어 오차의 누적이 일어나게면, 나중의 결과들에 꽤 크게 작용할 수 있다.

<br>

###### 2. 수학적으로 불가능한 연산

0을 0으로 나누거나, 무한으로 가는경우는 어떤식으로 값이 반환될까.

	int main()
	{
		double zero 0.0;
		double posinf = 5.0 / zero;
		double neinf = -0.5 / zero;
		double nan = zero / zero;

		cout << posinf << endl; // inf
		cout << neinf << endl; // -inf
		cout << nan << endl; // -nan(ind)
		
		return 0;
	}	
1. inf는 infinite 즉 무한이라는 뜻, nan은 not a number 즉 불능이라는뜻.
2. 프로그램을 돌렸을때 의도되지 않은한 이러한 결과가 나오면 안된다! 
3. 혹시 이러한 결과가 반환될지 확인할 수 있어야한다. (하는 방법을 검색 해보자!)

<br>

###### 확인코드
	#include<iostream>
	#include<cmath>

	int main()
	{
		double zero 0.0;
		double posinf = 5.0 / zero;
		double neinf = -0.5 / zero;
		double nan = zero / zero;

		cout << posinf << "" << std::isnan(posinf) << endl;
		cout << neinf << "" << std::isnan(neinf) << endl;
		cout << nan << << "" << std::isnan(nan) << endl;
		cout << 1.0 << "" << std::isnan(1.0) << endl;
	}
1. std::isnan - 출력되는 숫자가 nan 인지확인. 결과는 bool값인 true, false(1, 0)로 반환
2. std::isinf - 출력되는 숫자가 inf 인지
