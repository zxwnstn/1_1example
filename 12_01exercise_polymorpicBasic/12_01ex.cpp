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

	Animal *ptr_animal1 = &cat;		//Animal������ cat�� �ּҰ� ����
	Animal *ptr_animal2 = &dog;

	ptr_animal1->speak();	//???
	ptr_animal2->speak();	//???
	//���̷����� �߻��ϴ� ���ϱ�? ��� ����Ҽ�������?

	Cat cats[] = { Cat("cat1"), Cat("cat2"), Cat("cat3"), Cat("cat4"), Cat("cat5") };
	Dog dogs[] = { Dog("dog1"), Dog("dog2"), Dog("dog3"), Dog("dog4"), Dog("dog5") };

	for (auto &e : cats)
		e.speak();

	for (auto &e : dogs)
		e.speak();

	//... ���� �迭�� ������ �ʹ� ���ٸ� ��� ���ϼ� ������?
	// Ŭ���� �ִϸַ� ���� ��ӹ޾����� �ִϸ� �����͸� ����غ���!

	Animal *my_animals[] = { &cats[0], &cats[1], &cats[2], &cats[3], &cats[4],
							&dogs[0], &dogs[1] };

	for (int i = 0; i < 7; i++)
		my_animals[i]->speak();
	//for�� �ϳ��� ������!
	//�׷��� ���� ???�� ���͹�����...
	//�̸� ��� �ذ��ϳ�? virtual�� ���� �ȴ�!!
	//�и��� �θ�Ŭ������ �����͵��ε�... �ڱ⿪Ȱ�� �߼����ϰԵȴ�.
	//�̸� �������̶�� �Ѵ�.

	return 0;
}