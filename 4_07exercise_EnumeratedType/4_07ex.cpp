#include<iostream>
using namespace std;

enum Color
{
	COLOR_BLACK,
	COLOR_WHITE,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
};

int main()
{
	//eunm 자료형 쓰기
	Color paint = COLOR_RED;
	cout << paint << endl;

	//enum을 정수형 처럼 쓰기
	int a = paint;
	cout << a << endl;

	//cin 받아보기
	/* Color paint_2;
	   cin >> paint_2; */	//안됨
	
	//우회로 cin 받아보기
	Color paint_2;
	int input_num;
	int i;

	cout << "paint_2의 색상을 정하려 합니다. 번호를 입력해 주세요" << endl;
	cout << "Clor의 번호 테이블 입니다." << endl;
	cout << "Black 0" << endl;
	cout << "White 1" << endl;
	cout << "Red 2" << endl;
	cout << "Blue 3" << endl;
	cout << "Green 4" << endl;
	cin >> input_num;
	
	for (i = 0; i <= 4; i++)
	{
		if (input_num == i)
			paint_2 = static_cast<Color>(i);
	}
	
	cout << paint_2 << endl;

	return 0;

}
