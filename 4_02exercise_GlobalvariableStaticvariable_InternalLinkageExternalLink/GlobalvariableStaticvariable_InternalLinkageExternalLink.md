## 전역변수, 정적변수, 내부연결, 외부연결

전역변수는 가급적 사용하지 않아야 하고
로컬변수는 적극 이용하여야 한다.
하지만 상황마다, 다를수 있다.

<br>

### 전역 변수 Global variable

	#include
	using namespace std;

	int value 123;

	int main()
	{
		cout << value << endl; //123
		int value = 1;		   // 이 변수는 지역변수로서 {}범위안에 국한된다.
		cout << value << endl; //1

		//전역변수 value를 사용하고 싶다면??
		//영역연산자 ::를 사용하면 된다.
		cout << ::value << endl;

		return 0;
	}
<br>

### 정적 변수 static variable

1.<br>

	#include<iostream>
	using namespace std;

	void doSomething()
	{
		int a = 1;
		a++
		cout << a << endl;
	}

	int main()
	{
		doSomething(); // 2
		doSomething(); // 2

	}

<br>

2. static 변수 이용하기
<Br>

	#include<iostream>
	using namespace std;

	void doSomething()
	{
		static int a = 1;
		a++
		cout << a << endl;
	}

	int main()
	{
		doSomething(); // 2
		doSomething(); // 3
		doSomething(); // 4
		doSomething(); // 5
	}

<br>

3. 전역변수를 사용해서 똑같이 만들기
<br>

	#include<iostream>
	using namespace std;

	int a = 1;
	void doSomething()
	{
		a++
		cout << a << endl;
	}

	int main()
	{
		doSomething(); // 2
		doSomething(); // 3
		doSomething(); // 4
		doSomething(); // 5
	}

1. 무엇이 스태틱(정적)일까??
2. 변수 a가 os로 부터 받은 메모리가 static이다. (메모리 주소가 정적으로 선언된다)
3. static 변수는 초기화가 한번만 이루어지고, 같은 메모리 공간을 사용하게 된다.
4. 1의 경우 a변수는 함수가 한번 실행 될때마다 메모리를 할당받고 사라지고, 
할당받고 사라지고 하게될것이다.
5. 2의 경우 a변수는 메모리를 한번 할당받고, 초기화가 1번만 이루어진다. 
그리고 항상 같은 메모리 주소를 사용하게 된다.
6. 함수가 실행될경우 static a변수는 미리 지정된 a의 값을 그대로 사용한다.
7. 다시말해 static 변수가 초기화가 되지 않으면 쓸수없다.
8. 함수가 몇번 호출되는지 파악될때 사용하면 좋다. (디버깅시)

<br>

### linkage

linking, linker와는 달리
연결 그 자체를 의미하는 늬앙스가 강하다.
local variable 은 다른 파일과 연결시켜줄 필요가없다.
전역변수는 다른 파일에서 사용이 가능하다.

<br>

### external linkage

여러 cpp 파일에서 동시에 사용할수 있는 전역변수 셋팅
<br>
cpp파일 하나 추가해서 코딩해보자

	/* test.cpp */

	#include<iostream>
	using namespace std;

	//extern int a; // 초기화가 안되있으면 메모리가 할당되지 않는다.
	extern int a = 123 ;

	void doSomething()
	{
		cout << "Hello" << endl;
	}

	/* main.cpp */ 		에서 doSomething을 하고 싶다!
	#include<iostream>
	//#include"test.cpp" 	이런시도는 잘 하지 않는다.
	using namepace std;

	extern void doSomething(); 	// 어딘가에 doSomething 함수가 있다.
					// 그것의 정의를 갖다붙여 사용하라 라는 의미
					// extern 이라는 키워드는 생략가능하다.
	extern int a;			// 여기서도 초기화를 해주면, 중복에러가 난다.

	int main()
	{
		doSomething();
		cout << a << endl;

		return 0;
	}
	
<br>

### header의 이용시 주의점

	/* MyConstants.header */
	#pragma once

	namespace constants
	{
		const double pi(3.141592);
		cont double gravity(9.8);
		//...
	}

	/* test.cpp */
	#include<iostream>
	#include"MyConstants.h"

	extern void doSometing()
	{
		using namespace std;

		cout << "In test.cpp" << constants::pi << endl; 
	}
	
	/* main.cpp */
	#include<iostream>
	#include"Myconstants.h"
	using namespace std;

	extern void doSomething();

	int main()
	{
		cout << "In main.cpp " << constants::pi << endl;

		doSomething();
	}
	
문제 없이 실행되는것 같다. 이번엔 pi의 주소를 한번 찍어보자

	/* test.cpp/

	void doSomething()
	{
		cout << "In test.cpp " << constansts::pi << " " << &constants::pi << endl;
	}

	/* main.cpp/

	int main()

	{
		cout << "In main.cpp" << constants::pi << " " << &constants::pi << endl;
		doSomething();
	}

두개의 주소는 다르다..<br>
라는 것은! 이런식으로 contants::pi를 많이 사용하게 되면 그만큼 낭비하게 된다는 것이다.<br>
어떻게 하면 이러한 낭비를 방지 할수있을까.<br>
일단 cpp파일을 하나 더 만든다.<br>
그곳에 namespace constatns의 **정의를한다.**<br>
그리고 헤더에는 선언만 해준다. 단 자료형에는 외부에서도 이용될수 있게 extern을 꼭 붙여준다.<br>
