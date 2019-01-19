#pragma once
#include<iostream>
#include<string>

class Student
{
private:
	std::string m_name;
	int m_intel;	// 지능
	//TOOD: 여러 정보멤버 추가 바람..
	
public:
	Student(const std::string &name_in = "No name", const int &intel_in = 0)
		: m_name(name_in), m_intel(intel_in)
	{}

	void setName(const std::string & name_in)
	{
		m_name = name_in;
	}

	void setIntel(const int & Intel_in)
	{
		m_intel = Intel_in;
	}

	int getIntel()
	{
		return m_intel;
	}

	friend std::ostream& operator << (std::ostream& out, const Student &student)
	{
		out << student.m_name << " " << student.m_intel;
		return out;
	}
};