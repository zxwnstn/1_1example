#pragma once
#include<vector>
#include"Student.h"
#include"Teacher.h"

class Lecture
{
private:
	std::string m_name;

	/*Teacher teacher;
	std::vector<Student> students;*/

	//주소값으로 값을 받아오도록 해주자!!
	Teacher *teacher;
	std::vector<Student*> students;
	//주의점 
	//렉쳐클래스가 사라지게 되면 students도 사라지게 된다.
	//하지만! Student*가 가르키고 있던 주소에 있던애들은 여전히 남아있게 되는것이다.
	//이제부터 여기저기 바꿔주어야한다. Lecture의 assignteacher로

public:
	Lecture(const std::string & name_in)
		: m_name(name_in)
	{}

	~Lecture()
	{
		//do Not delete teacher
		//do Not delete students
	}

	//void assignTeacher(const Teacher & const teacher_input)
	//{
	//	teacher = teacher_input;	// 먼저 이부분부터 오류가 생긴다.
	//								// 왜냐하면 티쳐는 포인터인데 
	//								// teacher_input은 포인터가 아니라서 그렇다.
	//}

	void assignTeacher(Teacher* const teacher_input)
	{
		teacher = teacher_input;	//이렇게 파라미터를 바꿔주면된다. 이제
									//registerStudent로
	}

	//void registerStudent(const Student & const student_in)
	//{
	//	students.push_back(student_in);	// 이러한 형태로 푸쉬백을 하게되면
	//									// 결과적으로는 값을 복사해 넣게 되는것이다.
	//	//메인에서 만들엇던 std1이 아니게 되어버리는 것이다.
	//	//그렇다면 이를 어떻게 해결할수 있을까?
	//} //주소를 가져오는 식으로 코딩을 해보자!! lecture의 private로
	//다시 돌아왔다.
	//여기서도 마찬가지로 stdents는 포인터의 배열인데 인자들이 각각
	//포인터가 아니기 때문에 포인터로 받아주어야한다. 밑으로

	void registerStudent(Student* const student_in)
	{
		students.push_back(student_in);	// 역시 마찬가지로 파라미터를 포인터로
										// 손봐주면 된다. study로
	}

	void study()
	{
		std::cout << m_name << " study!" << "\n\n";
	/*	for (auto &e : students)
			e.setIntel(e.getIntel() + 1);*/	// 똑같은 이유로 문제가 생긴다.

		for (auto & e : students)
			(*e).setIntel((*e).getIntel() + 1); // 이렇게 바꿔주자
		    //e->setIntel(e->getInel() + 1)도 마찬가지의 이용
		//단 이때는 e가 포인터기 때문에 레퍼런스로 받아도 되고 안받아도 된다.
		//lecture의 출력 오버로딩으로 (바로밑)
	}

	friend std::ostream & operator << (std::ostream &out, const Lecture &lecture)
	{
		//out << "Lecture name: " << lecture.m_name << "\n";
		//for (auto & e : lecture.students)
		//	out << e << "\n";		  // 이렇게 되면 포인터 자체 주소를 출력해 버린다,

		out << *lecture.teacher << "\n";
		for(auto e : lecture.students)
			out << *e << "\n";		  //역시 이렇게 바꿔주자 다시 메인으로
		return out;
	}
};