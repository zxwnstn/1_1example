## 열거형
다양한 숫자를 기호적으로 표현하기 위한 자료형

<br>

### 

	#include <iostream>
	#include
	using namespace std;

	int computeDamage(int weapon_id)
	{
		if (weapon_id == 0; )	// sword
		return 1;

		if (weapon_id == 1; )	// hammer
		return 2;
		//이러한 아이디와 옵션을 사람은 일일히 외우기 힘들다.
	}

	enum Color			// 일종의 사용자 정의 자료형이라고 볼수있다.
	{
		COLOR_BLACK = -3,
		COLOR_RED,
		COLOR_BLUE = 5,
		COLOR_GREEN = 5,
		COLOR_SKYBLUE,
		BLUE			// 첫번째 변수에 초기화가 안되었다면, 0부터 순서대로 숫자가 배정된다.
						// 억지로 같은 값을 지정할 수 있다.
						// 가급적 기본할당을 사용하자.
						// 뉘앙스는 매크로와 유사
	};					// **주의!! ;이 꼭 붙어야 한다, 주의!!**

	enum Feeling
	{
		HAPPY,
		JOY,
		TIRED,
		BLUE,			// 만약 서로 달라보이는 그룹의 enum도 전역처럼 작동한다.
						// 따라서 이경우 재정의 하는 것이 되어, 컴파일 되지 않는다.
						// 해결방법은 나중에
	};
	

	int main()
	{
		using namespace std;

		Color paint = COLOR_BLACK;
		Color house(COLOR_BLUE);
		Color appe{COLOR_RED}; // cf) {}를 사용하는 유니폼 이니셜라이제이션은 뉘앙스가 조금 다르다.

		cout << paint << endl;
		cout << house << endl;
		cout << appe << endl;

		//enum 자료를 int 자료형으로 쓸수 있는가?
		int color_id = COLOR_RED;
		cout << colo_id << endl;	// 잘됨
		Color my_color = 3;			// 은 안됨
		Color my_color = static_cast<Color>(3); // 캐스팅은 됨
		
		
		//cin으로 받을수 있나?
		cin >> my_color 안됨
		
		
		//우회는 가능
		int in_number;
		cin >> in_number;

		if (in_number == 0 ) 
			my_color = COLOR_BLACK;
		//
		if (in_number == static_cast<Color>(0))
			my_color = static_cast<Color>(0);		// 이런식으로 할 수는 있다.

		// string으로 입력받기
		#include<string>  헤더 추가

		string str_input;
		std::getline(cin, str_input);

		if (str_input == "COLOR_BLACK")			// 오타의 가능성이 너무 높아서 추천하지 않는다.
			my_color = static_cast<Color>(0);
	}
