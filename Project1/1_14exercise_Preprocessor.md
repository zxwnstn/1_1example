1_14강 전처리기란?
===================

1.전처리기의 작동과 사용
-----------------------------

 전처리기는 빌드가 되기전에 작동이 된다.  주로 운영체제가(사용되는 컴파일러가) _window_ 냐 _linux_ 냐 구분지을때 사용할수 있다.

2.전처리기 #define
-----------------------------
 메크로 라고도 불리우며 지시자는 대문자로 쓰고, 그 뒤에 정의(단 자료형은 구분하지 않는다)를 한다. 역활은 코드내에서 define된 지시자를 만났을때, 그정의로 대체 해준다는 것이다. 요즘에는 #define 보다는 함수를 많이 쓴다.
	
	#include<iostream>
	using namespace std;
	
	#define MY_NUMBER 9 
	#define MAX(a, b) (((a)>(b)) ? (a) : (b))  // 3항 연산자, 만약 a 가 1 + 2 라는 형식이라면 a로 
						   // 지정되는 것이 모호해지기 때문에 보통 ()로 싸준다.	    
	int main()
	{
		cout << MY_NUMBER << endl;  // 9가 출력됨
		cout << MAX(1, 2) << endll // 2가 출력됨
	
		return 0;	
	}


3.전처리기 #include<algorithm>
------------------------------------------
 가장 큰수를 리턴해주는 함수 std::max()를 사용할수 잇게 해준다.
	
	#include<iostream>
	#include<algorithm>
	using namespace std;
	
	int main()
	{
		cout << std::max(1 + 3 , 2) << endl; // 4가 출력됨
		return 0;
	}
	

4.전처리기의 효력범위
--------------------------------------
 전처리기의 효력범위는 전처리기가 적혀진 그 cpp 파일 안에서만이다. 이것을 확인해보기 위한 를 살펴보자.

#### 솔루션1의 preprocessor.cpp
	
	#include<include>
	#define LIKE_APPLE
	void dosomething();
	
	int main()
	{
		dosomething();
		return 0;
	}
#### 솔루션1의 function.cpp
	
	#include<iostream>
	using namespace std;
	
	void dosomething()
	{
	#ifdef LIKE_APPLE                              
		cout << "Apple " << endll;
	#else
		cout << "Orange" << endl;
	#enif
	}

 이경우에 메인함수가 있는 preprocessor.cpp에는 LIKE_APPLE이 define 되어있어 마치 APPLE이 나올것 같으나, 
함수 dosomething이 정의된 function.cpp 에서는 전처리기로 define 되어 있지 않기 때문에 ORANGE가 출력이된다.

> cf) #define LIKE_APPLE 뒤에 아무것도 없기때문에 정의된게 아닌것 처럼 보일수 있는데, #define전처리기를 처리할때는 지시자가 정의로 교체되지 않기 때문에, 정의 된것으로 인정한다.



