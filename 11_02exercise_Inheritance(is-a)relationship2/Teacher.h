#pragma once
#include"Person.h"

//사실 teacher와 student는 둘다 사람이기 떄문에
//같이 이름도 같고 기능도 비슷하다.
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
		//out << tc.m_name << endl;		// m_name을 protected나 public으로 바꿔서 
										// 이렇게 코딩할수는 있으나
		out << tc.getName() << "\n"; //이런식으로 하는 코드가 더 세련됬다.
		return out;
	}
};