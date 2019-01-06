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
	}		//	�ܺο� �ǻ������ ���� �Լ� �̰�, �޴����� �����ϸ� ����!

	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}// ����ǿ��� �̷��� Ŭ���� �Լ��� setters

	const int &getDay()
	{
		return m_day;
	}// �̷��� Ŭ���� �Լ��� getters��� �θ���.

	void copyFrom(const Date &original) // copyFrom�� �������! Ư�������� �ڽ��� Ŭ���� Ÿ���� �޾ƿ´ٴ� ���̴�.
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;		// �׷��ٸ� original.m_something�� private�� 
										// ��Ģ�� �ܺηκ��� ������ �Ұ��� �ѵ� ��� �̷� ���´� ������ ���ϱ�?
	}
};

int main()
{
	Date today;
	today.setDate(8, 4, 2025);		//�䷱������ ���� �Ҽ��ִ�.

	Date copy;

	copy.copyFrom(today);

	cout << today.getDay() << endl;
	cout << copy.getDay() << endl;

}