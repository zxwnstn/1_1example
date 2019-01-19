#include<iostream>
using namespace std;

class Base
{
public:
	virtual ~Base() // virtual이 매우중요!
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int *m_array;

public:
	Derived(int length)
	{
		m_array = new int[length];
	}
	
	virtual ~Derived() override
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};

int main()
{
	//Derived derived(5);
	
	//다형성 사용
	Derived *derived = new Derived(5);
	Base *base = derived;
	delete base;
	// 이렇게 깔끔하게 base만 delete해주는 것이 경제적이다.
	// 하지만 이렇게 실행을 할경우에 문제가 생기는 것이 있는데
	// 바로 Derived의 소멸자는 실행이 되지 않는다는 것이다.

	//이경우는 간단하게 해결할수 있는데 바로
	//소멸자를 virtual로 바꾸면 되는것이다.

	return 0;
}