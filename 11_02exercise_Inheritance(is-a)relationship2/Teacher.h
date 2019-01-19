#pragma once
#include"Person.h"

//��� teacher�� student�� �Ѵ� ����̱� ������
//���� �̸��� ���� ��ɵ� ����ϴ�.
class Teacher : public Person
{
public:
	Teacher(const std::string & name_in = "No Name")
		: Person(name_in)
	{}

	void teach()
	{
		std::cout << getName() << "is teaching" << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, Teacher tc)
	{
		//out << tc.m_name << endl;		// m_name�� protected�� public���� �ٲ㼭 
										// �̷��� �ڵ��Ҽ��� ������
		out << tc.getName() << "\n"; //�̷������� �ϴ� �ڵ尡 �� ���É��.
		return out;
	}
};