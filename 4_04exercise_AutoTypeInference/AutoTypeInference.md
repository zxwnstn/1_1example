## 4-04 Auto키워드와 자료형 추론

<br>

### auto의 용례

	#include<iostream>
	using namespace std;

	int Add(int a, int b)	// 심지어 함수의 리턴 자료형에도 auto 사용가능
	auto Add (int a, int b)	// parameter는 auto로 안됨
	{						// templete은 사용가능 - 쓰기 어려움
		return a+b;
	}
	//트레일링 리턴타입
	auto add_1(int x, int y) -> int;
	auto add_2(int x, int y) -> doube;	//직관적으로 읽기 편해짐

	int main()
	{
	int a = 123;		// a는 123이므로 interger형일 것이 뻔함, 컴파일러가 추론할수 있음
	auto a = 123;		// auto자료형 으로 교체가능
						// 초기화 하지않으면 auto자료형을 쓸수없다.(당연)
	
	auto a = 123;		// 정수형 자료형
	auto b = 123.0;		// 실수형 자료형
	auto c = a + b;		// 실수형 자료형이 됨
	auto d = add(1, 2)	// 함수의 리턴값도 auto형 지정가능함 
	
	return 0;
	}