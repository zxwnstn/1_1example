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
//		lec2.study(); // 수업진행!(지능이 1오름)
//
//		cout << lec1 << endl;	// lec2의 Jack Jack 은 지능이 1올랐지만 lec1에서는 오르지 않았다.
//		cout << lec2 << endl;	// lec1과 lec2의 Jack Jack은 다른사람인가?
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

	//동적배열로 선언해 주기!
	/*Student *std1 = new Student("Jack Jack", 0);
	Student *std2 = new Student("Dash", 1);
	Student *std3 = new Student("Violet", 2);

	Teacher *teacher1 = new Teacher("Prof. Hong");
	Teacher *teacher2 = new Teacher("prof. Good");*/ //메인 끝으로 

	//Lecture lec1("Introduction to Computer Programming");
	//lec1.assignTeacher(teacher1);
	//lec1.registerStudent(std1);
	//lec1.registerStudent(std2);
	//lec1.registerStudent(std3);

	//Lecture lec2("computational Thinking");
	//lec2.assignTeacher(teacher2);
	//lec2.registerStudent(std1);	// 이렇게만 하면??
	//여전히 안올라와있다..?
	//이유는 Lecture헤더의 registerStudent함수에 있다.
	
	//다시 돌아와서 보면 인자들을 이제 포인터로 넣어주어야 한다.
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(&teacher1);
	lec1.registerStudent(&std1);
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);

	Lecture lec2("computational Thinking");
	lec2.assignTeacher(&teacher2);
	lec2.registerStudent(&std1);
	//이렇게 바꿔주면 이제서야 Jack Jack의 지능이 lec1에서도 오르는것을 확인할수 있다.
	//또한 만약 std1, std2등의 클래스들을 다른곳에서도 사용을 하거나 메인함수 밖에서 사용하고 싶다면
	//그들을 동적으로 할당해주거나, 전역인스턴스로 해줄수도있다. 메인함수 앞쪽으로

	//test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		lec2.study(); // 수업진행!(지능이 1오름)

		cout << lec1 << endl;
		cout << lec2 << endl;	// lec1과 lec2의 Jack Jack은 다른사람인가?
	}

	/*delete std1;
	delete std2;
	delete std3;
	delete teacher1;
	delete teacher2;*/	//동적할당으로 잡아줬다면 꼭 delete해주기

	//이것으로 aggregation관계를 이용한 클래스 구현을 진행해 보았다.
	//주의 점으로 데이타를 분산처리한다면 이러한 aggregation형태를 사용할수 없으며
	//데이터간의 수치 변경이 이루어 진다면 꼭 동기화를 해주어야 한다.
}
