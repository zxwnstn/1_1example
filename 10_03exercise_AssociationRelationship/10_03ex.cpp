//#include"Lecture.h"
//using namespace std;
//
//int main()
//{
//	Lecture lec1("Introduction to Computer Programming");
//	lec1.assignTeacher(Teacher("prof. Hong"));
//	lec1.registerStudent(Student("Jack Jack", 0));
//	lec1.registerStudent(Student("Dash", 1));
//	lec1.registerStudent(Student("Violet", 2));
//
//	Lecture lec2("computational Thinking");
//	lec2.assignTeacher(Teacher("prof. Good"));
//	lec2.registerStudent(Student("Jack Jack", 0));
//
//	//TODO: implement Aggregation Relatinship
//
//	//test
//	{
//		cout << lec1 << endl;
//		cout << lec2 << endl;
//
//		lec2.study(); // ��������!(������ 1����)
//
//		cout << lec1 << endl;	// lec2�� Jack Jack �� ������ 1�ö����� lec1������ ������ �ʾҴ�.
//		cout << lec2 << endl;	// lec1�� lec2�� Jack Jack�� �ٸ�����ΰ�?
//	}
//}



#include"Lecture.h"
using namespace std;

int main()
{
	Student std1("Jack Jack", 0);
	Student std2("Dash", 1);
	Student std3("Violet", 2);

	Teacher teacher1("Prof. Hong");
	Teacher teacher2("prof. Good");

	//�����迭�� ������ �ֱ�!
	/*Student *std1 = new Student("Jack Jack", 0);
	Student *std2 = new Student("Dash", 1);
	Student *std3 = new Student("Violet", 2);

	Teacher *teacher1 = new Teacher("Prof. Hong");
	Teacher *teacher2 = new Teacher("prof. Good");*/ //���� ������ 

	//Lecture lec1("Introduction to Computer Programming");
	//lec1.assignTeacher(teacher1);
	//lec1.registerStudent(std1);
	//lec1.registerStudent(std2);
	//lec1.registerStudent(std3);

	//Lecture lec2("computational Thinking");
	//lec2.assignTeacher(teacher2);
	//lec2.registerStudent(std1);	// �̷��Ը� �ϸ�??
	//������ �ȿö���ִ�..?
	//������ Lecture����� registerStudent�Լ��� �ִ�.
	
	//�ٽ� ���ƿͼ� ���� ���ڵ��� ���� �����ͷ� �־��־�� �Ѵ�.
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(&teacher1);
	lec1.registerStudent(&std1);
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);

	Lecture lec2("computational Thinking");
	lec2.assignTeacher(&teacher2);
	lec2.registerStudent(&std1);
	//�̷��� �ٲ��ָ� �������� Jack Jack�� ������ lec1������ �����°��� Ȯ���Ҽ� �ִ�.
	//���� ���� std1, std2���� Ŭ�������� �ٸ��������� ����� �ϰų� �����Լ� �ۿ��� ����ϰ� �ʹٸ�
	//�׵��� �������� �Ҵ����ְų�, �����ν��Ͻ��� ���ټ����ִ�. �����Լ� ��������

	//test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		lec2.study(); // ��������!(������ 1����)

		cout << lec1 << endl;
		cout << lec2 << endl;	// lec1�� lec2�� Jack Jack�� �ٸ�����ΰ�?
	}

	/*delete std1;
	delete std2;
	delete std3;
	delete teacher1;
	delete teacher2;*/	//�����Ҵ����� �����ٸ� �� delete���ֱ�

	//�̰����� aggregation���踦 �̿��� Ŭ���� ������ ������ ���Ҵ�.
	//���� ������ ����Ÿ�� �л�ó���Ѵٸ� �̷��� aggregation���¸� ����Ҽ� ������
	//�����Ͱ��� ��ġ ������ �̷�� ���ٸ� �� ����ȭ�� ���־�� �Ѵ�.
}
