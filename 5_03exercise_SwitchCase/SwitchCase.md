## switch case
특별한 경우에 if문 보다 훨씬 간결할수 있다.
<br>
### 필요한 경우
	#include<iostream>
	using namespace std;

	enum class Colors
	{
		BLACK,
		WHITE,
		RED,
		GREEN,
		BLUE
	};

	 void printcolorName(Colors color)
	 {
		if(color == Colors::BLACK)
			cout << "Black" << endl;
		if(color == Colors::WHITE)
			cout << "White" << endl;
		...	// 타이핑 하기 매우 귀찮...
		...
	 }

	 int main()
	 {

	 	 return 0;
	 }


### switch case의 이용
	int x;
	cin >> x;

	switch(x)
	{
		case 0:				// case 뒤에는 ;이 아니라 반드시 : 이 붙는다.
		cout << "Zero";
		case 1:
		cout << "One";
		case 2:
		cout << "Two";		// 0입력시 Zero,One,Two 가 출력됨
							// 실행이 된 줄부터 밑에가 다 실행된다.
							// 의도적으로 이런식으로 할 수도 있다.
	}		
	cout << endl;

	switch(x)
	{
		case 0:
			cout << "Zero";
			break;
		case 1:
			cout << "One";
			break;
		case 2:
			cout << "Two";		
			break;			// 따라서 break를 넣어주어야 밑에줄이 실행이 안된다.	
	}

### switch case 적용
	void printcolorName(Colors color)
	{
	switch(color)
	case Colors::BLACK:
		cout << "Black";
		break;
	case Colors::WHITE:
		cout << "White";
		break;
		...
		...
	 }
<br>
	void printcolorName(Colors color))
	{
		switch (static_cast<int>(color))
		{
			case 0:				//
				cout << "Black";
				break;
			case 1:
				cout << "White";
				break;
			case 2:
				cout << "Red";
			...
			...
		}
		cout << endl;
	}

### switch의 주의사항 case내에서 변수이용과 defalt
	#include<iostream>
	using namespace std;

	int main()
	{
		int x;
		cin >> x;

		switch(x)
		{	
		//----------------------------------------------------------
			int a:
			int b =5;		// 스위치의 case문 앞에는 변수 선언은 가능하나, 초기화는 안된다.
			case 0:	
				a = 1		// 값 지정은 케이스문 안에서만 가능하다.
		//----------------------------------------------------------
			case 1:
				int y;
				break;
			case 2:
				y = 2;
				break;
			case 3:
				cout << y << endl; // 이것은 가능함
				break;
		//-----------------------------------------------------------
			case 4:
				int z;
				z = 5;
				break;
			case 5:
				cout << y << endl;	// 이곳에는 쓰레기값이 들어감
				break;	// 이러한 식의 코딩보다는 {}로 싸버리는게 최고다!!
		//------------------------------------------------------------
			defalt:		// case지정이 안된 모든 경우에 대해
				cout << "Undifined input" << endl;
				//defalt밑에 break가 없는것이 일반적이다.
				//break를 굳이 넣는 이유는 실수를 줄이기 위해서다.
		}
	}
