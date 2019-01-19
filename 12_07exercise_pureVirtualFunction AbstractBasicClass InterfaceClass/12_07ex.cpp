#include<iostream>
#include<string>
using namespace std;

class Animal
{
protected:
	string mName;

public:
	Animal(string name)
		: mName(name)
	{}

	string getName() { return mName; }

	virtual void speak() const = 0;	// pure virtual function
};

////the body of the pure vitual function 있으나 마나임...
//void Animal::speak() const
//{
//	cout << mName << "???" << endl;
//} 퓨어 버추얼 펑션에 바디에는 만들필요가 전혀 없다..
// 이는 어떠한 의미를 갖는것일까?
// 우리가 했던예제 animal클래스는 기본클래스로서 아직 어떠한 종인지 알수없는 상태이다.
// 다만 자식들에게 그들 각각의 울음소리를 표현해주는 함수 speak를
// 상속해 주게 되는데 이는 부모클래스인 animal에선 울음소리를 표현할수 없을뿐더러
// 사용조차 할필요가 없다. 단지 이러한 함수가 있고 상속만 해줄뿐이다.
// 그러한 함수를 퓨어 버츄얼 함수라고 하며
// 이것이 하나라도 포함되면 추상 클래스가 된다.

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << mName << "Meow" << endl;
	}
};

class Cow : public Animal
{
public:
	Cow(string name)
		: Animal(name)
	{}

	//안했을시 메인 1로
	virtual void speak() const
	{
		cout << mName << "Mooooo" << endl;
	}
};

//int main()
//{
//	//Animal ani("HI");	// 순수 가상함수가 한개라도 포함된 클래스를 추상클래스라 한다.
//	Cow cow("cow1");	// 1. speak함수를 오버라이드 안해줘도 문제가 된다.
//						// 추상클래스로부터 상속받았기 때문이다.
//
//}
