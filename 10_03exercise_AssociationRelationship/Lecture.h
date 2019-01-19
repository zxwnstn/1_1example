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

	//�ּҰ����� ���� �޾ƿ����� ������!!
	Teacher *teacher;
	std::vector<Student*> students;
	//������ 
	//����Ŭ������ ������� �Ǹ� students�� ������� �ȴ�.
	//������! Student*�� ����Ű�� �ִ� �ּҿ� �ִ��ֵ��� ������ �����ְ� �Ǵ°��̴�.
	//�������� �������� �ٲ��־���Ѵ�. Lecture�� assignteacher��

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
	//	teacher = teacher_input;	// ���� �̺κк��� ������ �����.
	//								// �ֳ��ϸ� Ƽ�Ĵ� �������ε� 
	//								// teacher_input�� �����Ͱ� �ƴ϶� �׷���.
	//}

	void assignTeacher(Teacher* const teacher_input)
	{
		teacher = teacher_input;	//�̷��� �Ķ���͸� �ٲ��ָ�ȴ�. ����
									//registerStudent��
	}

	//void registerStudent(const Student & const student_in)
	//{
	//	students.push_back(student_in);	// �̷��� ���·� Ǫ������ �ϰԵǸ�
	//									// ��������δ� ���� ������ �ְ� �Ǵ°��̴�.
	//	//���ο��� ������� std1�� �ƴϰ� �Ǿ������ ���̴�.
	//	//�׷��ٸ� �̸� ��� �ذ��Ҽ� ������?
	//} //�ּҸ� �������� ������ �ڵ��� �غ���!! lecture�� private��
	//�ٽ� ���ƿԴ�.
	//���⼭�� ���������� stdents�� �������� �迭�ε� ���ڵ��� ����
	//�����Ͱ� �ƴϱ� ������ �����ͷ� �޾��־���Ѵ�. ������

	void registerStudent(Student* const student_in)
	{
		students.push_back(student_in);	// ���� ���������� �Ķ���͸� �����ͷ�
										// �պ��ָ� �ȴ�. study��
	}

	void study()
	{
		std::cout << m_name << " study!" << "\n\n";
	/*	for (auto &e : students)
			e.setIntel(e.getIntel() + 1);*/	// �Ȱ��� ������ ������ �����.

		for (auto & e : students)
			(*e).setIntel((*e).getIntel() + 1); // �̷��� �ٲ�����
		    //e->setIntel(e->getInel() + 1)�� ���������� �̿�
		//�� �̶��� e�� �����ͱ� ������ ���۷����� �޾Ƶ� �ǰ� �ȹ޾Ƶ� �ȴ�.
		//lecture�� ��� �����ε����� (�ٷι�)
	}

	friend std::ostream & operator << (std::ostream &out, const Lecture &lecture)
	{
		//out << "Lecture name: " << lecture.m_name << "\n";
		//for (auto & e : lecture.students)
		//	out << e << "\n";		  // �̷��� �Ǹ� ������ ��ü �ּҸ� ����� ������,

		out << *lecture.teacher << "\n";
		for(auto e : lecture.students)
			out << *e << "\n";		  //���� �̷��� �ٲ����� �ٽ� ��������
		return out;
	}
};