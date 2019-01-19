#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
	void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	//중간에서 함수의 리턴형식을 바꿔버리면 어떻게 될까?
	//int print() { cout << "C" << endl; return 0; } 오버라이딩 안됨 ㅜㅜ..
	void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	void print() { cout << "D" << endl; }
};
//보통 이렇게 많이 상속을 깊게 받지 않는다.

int main()
{
	A a;
	//a.print();
	B b;
	//b.print();
	C c;
	//c.print();
	D d;
	//d.print();
	//A B C D 정상출력 확인

	//A &ref = b;
	//ref.print();	//역시 A가 출력됨

	//B &ref_b = c;	//역시 B가 출력됨
	//ref_b.print();
	//C &ref_c = d;	//C
	//ref_c.print();


	//A에 virtual을 붙인다면
	A &ref = b;
	ref.print();	//B가 출력됨


	B &ref_b = c;	//C가 출력됨(???)
	ref_b.print();	//B는 버츄얼이 아닌데??
					//가장 상위 클래스의 버츄얼은 밑에 상속받은 함수들에
					//전부 적용이 된다 생각하면 된다.
					//많은 프로그래머가 문법적으로 자식클래스들에는 virtual을
					//안붙여도 문제가 없지만
					//관습적으로 자시클래스들에도 virtual을 붙여
					//이것은 가상함수를 오버라이딩하였다는 표식을 남기는것이다.
					//디버깅시 편함
	
	C &ref_c = d;	//D가 출력됨
	ref_c.print();

	//virtual은 시스템적으로 stack을 이용하는것이 아니다.
	//어떤 표를 보고 찾아가는 시스템이다. 따라서 그렇게 빠르지 않다.
	//만약 반복이 많다면 virtual을 쓰지 않는것이 좋다.
	//필요한 곳에 적절하게 사용하는 것이 중요!

	return 0;

}