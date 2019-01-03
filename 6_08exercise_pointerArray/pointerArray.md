## 포인터와 정적배열

###	
	include <iostream>
	using namespace std;

	int main()
	{
		int array[5]{9, 7, 5, 3, 1};

		cout << array << endl;		// 16진수 주소가 나옴
		cout << array[1] << " " << array[2] << endl; // 7, 5
		cout << &array[0] << endl;

		arr는 사실 배열이 아니라 포인터다.
		5개의 정보를 담고 있는 첫번째 주소를 말하는 것이다.

		cout << *array << endl;		// 9 , 이유는?

		int *ptr = array;
		cout << ptr << endl;		// array의 주소가 16진수로
		cout << *ptr << endl;		// ptr주소에 담긴 인자 9

		char name[] = "jackjack";
		cout << *name << endl;
	}

### 포인터와 정적배열은 완전히 같나?

	#include<iostream>

	int main()
	{
		int array[5] = {9, 7, 5, 3, 1};
		cout << sizeof(array) << endl;	// array의 요소의 개수에 따라 달라진다.

		int *ptr = array;
		cout << sizeof(ptr) << endl;	// 주소값 자체의 크기 즉 4바이트가 나온다.
		cout << *array << endl;

		*array = 100;					//무슨일이 벌어지나?

		return 0;
	}

	//주의점
	void printArray(int array[])		// int *array와 같다.
	{
		cout << sizeof(array) << endl;	// 내부적으로는 이미 포인터다
	}

	int main()
	{
		int array[] = {9, 7, 5, 3, 1};
		printArray(array);
		cout << *array << endl;			//***함수 밖에서도 값이 변해버린다.
										//cpp에서는 굳이 이렇게 안쓰고 레퍼런스를 쓴다.

	}

### 구조체

	#include<iostream>
	using namespace std;

	struct Mystucet
	{
		int array[] = {9, 7, 5, 3, 1};
	};

	void doSomething(Mystruct ms)
	{
		cout << sizeof(ms.array) << endl;
	}


	int main()
	{
		Mystruct ms;
		cout << ms.array[0] << endl;
		
		dosomething(ms);			//20으로 정상적으로 나온다

		return 0;
	}

	struct Mystucet
	{
		int array[] = {9, 7, 5, 3, 1};
	};

	void doSomething(Mystruct *ms)
	{
		cout << sizeof((*ms).array) << endl;
	}


	int main()
	{
		Mystruct ms;
		cout << ms.array[0] << endl;
		
		dosomething(&ms);			//20으로 정상적으로 나온다
									// 구조체 내에 있는 포인터는 함수에 파라미터로 넣어도 
									// 강제 변환 되지 않는다는 소리, 배열 자체가 간다.
		return 0;
	}