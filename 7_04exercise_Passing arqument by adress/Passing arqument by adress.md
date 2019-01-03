## 주소에 의한 인수 전달

###

	#include<iostream>
	using namespace std;

	void foo(int *ptr)									//포인터도 앞선강의와 마찬가지로 리턴형태로 쓸수있다.
	{
		cout << *ptr << " " << ptr << &ptr << endl;		// 포인터는 함수내변한 인자의 값이 밖에 영향을 미친다.
	}

	void foo(const int *ptr, int *arr, int lenth)
	{
		int x =1;
		ptr = &x;				// const를 걸어놓은거 같은데 ptr의 할당된 주소값을 바꿀수있다??
								// 이유는 앞강의 참조, 이를 막으려면 const int* const ptr 이렇게 써야한다.
	}							// 하지만 굳이 안쓰는 이유는 ptr 주소가 가르키는 값을 이용하기 위한 사용이기 때문이다.

	int main()
	{
		int value =5;
		cout << value << " " << &value << endl;

		int *ptr = &value;

		cout << &ptr << endl;		// 요놈은 함수에서 다르다

		foo(&value);				// 포인터 변수 자체는 복사되기 때문이다.
		foo(ptr);					// 포인터도 변수다
		foo(5);						// 불가능

 	}