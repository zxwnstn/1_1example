#include<iostream>

void my_function()
{
	//return도 없고 매개변수도 없다. 단, 동작은 있을수 있다.
}

int main()
{
	//void my_void;  // void 타입으로 변수선언을 할수는 없다. 

	int i = 123;
	float f = 123.456f;

	void *my_void2; // *는 포인터로 주소를 가르킨다.

	my_void2 = (void*)&i;	// &i는 변수i의 주소다.
	my_void2 = (void*)&f;	// 이와 같이 주소값을 void형 자료로 형변환 하는것은 가능하다.

	return 0;
}