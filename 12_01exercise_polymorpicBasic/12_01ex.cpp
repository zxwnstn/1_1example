#include<iostream>
#include<string>
using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(string name)
		: m_name(name)
	{}

	string getName() { return m_name; }

	virtual void speak() const
	{
		cout << m_name << "???" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << "Meow" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << "Woof" << endl;
	}
};

int main()
{
	Animal animal("my animal");
	Cat cat("my cat");
	Dog dog("my dog");

	animal.speak();			//???
	cat.speak();			//Meow
	dog.speak();			//Woof

	Animal *ptr_animal1 = &cat;		//Animal포인터 cat의 주소값 지정
	Animal *ptr_animal2 = &dog;

	ptr_animal1->speak();	//???
	ptr_animal2->speak();	//???
	//왜이런일이 발생하는 것일까? 어떻게 사용할수있을까?

	Cat cats[] = { Cat("cat1"), Cat("cat2"), Cat("cat3"), Cat("cat4"), Cat("cat5") };
	Dog dogs[] = { Dog("dog1"), Dog("dog2"), Dog("dog3"), Dog("dog4"), Dog("dog5") };

	for (auto &e : cats)
		e.speak();

	for (auto &e : dogs)
		e.speak();

	//... 만약 배열의 종류가 너무 많다면 어떻게 줄일수 있을까?
	// 클래스 애니멀로 부터 상속받았으니 애니멀 포인터를 사용해보자!

	Animal *my_animals[] = { &cats[0], &cats[1], &cats[2], &cats[3], &cats[4],
							&dogs[0], &dogs[1] };

	for (int i = 0; i < 7; i++)
		my_animals[i]->speak();
	//for문 하나로 묶었다!
	//그런데 전부 ???로 나와버린다...
	//이를 어떻게 해결하나? virtual을 쓰면 된다!!
	//분명히 부모클래스의 포인터들인데... 자기역활을 잘수행하게된다.
	//이를 다형성이라고 한다.

	return 0;
}