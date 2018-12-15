## 영역 제한 열거형(열거형 클래스)

enum의 단점 보완

### enum의 단점

	#include<iostream>
	using namespace std;

	int main()
	{
		enum Color
		{
			RED,
			BLUE,
		};

		enum Fruit
		{
			BANANA,
			APPLE
		};

		Color color = RED;
		Fruit fruit = BANANA;
		if ( color == fruit)
			cout << "Color is fruit?" << endl;	// 과연 같나? 반환된 값은 같다고 할수있따 

	}
<br>

### enum class

	#include<iostream>
	using namespace std;

	int main()
	{
		enum class Color				// 사용 영역을 제한해 버림
		{
			RED,
			BLUE,
		};

		enum class Fruit
		{
			BANANA,
			APPLE
		};

		Color color = Color::RED;
		Fruit fruit = Fruit::BANANA;

		if ( color == fruit )			// 컴파일되지 않음
			cout << "Color is fruit" << endl; 
		if ( static_cast<int>(color) == static_cast<int>(fuit) )
		//의 형태로 할수는 있으나, 우리가 원하는 바는 아니다.

		//같은 enum이라면 비교가 가능한가?
		Color color1 = Color::RED;
		Color color2 = Color::BLUE;
		
		if( color1 == color2 )
			cout << "Same color" << endl;
		else
			cout << "Is not same color" << endl;	//	비교 가능
		
		return 0;
	}	