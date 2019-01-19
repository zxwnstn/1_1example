#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	virtual void print(int x) { cout << "A" << endl; }
	//final을 붙여 버리게 되면
	//붙인 클래스 밑에 상속받은애들은 오버라이딩 할수없다.
};

class B : public A
{
public:
	void print(int x) { cout << "B" << endl; }
	//void print(short x) { cout << "B" << endl; }	// 파라미터가 다르기 때문에
													// 사실상 오버라이딩이 아니다.
	// 임시방편으로 override 지정자를 쓸수있다.
	//void print(short x) override { cout << "B" << endl; }
	//컴파일러가 잡아줌

	//void print(int x) const override { cout << "B" << endl; }
	// 컨스트를 붙인것으로 다르게 인식하기 때문에 컴파일러가 잡아줄수 있다.
	// 만약 override를 안붙여 줬다면 오버라이딩 하지않은
	// 다른 함수로 인식하여 오류가 없을것이다.
};

class C : public B
{
public:
	void print(int x) final { cout << "C" << endl; }
};

class D : public C
{
public:
	void print(int x) { cout << "D" << endl; }
};

int main()
{
	A a;
	B b;
	C c;

	A &ref = b;
}