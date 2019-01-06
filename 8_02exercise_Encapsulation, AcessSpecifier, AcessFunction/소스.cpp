#include <iostream>
using namespace std;

class Date
{
private:
	int m_month;
	int m_day;
	int m_year;

public:
	void setDate(const int &month_input, const int& day_input, const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}		//	외부와 의사소통을 위한 함수 이고, 메니져라 생각하면 좋다!

	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}// 영어권에서 이러한 클래스 함수를 setters

	const int &getDay()
	{
		return m_day;
	}// 이러한 클래스 함수를 getters라고 부른다.

	void copyFrom(const Date &original) // copyFrom을 만들었다! 특이한점은 자신의 클래스 타입을 받아온다는 것이다.
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;		// 그렇다면 original.m_something은 private로 
										// 원칙상 외부로부터 접근이 불가능 한데 어떻게 이런 형태는 가능한 것일까?
	}
};

int main()
{
	Date today;
	today.setDate(8, 4, 2025);		//요런식으로 정리 할수있다.

	Date copy;

	copy.copyFrom(today);

	cout << today.getDay() << endl;
	cout << copy.getDay() << endl;

}