## 스택과 힙
컴퓨터 운영체제가 cpu와 메모리를 어떻게 사용하는가?

### 개요
프로그램을 실행시키면 운영체제가 필요한 만큼 메모리를 할당해주며 각각
Heap, Stack, Data, BSS, Code 영역으로 분할해준다.

Code 영역에는 명령어들이
BSS(Block stated by symbol) 영역 에는 초기화 되지 않은 전역변수나 스태틱(static) 변수들이
Data 영역에는 초기화된 전역변수나 스태틱 변수들이 지정이 된다.

### Stack영역
	#include<iostream>

	int g_i =0;

	int second(int x)
	{
		return 2 * x;
	}

	int first(int x)
	{
		int y = 3;
		return second(x+y);
	}
	
	int main()						
	{
		using namespace std;

		int a = 1; b;
		b = first(a);
		cout << b << endl;
		
		return 0;
	}
os에서는 main 함수를 실행

g_i가 먼저 메모리에 할당되고 가장 나중에 사라진다.

stack 프레임 안에 main()과 int a, b 누적저장된다(stack)
first함수를 만나게 되면
first()함수와 내부의 파라메터 int x, int y가 누적저장된다.
second 함수를 만나게 되면
second()함수와 내부의 파라메터 int x가 누적 저장된다.

처리될때의 순서를 보게 되면
second()가 리턴되어 메모리 할당영역이 반납 된다.
first()가 리턴되어 메모리 할당영역이 반납 된다.
마지막으로 main이 리턴이되며 모든 할당영역이 반납 되어 진다.

stack의 장점으로는 처리 속도가 빠르다는 점이다.
단점으로는 stack의 할당 크기는 그리 크지 않다는 점이다.
예를 들면
main 안에 int array[10000000]이란 정적 배열을 선언하면
stack의 영역에 저장되어져야 하는데, 배열의 크기가 너무 커져서 stack overflow가 발생된다.

## heap영역

	int main()
	{
		int *ptr = nullptr;
		ptr = new int[1000000];

		delete[] ptr;
		return 0;
	}
os에서 메인을 만나 실행이 된다.

ptr이 먼저 stack의 영역에 쌓이게 된다.
동적 배열을 선언을 만나게 되면 사이즈가 매우큰 heap영역의 어딘가에 그 배열의 크기만큼을 할당해 준다.
단점이 있다면.. heap영역은 차근차근히 쌓이는 것이 아니라서 어디에 할당이 될지 예측할수 없다는 점이다.
delete[] ptr을 만나면 heap과의 주소를 끊는다.

### 조금 다른 사례
	void initArray()
	{
		int *ptr2 = new int[1000];
		// delete [] ptr2;
	}

	int main()
	{
		initArray();
		return 0;
	}

initArray 함수가 호출되어 initArray()가 스택에 쌓인다
그리고 함수 안에서 ptr2에서 첫주소를 갖는다.

함수가 return 되고 ptr2가 반납된다.
그런데 ptr2가 반납이 되었는데 heap영역에 잡힌 어레이는 여전히 남아있게 되는데 이는 
큰 문제로 이어 질수 있다.