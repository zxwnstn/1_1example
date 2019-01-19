//자식클래스를 부모클래스에 대입하려면?? 객체잘림
#include<vector>
#include<iostream>
#include<functional>
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
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base & b)
{
	b.print();
}

//void doSomething(Base b) // 이렇게 하는것도 역시 복사 대입과 같다..
//{							// b는 객체 잘림이 일어나게 됨
//	b.print();
//}

int main()
{
	Der d;
	//Base &b = d;// 다형성 발현

	Base b;
	b = d;	// 객체 잘림과 동시에 다형성도 사라짐
	//의도적인 경우 주석을 남겨주는것이 좋다.
	doSomething(d);

	vector<Base> my_vec;
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto & e : my_vec)
		e.print();
	//둘다 I'm Base가 됨..

	//첫번째 도전
	//레퍼런스로 받아보기
	//vector<Base&> my_vec; 실패
	//이유는 벡터는 레퍼런스를 받아 주지않는다.

	//두번째 도전
	//포인터로 받아보기
	vector<Base*> my_vec2;
	my_vec2.push_back(&b);
	my_vec2.push_back(&d);
	//성공!!
	//하지만 난 곧죽어도 포인터를 쓰기 싫다면???
	
	//<functional>의 reference_wrapper이용하기!!
	//vector<
	vector<reference_wrapper<Base>> my_vec3;
	my_vec3.push_back(b);
	my_vec3.push_back(d);
	for (auto & e : my_vec3)
		e.get().print();

}