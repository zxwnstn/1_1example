## 2-4강 무치형, 보이드, Void

void는 직접 데이터를 갖지 않지만(메모리를 차지하지 않는다) 엄연한 자료형이다.
	
	#include<iostream>

	void my_function()
	{

	}	

	int main()
	{
		void my_void;  // void 타입으로 변수선언을 할수는 없다. 

		int i = 123;
		float f = 123.456f;
		
		void *my_void; // *는 포인터로 주소를 가르킨다.
	
		my_void = (void*)&i;	// &i는 변수i의 주소다.
		my_void = (void*)&f;	// 이와 같이 주소값을 void형 자료로 형변환 하는것은 가능하다.
		
		return 0;
	}
>cf)데이터 크기에 따라 점유 하고있는 메모리 주소의 갯수가 다를수 있는데 각각의 데이터 타입의 첫주소를 표현하는 데이터양은 동일하다.
