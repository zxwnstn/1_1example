## 고정 너비 정수 Fixed width Integers

cpp표준에서는 데이터 사이즈는 최소 사이즈만을 규정하고 있다. 이 때문에 플랫폼마다 실제 규현된 사이즈가 다를수도 있는데,
c++11 이상부터는 어느 플랫폼 에서도 똑같은 사이즈를 제공하는 고정 너비 정수를 사용할수 있다.

    #include<iostream>
	
	int main()
	{
	using namespace std;

	std::int16_t i(5);			  // int의 short(2byte) 타입으로 지정된다.
	std::int8_t myint = 65;		  // char(1byte) 타입으로 지정된다.

 	cout << myint << endl;

 	std::int_fast8_t fi(5);           // 8bit 사이즈 중에 가장 빠른 데이터 타입 (char타입으로 저장된다.)
	std::int_least64_t fi(5);          // 적어도 64bit를 갖는 데이터 타입 (_int64타입으로 지정된다.)

	cout << sizeof(fi) << " " << sizeof(fi_2) << endl;

	return 0;
	}

멀티플랫폼 프로그래밍을 많이 한다면 변수의 너비를 통일(고정)시키는것이 프로그램 안정성에 있어서 매우 중요하기 때문에 이러한 고정 너비 정수를 적극 활용할수있다.