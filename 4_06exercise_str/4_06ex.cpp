#include<iostream>
#include<string>
#include<limits>
#include<typeinfo>
using namespace std;

int main()
{
	//문자열
	char a[] = "abcsdf";
	string b("강준수 타임");
	cout << a << b << endl;

	cout << endl;
	
	//문자열 입력받기
	string c;
	cout << "이름을 입력해 주세요" << endl;
	getline(std::cin, c);
	
	string d;
	cout << "나이를 입력해 주세요" << endl;
	getline(std::cin, d);
	cout << c << " " << d << endl; 
	cout << "나이 자료형은 " << (typeid(d).name()) << endl;
	cout << endl;
	
	//숫자를 int자료형으로 받아보기
	int i;
	cout << "나이를 입력해주세요(int)" << endl;
	cin >> i;
	std::cin.ignore(numeric_limits<streamsize>::max(), '\n');	//std::cin.ignore(32767, '\n');
	cout << i << endl;
	cout << "나이 자료형은" << typeid(i).name() << endl; 
	cout << endl;

	// string 연산
	string hw = c + d;
	hw += " 짱잘생김 ";
	cout << hw << endl;

	return 0;

}
