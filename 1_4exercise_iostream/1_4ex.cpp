#include<iostream>

int main()
{
	using namespace std;
	
	//cout 예제
	cout << "I love this lecture" << endl;

	int x = 1024;
	double pi = 3.141592;
	cout << "x is " << x << " pi is " << pi << endl;
	/*이 코드를 실행시켰을 경우 pi가 3.14159가 나오고 2가 사라진 이유?
	-> 스터디 식구들의 친절한 답변 기대합니다.*/

	
	//\t의 쓰임새
	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;

	
	//cin 예제
	int y = 1;
	cout << "Before your input, y was " << y << endl;
	cin >> y;
	cout << "And your input is " << y << endl;
	//만약 여기서 10000....0000 이란 큰 숫자를 인풋하게 되는 경우 어떻게 되는가?
	//결과값이 다르다면 그이유는?

	
	//\a의 이용
	cout << "\a" << endl;

	return 0;
}