#pragma once
#include"Person.h"

class Student : public Person
{	
private:
	int m_intel;	//이 멤버 변수는 student의 고유 변수
					//공통사항이 아니라는 뜻.

public:
	Student(const std::string & name_in = "no name", const int & intel_in = 0)
		: Person(name_in), m_intel(intel_in)
	{}

	void setIntel(const int & intel_in)
	{
		m_intel = intel_in;
	}

	int getIntel()
	{
		return m_intel;
	}

	void study()
	{
		std::cout << getName() << "is studying" << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Student & st)
	{
		out << st.getName() << " " << st.m_intel;
		return out;
	}
};
