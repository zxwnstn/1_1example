## 포인터와 참조의 멤버 선택

###
	#include<iostream>
	using namespace std;

	sturct Person
	{
		int age;
		double weight;
	};

	int main()
	{	
		//일반적인 사용법
		Person person;
		
		person.age = 5;
		person.weight = 30;

		//레퍼런스 사용하기
		Person &ref_person = person;
		ref.age = 15;

		//포인터 이용하기 -> 이용하기
		Person *ptr = &person;
		ptr->age = 30;		//이렇게 쓰길 권장.
		(*ptr).age = 20;

		Person &ref2 = *ptr;
		ref2.age = 45;
		
		cout << &person << endl;
		cout << &ref2 << endl;
	}