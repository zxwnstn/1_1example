#include<iostream>
using namespace std;

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
		cout << "I'm base" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Base &b)
	{
		out << "This is base output" << endl;
		return out;
	}

};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value, int value2 = 1.0)
		: Base(value), m_d(value2)
	{}

	void print()
	{
		Base::print();	// Base의 print 함수가 실행되고 Derived의 print함수가 실행됨
		print(); // 이경우에는 무한 재귀가 실행된다. Derived의 print함수가 계속 호출됨
		cout << "I'm derived" << endl;
	}//그런데 이름을 굳이 중복시켜 오버라이딩 하는 이유는 뭘까??
	//굳이 써야하는 이유가 잇다. 다형성이란 매우 중요한 성질때문!!! 다음시간에


	friend std::ostream& operator << (std::ostream& out, const Derived &d)
	{
		cout << static_cast<Base>(d);  //static_cast가 될까??
									   //된다 이유는 부모클래스가 사이즈가 더 작기때문
									   //정보가 짤려도 부모클래스의 내용은 살아잇게된다.
		out << "This is derived output" << endl;
		return out;
	}


};

int main()
{
	Base base(5);
	//base.print();

	Derived derived(5);
	//derived.print();		// Base의 print함수가 호출됨

	cout << base;
	cout << derived;


	const int a = 1;
	static_cast<double> (a);

}
