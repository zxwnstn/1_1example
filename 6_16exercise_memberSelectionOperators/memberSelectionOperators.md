## �����Ϳ� ������ ��� ����

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
		//�Ϲ����� ����
		Person person;
		
		person.age = 5;
		person.weight = 30;

		//���۷��� ����ϱ�
		Person &ref_person = person;
		ref.age = 15;

		//������ �̿��ϱ� -> �̿��ϱ�
		Person *ptr = &person;
		ptr->age = 30;		//�̷��� ���� ����.
		(*ptr).age = 20;

		Person &ref2 = *ptr;
		ref2.age = 45;
		
		cout << &person << endl;
		cout << &ref2 << endl;
	}