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

////the body of the pure vitual function ������ ������...
//void Animal::speak() const
//{
//	cout << mName << "???" << endl;
//} ǻ�� ���߾� ��ǿ� �ٵ𿡴� �����ʿ䰡 ���� ����..
// �̴� ��� �ǹ̸� ���°��ϱ�?
// �츮�� �ߴ����� animalŬ������ �⺻Ŭ�����μ� ���� ��� ������ �˼����� �����̴�.
// �ٸ� �ڽĵ鿡�� �׵� ������ �����Ҹ��� ǥ�����ִ� �Լ� speak��
// ����� �ְ� �Ǵµ� �̴� �θ�Ŭ������ animal���� �����Ҹ��� ǥ���Ҽ� �����Ӵ���
// ������� ���ʿ䰡 ����. ���� �̷��� �Լ��� �ְ� ��Ӹ� ���ٻ��̴�.
// �׷��� �Լ��� ǻ�� ����� �Լ���� �ϸ�
// �̰��� �ϳ��� ���ԵǸ� �߻� Ŭ������ �ȴ�.

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

	//�������� ���� 1��
	virtual void speak() const
	{
		cout << mName << "Mooooo" << endl;
	}
};

//int main()
//{
//	//Animal ani("HI");	// ���� �����Լ��� �Ѱ��� ���Ե� Ŭ������ �߻�Ŭ������ �Ѵ�.
//	Cow cow("cow1");	// 1. speak�Լ��� �������̵� �����൵ ������ �ȴ�.
//						// �߻�Ŭ�����κ��� ��ӹ޾ұ� �����̴�.
//
//}
