#include<iostream>
#include<bitset>
using namespace std;

void main()
{
	
	unsigned int my_pixel_color;
	cout << "rgb컬러를 16진수로 입력해 주세요 ex. 0xFFFFFF" << endl;
	cin >> my_pixel_color;											// 16진수로 받는것이 불가
	cout << bitset<24>(my_pixel_color) << endl;

	/*임의의 rgb 색상 선정
	unsigned int my_pixel_color = 0xDAA520;
	cout << "my_pixel_color is " << bitset<24>(my_pixel_color) << ", " << (int)my_pixel_color << endl; //2진수와 10진수로 보기
	cout << endl;*/

	//마스크 생성
	cout << "각 색상의 마스크를 출력합니다" << endl;
	unsigned int blue_mask = 0x0000FF;
	cout << "블루마스크 "  << bitset<24>(blue_mask) <<endl;
	unsigned int green_mask = 0x00FF00;
	cout << "그린마스크 " << bitset<24>(green_mask) << endl;
	unsigned int red_mask = 0xFF0000;
	cout << "레드마스크 " << bitset<24>(red_mask) << endl;
	cout << endl;

	// &연산과 >>연산을 통해 원하는 수 추출하기
	cout << "마스크로 각각의 컬러 숫자를 걸러냅니다." << endl;
	unsigned int blue = my_pixel_color & blue_mask;
	cout << "블루추출 " << bitset<24>(blue) << endl;
	unsigned int green = (my_pixel_color & green_mask);
	cout << "그린추출 " << bitset<24>(green) << endl;
	unsigned int red = (my_pixel_color & red_mask);
	cout << "레드추출 " << bitset<24>(red) << endl;

	//10 진수로 변환
	cout << "10진수로 변환합니다!" << endl;
	cout << bitset<8>(blue) << "\t 블루는" <<blue << endl;
	cout << bitset<8>(green >> 8) << "\t 그린은" << (green >> 8) << endl;
	cout << bitset<8>(red >> 16) << "\t 레드는" << (red >> 16) << endl;

}	