#include<iostream>
using namespace std;

class Base
{
private:
	int m_value;
public:
	Base(int Value)
		: m_value(Value)
	{}
};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{}

	void setValue(int value)
	{
		//Base::m_value = value;	// 접근안됨 어떻게 하면 될까?
								// Base의 m_value의 접근지정자를 protected로 바꿔주면 간단히 해결
		//그런데 왜 Derived에서 상속받은 멤버를 바꿔야 하는것일까?
		//디라이브드에서 선언된 멤버와 상호작용을 해야하는경우에는 
		//Base에서 값을 변경하는 것이아니라, Derived에서 값을 변경해야 되기 때문이다.
	}
};