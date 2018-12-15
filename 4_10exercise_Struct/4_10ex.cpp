#include<iostream>
#include<string>
using namespace std;

struct Person
{
	double height = 160.0;
	float  weight = 60.0f;
	int age = 1;
	string name = "user_name_x";

	void print()
	{
		cout << height << ", " << weight << ", " << age << ", " << name << endl;
	}
};

struct Family
{
	Person me{ 168.0, 60.0, 28, "junsooKang" };
	Person Dad{ 165.0, 70.0, 60, "hyungooKang" };
	Person Mom{ 168.0, 60.0, 58, "kyungmanJang" };

	void average_height()
	{
		double x = (me.height + Dad.height + Mom.height) / 3;
		cout << x << endl;
	}
	void average_weight()
	{
		float x = (me.weight + Dad.weight + Mom.weight) / 3;
		cout << x << endl;
	}
	void average_age()
	{
		int x = (me.age + Dad.age + Mom.age) / 3;
		cout << x << endl;
	}
};

Person GetMe(Person ps)
{
	ps.height;
	ps.weight;
	ps.age;
	ps.name;

	return ps;
}

int main()
{
	Person y;
	y.print();

	Person x;
	x = GetMe(x);
	x.print();

	Person kiseop{ 178.0, 75.0, 28, "kiseopKim" };
	kiseop.print();

	Family JoonsooFamily;
	JoonsooFamily.me.print();
	JoonsooFamily.Dad.print();
	JoonsooFamily.Mom.print();
	JoonsooFamily.average_height();
	JoonsooFamily.average_weight();
	JoonsooFamily.average_age();

	cout << sizeof(Person) << endl;
	cout << sizeof(Family) << endl;
	
	cout << endl;
	cout << "x패밀리의 데이터입니다." << endl;
	Person x1man, x2man, x3man;

	x1man.print();
	x2man.print();
	x3man.print();

	Family x_familly{ x1man,  x2man, x3man };
	x_familly.average_age();	//왜 1?

	return 0;

}