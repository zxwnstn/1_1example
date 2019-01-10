#include<iostream>
using namespace std;

class Cents
{
private:
	int mValue;
public:
	Cents(int value_in = 1)
	{
		mValue = value_in;
	}

	int& getCents()
	{
		return mValue;
	}

	friend Cents operator + (const Cents &c1, const Cents &c2)
	{
		return Cents(c1.mValue + c2.mValue);
	}
};





int main()
{
	Cents c1(10), c2(20), c3(10);
	cout << (c1 + Cents(1) + Cents(2)).getCents() << endl;
}