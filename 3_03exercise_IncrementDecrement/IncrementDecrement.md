## 3-3강 증감연산자

많이쓰고 단순하나, 실수하기 쉬움
<br>

### ++, --의 활용
	#include <iostream>

	int main()
	{
		using namespace std;

		int x = 5;
		int y = ++x;		// x에다가 1을 더한다는 의미
			y = --x;		// x에다가 1을 뺀다는 의미
		int z = x--			//  위와 같다. --나 ++는 앞뒤로 붙일수 있다.
		
		cout << y << endl;

		return 0;
	}


### ++, --의 주의점

	#include<iostream>
	using namespace std;
	
	int main()
	{
		int x = 6 , y = 6;
		cout << x << " " << y << endl;
		// cout << ++x << " " << --y << endl;	// 7 5		①
		cout << x++ << " " << y-- << endl;	// 6 6 ??		②
		cout << x << " " << y << endl;		// 7 5			③


		return 0;
	}

	왜이런 현상이 발생될까??
	①의 경우 x를 cout 스트림에 보내기 전에 ++또는 --가 처리된다.
	하지만 ②의 경우 x를 일단 먼저 cout 스트림에 보내고 그다음에 ++, --를 처리한다.
	따라서 ③에 출력값, 즉 x , y의 r-value도 값이 달라지는 것이다.

연습 - 어떤 결과값이 출력될까?

	int x = 6 , y = 6;
	cout << x << " " << y << endl;
	cout << ++x << " " << --y << endl;
	cout << x << " " << y << endl;	
	cout << x++ << " " << y_-- << endl;
	cout << x << " " << y << endl;

### 부작용?

	#include <iostream>

	int Add(int a, int b)
	{
		return a + b;
	}
	
	int main()
	{
		using namespace std;

		int x = 1;
		int y = 2;
		int v = Add(x, ++x)		// 4 ???
		cout << v << endl;

		x =  x++				//undefined가 뜬다.

			}

컴파일러에 따라 다를수 있다. 정의가 안된다. 이런식의 코딩은 하면안된다.
	
	v = Add(x, ++y)
	cout << v << endl;		// 이 정도는 써도된다. (서로 겹치지 않기 때문에)