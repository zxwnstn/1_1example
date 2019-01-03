## 기본적인 포인터 사용법

###
	#include<iostream>
	using namespace std;

	int main()
	{
		int x =5;			//변수는 메모리주소를 갖고있다.

		cout << x << endl;
		cout << &x << endl; // & : address-of operator
		cout << (int)&x << endl;
		//메모리 주소를 담는 변수를 포인터라고 한다.

		// de-reference operator (*)
		//포인터는 레퍼런스의 일부이다.
		//c언어 에서는 레퍼런스와 포인터가 따로있어 혼동되기 쉽다.

		cout << *(&x) << endl; // 5 , 포인터 변수에 담겨있는 주소에 담겨있는 값 
							   // 실제 내부에서는 이런식으로 일이 일어남

		//포인터도 결국 주소를 담는 '변수'다!

		typedef int* pint
		int *ptr_x;
		/*int* ptr_x; // pint 데이터 타입인것 처럼 쓸수있다.
		ptr_x = &x;
		pint ptr_x = &x, ptr_y = &y;*/

		메모리 주소는 데이터 타입과는 상관없는 중립적인 놈이다.
		포인터의 타입을 지정해야 하는 이유는 
		디 레퍼런싱할때 가져오는 자료형을 결정해야 하기때문이다.

		cout << ptr_x << endl;
		cout << *ptr_x << endl;

		왜 포인터를 써야 하는가?
		기본적인 이유는 배열의 이용이다.
		100만개의 자료가 담긴 배열이 있다고 해보자.
		함수로 배열을 쓰게 되면 100만개의 자료를 복사하게 되는것이다.
		이러한 경우를 방지하기 위해서 포인터 즉, 직접적인 주소를 다루는 것이다.

		double d = 1.0;
		int *ptr_x = &x;
		double *ptr_d = &d;		// 직접 메모리 주소를 넣을수는 없다. 막아놓고 있다
								// 하지만 다른 방법을 이용해서 할수는 있다.

		cout << ptr_d << endl;
		cout << *ptr_d << endl;
		사용자 정의 자료형에도 포인터를 이용할수 있다.

		포인터 자체의 크기는 고정이지만, 실제 그주소의 자료의 크기는 다를수있다.
		
		cout << sizeof(x) << endl;
		cout << sizeof(d) << endl;
		cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
		cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
		같은 길이의 주소를 사용한다. 64비트 기반이라면 8바이트가 된다.

		struct Something
		{
			int a, b, c, d; // struct something의 자체 크기는 16바이트다
		};

		int main()
		{
			Somthing ss;
			Somthing *ptr_s;
			cout << sizeof(Something) << endl;	// 16
			cout << sizeof(ptr_s) << endl;		// 4
		}
	}