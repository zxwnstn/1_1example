#include<iostream>
#include<limits>
int main()
{
	using namespace std;

	std::int16_t i(5);			  // short 타입으로 저장된다.
	std::int8_t myint = 65;		  // char 타입으로 지정된다.

	cout << myint << endl;
	cout << std::numeric_limits<int8_t>::max() << endl;  // char 타입이기 때문에 최대 범위를 제대로 표현하지 못함.
	cout << std::numeric_limits<int16_t>::max() << endl;

	std::int_fast8_t fi(5);           // 8bit 사이즈 중에 가장 빠른 데이터 타입 (char타입으로 저장된다.)
	std::int_least64_t fi_2(5);          // 적어도 64bit를 갖는 데이터 타입 (_int64타입으로 지정된다.)

	cout << sizeof(fi) << " " << sizeof(fi_2) << endl;

	return 0;
}