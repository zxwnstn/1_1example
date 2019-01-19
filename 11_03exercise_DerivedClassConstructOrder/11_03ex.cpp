#include<iostream>
#include<string>
using namespace std;

//class Mother
//{
//public:
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
//public:
//	double m_d;
//
//public:
//	Child()
//		//: Mother()/*사실 이녀석이 숨어있는것이다.*/, m_d(1.0)
//		//: Mother(1024), m_d(1.0)
//		: m_d(1.0), Mother(1024) // 설령 이렇게 바꾸더라도 무조건 Mother컨스트럭터가
//		//먼저 실행이된다.
//	{
//		m_i = 1024; //이런식으로 초기화가 가능하다
//					//m_i가 초기화가 끝나고 이쪽으로 오기때문이다.
//		cout << "Child construction" << endl;
//	}
//};
//
//int main()
//{
//	Child c1;	//mother construction이 먼저 실행됨
//	return 0;	//mother의 내용들이 초기화 되고 child의 내용들이 초기화됨
//}

//깊이가 깊은 상속인 구조라면?

class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
 	}
};

class B : public A
{
public:
	B()
	{
		cout << "B constructor" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C constructor" << endl;
	}
};

int main()
{
	C c; cout << endl;
	B b; cout << endl;
	A a; cout << endl;

	//참고로 destructor는 생성자 순서의 반대로 간다.
	return 0;
}