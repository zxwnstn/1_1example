## 문자열 소개
문자열을 다루는 데이터 타입 std::string
<br>

### std::string

	#include<iostream>
	#include<string>
	using namespace

	int main()
	{
		//기본 char 방식
		cont char my_strs []= "Hello, world"

		//문자열 string
		const string my_hell = "Hello , world";
		//다른 초기화 방법이 모두 적용된다.
		cout << my_hell << endl;
		//사용자 정의 자료형에 가깝다.

		//스트링 입력받아 보기1
		cout << "Your name?: ";
		string name;
		cin >> age

		cout << "Your age ? : ";
		string age
		cin >> age;				// cin의 경우 띄어쓰기 까지 입력을 받는다.
		cout << name << " " << age << end;

		//스트링 입력받아 보기1 수정
		cout << "Your name?: ";
		string name;
		std::getline(std::cin, name);

		cout << "Your age ? : ";
		string age
		std::getline(std::cin, age);		// getline의 경우 enter까지 입력을 받는다.

		cout << name << " " << age << end;
		
		//스트링 입력받아 보기2
		cout << "Your age?: ";
		int age;
		cin >> age;

		cout << "Your name ?: ";
		string name
		std::getline(std::cin, age);		// 잘 받아지지 않음

		cout << name << " " << age << end;
		
		//스트링 입력받아 보기2 수정
		cout << "Your age?: ";
		int age;
		cin >> age;
		std::cin.ignore(32767, '\n');	 	// 32767개까지의 숫자입력은 무시한다.
		/* 매직넘버를 넣지 않는 방법
		#include<limits>헤더를 추가하고
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n')로 바꿀수도 있다. */

		cout << "Your name ?: ";
		string name
		std::getline(std::cin, age);
	}

<br>

### 문자열의 간단한 연산

	#include<iostream>
	#include<string>
	using namespace std;

	int main()
	{
		//문자열 끼리 더하기
		string a("Hello");
		string b("World");

		cout << a + b << endl;
		stign hw = a + b;
		hw += "I'm good";
		
		cout << hw << endl;		// string에 문자열을 더하는 것을 append라고 한다.

		//문자열 길이 측정
		string a("Hello, world")

		cout << a.length() << endl;

		return 0;
	}

