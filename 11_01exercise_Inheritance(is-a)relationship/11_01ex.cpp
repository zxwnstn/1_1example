#include<iostream>
#include<string>
using namespace std;
//
//class Mother
//{
//private:
//	int m_i;
//
//public:
//	/*Mother(const int & i_in)
//		: m_i(i_in)
//	{
//		cout << "Mother constructor" << endl;
//	}*/ // 상속 생성자는 용법에 조금 더 신경을 써줘야 한다.
//
//	void setValue(const int & i_in)
//	{
//		m_i = i_in;
//	}
//
//	int getValue()
//	{
//		return m_i;
//	}
//};
//
////Mohter클래스를 상속받는 차일드 클래스 만들기
//class Child : public Mother
//{
//	//텅텅비었다. 그럼에도
//	//기본적으로 Mother클래스의 내용을 전부 사용할수 있다.
//private:
//	double m_d;
//
//public:
//	void setValue(const int & i_in, const double& d_in)
//	{
//		//m_i = i_in; // 이런식으로 구현은 안된다.
//		//왜냐하면 아무리 상속을 받았더라도 mother의 m_i는 private member이기 떄문이다.
//		//쉽게 말하자면 private영역은 자식한테도 허용이 안된다는 뜻이다.
//		//이를 해결하려면 mother의 private를 protected를 쓰면 되는것이다.
//		//그렇다면 private를 유지한채로 하는방법은 없을까?
//		//쓸수있는 방법중 가장 쉬운방법은 mother의 public함수 setValue를 쓰면 되는것이다.
//		Mother::setValue(i_in);
//		m_d = d_in;
//		//밑으로
//	}
//
//	void setValue(const double& d_in)
//	{
//		m_d = d_in;
//	}
//
//	double getValue()
//	{
//		return m_d;
//	}
//	//이름이 같은 함수를 만들었을때 child클래스의 인스턴스는 어떤 함수를 이용할까?
//};
//
////Mother클래스로 부터 아주많은 클래스를 유도해 낼수 있다.derived class라고 함
////부모 클래스는 generallized class 라고도 한다.
////class Daughter : public Mother
////{
////
////};
////
////class Sun : public Mother
////{
////
////};
//
//int main()
//{
//	Mother mother;
//	mother.setValue(1024);
//	cout << mother.getValue() << endl;
//
//	Child child;	
//	child.setValue(128);
//	cout << child.getValue() << endl;	// 똑같이 실행된다.
//	//원래 있었다..
//	//그런데 child의 setValue는 자신의 즉 double에 대한 함수를 호출하려고 한다.
//	//그렇다면 나는 int에 대한 setValue를 호출하고 싶다면 어떻게 할수있을까?
//	//하나의 방법으로 이름을 다르게 하는 것이다.
//	
//	//사실 밖에서 쓸수도 이런식으로 쓸수있다.
//	child.Mother::setValue(123);
//
//
//
//
//	return 0;
//}


//상속생성자 다뤄보기!
class Mother
{
private:
	int m_i;

public:
	/*Mother(const int & i_in)
		: m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}*/ // 주석해제
	Mother(const int & i_in)
		: m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	} // 이렇게 하고 빌드를 해보자 메인으로

	Mother()
	{} // 알아서 디폴트 생성자를 호출하고 자연스럽게 문제가 해결된다.
	//조금더 우아한 방법은 없을까? 위임생성자 같은 모습으로 자식클래스의
	//생성자를 바꿔주는 방법이 있다.


	void setValue(const int & i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

//class Child : public Mother
//{
//private:
//	double m_d;
//
//public:
//	//Child(const int & i_in, const double & d_in)
//	////	: m_i(i_in), m_d(d_in)	// m_i의 빨간줄은 protected로 바꾸던 public으로 바꾸던
//	//							// 되지않을것이다.
//	//							// 그렇다면 접근에 대한 문제는 아닌것이고..
//	//	//대체 왜 대지 않는것인가??
//	//	//Child인스턴스가 생성이 될때 Mohter에 멤버에 대한 메모리가 할당이 되지 않았기 떄문이다
//	//	//이는 쉽게 말해서 메모리 공간이 없는 변수를 초기화 하려는것과 같은 이치이다.
//	//	
//	//	//편하게 하는것은 그냥 위에서 본것과 비슷하다.
//	//{
//	//	Mother::setValue(i_in);
//	//	m_d = d_in;
//	//}
//	//	//조금더 세련된것은 없을까?
//	//	//mother class에서는 생성자를 안쓰는것인가?
//	//	//mother class의 생성자로
//
//	//조금 더욱더 세련된 형태
//	Child(const int & i_in, const double& d_in)
//		: Mother(i_in), m_d(d_in)
//	{}
//
//
//	void setValue(const int & i_in, const double& d_in)
//	{
//		Mother::setValue(i_in);
//		m_d = d_in;
//	}
//
//	void setValue(const double& d_in)
//	{
//		m_d = d_in;
//	}
//
//	double getValue()
//	{
//		return m_d;
//	}
//	
//};
//
//
//int main()
//{
//	Mother mother(1024);
//	mother.setValue(1024);
//	cout << mother.getValue() << endl;
//
//	Child child(1024, 12.0);
//	/*child.setValue(128);
//	cout << child.getValue() << endl;*/
//	cout << child.Mother::getValue() << endl;
//	cout << child.getValue() << endl;
//
//	//하지만 잘 되지않는다. 이유는?
//	//child클래스가 생성이 될때는 motherclass의 (default) 생성자가 같이 호출이 되기 때문이다.
//	//따라서 이러한 문제를 해결하기 위한 단순한 방법으로 
//	// mother클래스에 default생성자 하나를 추가해주면 간단히 해결된다.
//
//
//
//	return 0;
//}

class Card
{
private:
	int mWidth;
	int mHeight;
	string mMatarial;
public:
	Card(const int &width_in = 8, const int & height_in = 8, const string & matarial_in = "normal paper")
		: mWidth(width_in), mHeight(height_in), mMatarial(matarial_in)
	{}

	void print()
	{
		cout << mWidth << " " << mHeight << " " << mMatarial << endl;
	}
};

class Spcard : public Card
{
private:
	string mName;
	int mAttack;
	int mDefence;

public:
	Spcard(const string & name_in, const int & attack_in, const int & defence_in)
		: Card(), mName(name_in), mAttack(attack_in), mDefence(defence_in)
	{}

	void print()
	{
		Card::print();
		cout << mName << " " << mAttack << " " << mDefence << endl;
	}
};

int main()
{
	Spcard tiger("호랑이", 5, 4);
	tiger.print();
	tiger.Card::print();
}