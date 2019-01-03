## 값에 의한 인수 전달
Passing Arguments by value
(call by value)

###
	#include<iostream>
	using namespace std;

	void doSomething(int y)
	{
		
		cout << "In func " << y << " " << &y << endl;
	}

	int main()
	{
		doSomething(5);			// 내부적으로 int y가 선언이되고 5가 y에 복사가 된다.

		cout << "In main " << x << " " << &x << endl;

		doSomething(x);			// 변수 x가 전달이 되는것이 아니고, x의 값이 전달이 된다.
								// 실제로 메인에서의 변수 x의 주소와 함수안 y의 주소는 서로 다르다.

		doSomething(x+1);		// x+1은 결국 값 자체이다. (rignt value)

		// cbv의 장점으로는 함수내부와 메인의 간섭이 없다는것이다.
	}