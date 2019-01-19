#include<iostream>
using namespace std;

//class Mother
//{
//private:
//	int m_i;
//
//public:
//	Mother(const int & i_in = 0)
//		: m_i(i_in)
//	{
//		cout << "Mother construction" << endl;
//	}
//};
//
//class Child : public Mother
//{
//private:
//	double m_d;
//	int m_temp;
//public:
//	Child()
//		: m_d(1.0), Mother(1024) 
//	{
//		cout << "Child construction" << endl;
//	}
//};
//
//int main()
//{
//	Child c1;
//
//	cout << sizeof(Mother) << endl;		// 4
//	cout << sizeof(Child) << endl;		// 12??? 왜 16??
//	// 패딩이 생기기 때문. sturcture 강의 참조
//	//중요한것은 그것이 아니라, child가 사용되려면 Mother의 멤버들의 사이즈만큼
//	//전부 포함된 메모리 사이즈를 갖춰야 한다는 것이다.
//}

class A
{
public:
	A(int a)
	{
		cout << "A: " << a << endl;
	}
	~A()
	{
		cout << "Desturctor A" << endl;
	}
};

class B : public A
{
public:
	B(int a, double b)
		: A(a)
	{
		cout << "B : " << b << endl;
	}

	~B()
	{
		cout << "Desturctor B" << endl;
	}
};

class C : public B
{
public:
	C(int a, double b, char c)
		: B(a, b)
	{
		cout << "C : " << c << endl;
	}
	~C()
	{
		cout << "Desturctor C" << endl;
	}
};

int main()
{
	C c(1024, 3.14, 'a');
}