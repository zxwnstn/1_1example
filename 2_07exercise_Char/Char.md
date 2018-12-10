## 2-7강 문자형

컴퓨터 내부에선 전부 숫자로 표현
문자를 어떻게 숫자로 표현하나?
<br>
### 아스키테이블 

1. 어떤 숫자가 어떤 문자와 대응이 되는지 정해놓음
2. 1~32 unprintable
3. 33이상 부터는 문자 혹은 특수기호
<br>
### char의 사용예

	include<iostream>
	include<limits>

	int main()
	{
		using namepace std;

		char c1(65);
		char c2('a') // 한글자는 ''사용
		char c3("Hello, world") // 문자열에는 ""사용
		
		cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl; // int형으로 char를 캐스팅

		//c style 캐스팅
		cout << (char)65 << endl;
		cout << int'A' << endl;

		//cpp style 캐스팅
		cout << char(65) << endl;
		cout << int('A') << endl;

		//static 캐스트
		cout << static_cast<char>(65) << endl;
		cout << static_cast<int>('A') << endl;

		char ch(97);
		cout << ch <<endl;
		cout << static_cast<int>(ch) << endl;
		cout << ch << endl;

		// char type의 범위
		char c1(65);
		cout << sizeof(char) << endl;
		cout << (int)numeric_limits<char>::max() << endl;
		cout << (int)numeric_limits<char>::lowest() << endl;	// 127

		// unsigned char type의 범위
		char c1(65);
		cout << sizeof(unsigned char) << endl;
		cout << (int)numeric_limits<char>::max() << endl;		// 257
		cout << (int)numeric_limits<char>::lowest() << endl; // int로 캐스팅을 하지 않는다면??


		//입력받기
		cin >> c1;
		cout << c1 << " " << static_cast<int>(c1) << endl;
		//한번의 두글자를 받는다면?
		//buffer가 존재해 출력되지 않는 글자도 저장이 된다.

		//\n
		cout << "This is first line \nsecond line"; // \n은 하나의 글자로 처리된다.
		cout << int('\n') << endl; // endl;과 \n의 차이는?

		//\t
		//tab

		//""를 출력하고 싶다면?
		//"앞에 \를 붙인다.

		//\a
		//소리 출력

		//wchar_t 타입
		wchar_t c;
		char32_t c3;	//유니코드의 문자 자료형

		return 0;

	}
<br>

1. char타입의 초기화 방법은 역시 다른 자료형의 초기화 방법과 동일
2. cpp에서는 std::sting을 많이 사용함
3. c, cpp style cats는 강제로 변환하는 느낌이 강하고, static_cast는 컴파일러에게 확인후 변환한다는 느낌이다.
4. \n은 그저 줄바꿈이라는 문자에 불과하며 뒤에 오는 data를 버퍼에 담아 처리함.
5. endl;의 경우 버퍼에 담긴것을 전부 출력하고 줄바꿈을 한다는뜻이다.
6. std::flush는 줄바꿈을 하지않고 버퍼에 있는 것을 전부 출력하라는 뜻이다.
7. 숙제 ASCII표에 들어 있는 여러가지 문자들을 cin / cout으로 출력해 봅시다.
