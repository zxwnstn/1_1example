//#include <iostream>
//#include <cstring>
//#include <ctype.h>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <time.h>
//#include <random>
//using namespace std;
//
//class Parent {
//protected:
//	int d = 40;
//private:
//	int a = 10; // private 필드
//public:
//	int b = 20;  // public 필드
//};
//
//class Child : Parent {
//public:
//	int c = 30;  // public 필드
//	void display() {
//		//cout << a << endl;; // 상속받은 private 필드 참조
//		cout << b << endl;    // 상속받은 public 필드 참조
//		cout << c << endl;;    // 자식 클래스에서 선언한 public 필드 참조
//		cout << d << endl;; // 상속받은 protected 필드 참조
//	}
//
//};
//
//
//int main()
//{
//	Child kieop;
//	kieop.display();
//
//}


#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	int mNumber;
	string mName;
public:
	/*Student(const string &ip_name)
		: Student(1, ip_name)	// 위임 생성자
	{}

	Student(const int & ip_number, const string &ip_name)
		: mNumber{ip_number} , mName{ip_name}
	{}*/

	Student(const string &name_in)
	{
		init(1, name_in);

	}

	Student(const int &number_in, const string &name_in)
	{
		init(number_in, name_in);
	}


	void init(const int &ip_number, const string &ip_name)
	{
		mNumber = ip_number;
		mName = ip_name;
	}

	void print()
	{
		cout << mNumber << " " << mName << endl;
	}

};

int main()
{
	Student kiseop("kiseop");
	kiseop.print();

	Student junsoo(2, "junsoo");
	junsoo.print();

	return 0;

}