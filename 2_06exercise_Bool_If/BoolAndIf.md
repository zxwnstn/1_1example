## 2-6강 Bool과 If

<br>

### 개요
bool은 가질수 있는 값이 true인 1과 false인 0 밖에 없다.

<br>

### 초기화
bool도 다른 자료형과 마찬가지 방법으로 선언과 초기화를 할수있다.

	#include<iostream>

	int main()
	{
		using namespace std;

		bool b1 = true; // copy initialization
		bool b2(false); // direct initialization
		bool b3{true}; // uniform initialization
		b4 = false

		cout << b3 << endl; // 0
		cout << b1 << endl;	// 1

		//true false로 보고싶다면?
		cout << std::boolalpha;
		cout << b3 << endl; // 0
		cout << b1 << endl;

		//not operator
		cout << !true << !b1 << endl;
		cout << !false << !b2 << endl; 

		return 0;
	}
>not operator !는 진리 연산에서 가능하면 안쓰는것이 좋으며, 띄어쓰지 않는다.

<br>

### 논리 연산자

1. and 연산자 &&
2. or 연산자 ||
3. 연산방법은 수학의 진리연산과 같다.
<br>

	#include<iostream>
	
	int(main)
	{
		cout << std::boolalpha;
		cout << true && ture << endl;   // true
		cout << true && false << endl;	// false
		cout << true || false << endl;	// true
		cout << false || false << endl;	// false
		
		return 0;
	}

<br>

### if문
1. 구조는 if (조건) {실행} (단 실행문이 1줄일때는 {}는 안써도된다.)
2. 조건의 bool값에 의해 실행문이 실행 될지 안될지가 결정이된다.
3. else는 if가 아닐때 실행된다.
4. 조건문에서 **0이외의 것들은 모두 true로 처리한다.** 다시말해서 if (5)라하면 true가 되는 것이다.
<br>
	
	#include<iostream>

	int(main)
	{
		if (false)		
			cout << "this is true" << endl;
		
		else
		{
			cout << "this is false" << endl;
		}
		
		return 0;
	}


<br>

### bool자료형의 이용

###### 함수의 리턴
	#include<iostream>

	bool isEqual(int a, int b)
	{
		bool result = ( a == b );
		return result;
	}

	int main()
	{
		cout << std::boolalpha;
		cout << isEqual(1, 1) << endl;
		cout << isEqual(1, 2) << endl;

		return 0;
	}
>cf) bool 자료형을 입력받을때 문자 그대로 true, false로 입력하면 안된다.
0이 아닌 모든 글자에 대해 true로 받아들이기 때문이다.

<br>

### 숙제
+정수 하나를 입력받고 그숫자가 홀수인지 짝수인지 출력하는 프로그램을 만들어 봅시다.

	#include<iostream>
	using namespace std;

	void Is_Equal_Odd(int a)
	{
		if (a % 2 == 0)
			cout << "짝수입니다" << endl;

		else	
			cout << "홀수입니다" << endl;
	}

	int main()
	{
		int a;
		cin >> a;
		Is_Equal_Odd(a);

		return 0;
	}
