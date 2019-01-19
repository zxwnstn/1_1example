#include<iostream>
using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

//class Derived : public Base // : public이 상속지정자이다.
//{
//public:
//	Derived()
//	{
//		m_public = 123;
//		m_protected = 1234;
//		//m_private = 123; // 안됨 private는 자식클래스에서도 사용할 수가 없다.
//	}
//};

//class Derived : protected Base
//{
//public:
//	Derived()
//	{
//		m_public = 123;		//됨
//		m_protected = 1234;	//됨
//		//m_private = 123;  //역시 안됨
//	}
//};

class Derived : private Base
{
public:
	Derived()
	{
		m_public = 123;		//됨
		m_protected = 1234;	//되나?
		//m_private = 123;  //역시 안됨
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		Derived::m_public;	// 상속받은 public이 private처럼 되어서 안됨
	}
};

int main()
{
	Base base;
	Derived derived;

	//public으로 상속받은 경우
	derived.m_public = 1024; //됨
	//derived.m_protected = 123;	// 안됨
	//derived.m_private = 123;	// 안됨

	//public으로 상속받은 경우
	//derived.m_public = 1024;	 // 안됨
	//derived.m_protected = 123; // 안됨
	//derived.m_private = 123;	 // 안됨
	
	//private로 상속받은 경우
}