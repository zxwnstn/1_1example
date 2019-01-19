#include<iostream>
#include<string>
using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Der : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "i'm derived" << endl;
	}
};

class Der2 : public Base
{
public:
	string mName = "Dr Martin";
	virtual void print() override
	{
		cout << "Im der2" << endl;
	}
};

int main()
{
	Der d1;
	d1.m_j = 2048;
	Base *base = &d1;
	//다형성은 되지만..
	//d1고유의 함수나 멤버에는 접근을 할수없다.
	//base->m_j; // 설계를 잘해서 이런경우는 없애는게 좋다.
	//base를 다시 Der로 바꿔야 할때가 있다. 

	auto *base_to_d1 = dynamic_cast<Der*>(base);
	cout << base_to_d1->m_j << endl;
	base_to_d1->m_j = 26;
	cout << d1.m_j << endl;
	//의도해서 쓰는 것은 가급적 피하도록 한다..

	
	//주의사항!
	// 혹시 derived2로 동적형변환을 할수있을까??
	auto *base_to_d2 = dynamic_cast<Der2*>(base);
	//다이나믹 캐스트는 형변환에 실패하면 널포인터를 넣어버린다..

	if (base_to_d2 != nullptr)
		cout << base_to_d2->mName << endl;
	else
		cout << "Failed" << endl;

	//static캐스트도 똑같이 사용할수있다.
	// static캐스트는 최대한 될수있는데로 밀어 붙인다.
	// dynamic_cast는 런타임에서 에러체크를 해준다.
}