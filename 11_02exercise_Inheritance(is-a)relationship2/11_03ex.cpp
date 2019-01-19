#include"student.h"
#include"Teacher.h"
using namespace std;

int main()
{
	Student std1("Jack Jack");
	std1.setName("Jack Jack2");
	cout << std1.getName() << endl;

	Teacher teacher1("Dr. H");
	teacher1.setName("Dr. K");
	cout << teacher1.getName() << endl;

	cout << std1 << endl;
	cout << teacher1 << endl;

	std1.doNothing();
	teacher1.doNothing();

	std1.study();		//보통은 기능을 가질것만 갖는다.
	teacher1.teach();

	Person person;
	person.setName("Mr. Incredible");

	person.study();	// 자식클래스의 함수를 갖다 쓸수는 없다..
	person.teach();

}