## 2-2강 정수형 Integers

<br>

### 크기

영역 Category|형 Type | 최소 크기 | 기타
-------------|--------|---------|------------
문자 character|char|1byte|
정수 integer | Short | 2byte|
<br> | int | 2byte | 대부분 4byte
<br> | long | 4byte | 
<br> | long long | 8byte | c99/c++11 type

>cf)많은 프로그래머 특히 네트워크를 사용하는 프로그래머의 경우, char타입을 최소크기 저장소 개념으로 사용하는 경우가 많다.

<br>

### 저장구조
int i = 1;
0000000 | 0000000 | 00000000 | 00000001 (실제 메모리에 저장되는 i의 형태)<br>
Int 자료형의 경우 총 4byte로 한 숫자를 저장하며, 맨앞의 한 비트는 부호판독(0일시 양수, 1일시 음수)에 사용한다

<br>

###크기 확인을 위한 코드

###### int형 자료들의 크기 확인
	#include<iostream>

	int main()
	{
		using namespace std;
		short     s = 1;
		int		  i = 1;
		long	  l = 1;
		long long ll = 1;

		cout << sizeof(short) << endl;
		cout << sizeof(int) << endl;
		cout << sizeof(long) << endl;
		cout << sizeof(long long) << endl;

		return 0;
	}
short는 4byte크기이므로 16bit이다. 그렇다면 총 2의 16승 가지수 만큼 수를 표현할수있는가?<br>
**아니다**. 맨앞의 한비트는 부호를 표현해야 하므로 사용가능한 비트수는 15개가 되며 또한 0을 포함해야 한다.<br>
즉 표현 가능한 수의 가지수는 2의 15승 빼기 1, 즉 32767개인 것이다.


######  short 범위 확인 코드
	#include<iostream>
	#include<cmath>
	#include<limits>

	int main()
	{
		using namespace std;
		short s = 1;
		cout << std::pow(2, sizeof(short)*8-1)-1 << endl;
		cout << std::numeric_limits<short>::max() << endl;
		cout << std::numeric_limits<short>::min() << endl;
		cout << std::numeric_limits<short>::lowest() << endl;  // lowest와 min의 차이?

		return 0;
	}
1. pow(x , y)함수는 x의 y승을 계산해주는 함수이다.
2. numeric_limits<short>는 자료형의 범위를 출력해 주는 함수이다.

<br>

### Overflow

메모리에 저장한 자료형의 크기가 그 한계치를 넘었을때 발생하는 현상이다. 과연 어떻게 되는지 코드로 확인해 보자.

###### Overflow를 발생시키는 코드
	
	#include<iostream>
	#include<cmath>
	#include<limits>

	int main()
	{
		using namespace std;

		short s = std::numeric_limits<short>::max();
		s = s+1
		cout << s << endl;
		
		s=std::numeric_limits<short>::min();
		s = s-1
		cout << s << endl;

		return 0;
	}
