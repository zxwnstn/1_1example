#include<iostream>
using namespace std;

//using을 써서 상속받은 인자의 지정자를 마음대로 바꿔주기

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		: m_i(value)
	{}

	void print()
	{
		cout << "i'm base" << endl;
	}
};

class Derived : public Base
{
private:
	double m_d;
public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i;		// 이렇게 써버리면 m_i가 퍼블릭이 되어버리는 놀라운 현상을 겪게된다.
							// 단 퍼블릭 지정자 밑이여야한다.

private:
	using Base::print;		// 이때는 함수를 호출하는 것이 아니라서 ()를 치면 안된다!!!!!!
	//또는
	void print() = delete;	// 이렇게 아예 딜리트를 해줘버릴수 잇음

};

int main()
{
	Derived derived(7);
	derived.m_i = 1024;
	derived.print();		// 일반적으로 퍼블릭의 부모 함수를 쓸수 있음
							// print함수를 private로 바꾸거나 delete 해버리면 쓸수가 없어진다.
	Base base(5);
	base.print();			//이상없음
}