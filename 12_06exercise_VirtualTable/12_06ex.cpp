//가상표

#include<iostream>
using namespace std;

class Base
{
public:
	virtual void fun1() {};
	virtual void fun2() {};
};
//클래스에 virtual로 함수를 선언하면 정적바인딩이 아니라 동적바인딩을 한다.

class Der : public Base
{
public:
	virtual void fun1() {};
};

//class가 생성되면..
//
//class Base
//	*_vptr 이라는 펑션 포인터가 지정이 되지 않은상태로 있다
//virtual fun1()
//virtual fun2()
//
//그리고 virtual펑션 테이블을 찾는다.
//fun1()
//fun2() 테이블에 담긴 함수들
//
//class Der : public Base
//	*vptr
//virtual fun1()은 문제가 없지만
//fun2()는 부모의 테이블에서 함수를 가르키게 된다.

int main()
{
	cout << sizeof(Base) << endl;	// 1
	cout << sizeof(Der) << endl;	// 1

	//vitual로 바꾸면??				// 4
	//포인터가 생겨서				// 4
	//32비트 시스템의 주소값 사이즈에 대한 4바이트가 늘어나게된다!

}
