## 조건부 연산자

<br>

### sizeof

어떤 데이터형의 크기

	include<iostream>

	int main()
	{
		using namespace std;
		float a;
		sizeof(float);		// 데이터 타입을 넣어도 된다. 클래스도 사용가능
		sizeof(a);		// 4byte , 32bit

		return 0;
	}

sizeof 는 함수일까??
1. sizeof는 Operator다! 표준에서 그렇게 정함
2. 변수명을 쓸때는 ()를 안써도 된다.

<br>

###  comma operator

	include<iostream>

	int main()
	{
		using namespace std;
		
		int x = 3;
		int y = 10;
		int z = (++x, ++z);		// 앞에것 계산후 뒤에것이 변수에 대입
						// 반복문 에서 많이 사용한다.

		int a = 1 , b = 10;		// 여기서 , 는 단순 구분기호로 연사자 , 와 다르다
		int z;

		z = a, b ;			// 10을 기대 
		cout << z << endl;		// 1??
						// = 연산자가 , 연산자 보다 우선순위가 높기 때문!
		z = ( a++ , a + b);
		cout << z << endl;		//

		cout << x << " " << y << " " << z << endl;
		return 0;
	}

사용상에 있어 주의 해야될점들이 있다. 경우에 따라선 그냥 풀어쓰는게 더 좋을수도 있다.

<br>

### conditional operator (arithmetic if)

c어 cpp에서는 유일하게3항연산자만이 있다.

	include<iostream>

	int main()
	{
		using namespace std;

		bool onsale = true;
		int price;

		if (onsale)
			price 10;
		else
			price 100;		

		cout << price << endl;
		
		// 이때 price를 const로 쓰고 싶다면??
		// if문 으로는 price를 const 지정할수 없다.
		// 이럴때 3항 연산자가 아주 유용하게 쓰일수 있다.
		
		const int price = (onsale == true) ? 10 : 100 ;
		
		return 0;
	}
조건이 복잡하거나 값이 복잡하다면 쓰지 않는게 좋다.

>숙제

	int main()
	{
	int x = 5;
	cout << ( x % 2 == 0 ) ? "even" : "odd" << endl;
	return0;
	}
위 코드가 오류 나는 이유와 해결방법을 알아보자!
