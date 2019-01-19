#include<iostream>
using namespace std;

class Base
{
public:
	Base() {}

	friend ostream& operator << (ostream &out, const Base &b)
	{
		return b.print(out);
	}

	virtual ostream& print(ostream& out) const
	{
		out << "Base";
		return out;
	}
};

class Derived : public Base
{
public:
	Derived() {}

	virtual ostream& print(ostream &out) const override
	{
		out << "Derived";
		return out;
	}
};

int main()
{
	Base b;
	cout << b << '\n';

	Derived d;
	cout << d << '\n';

	Base &ref_b = d;
	cout << ref_b << '\n';
	
	return 0;

}