#include<iostream>
#include<iomanip>
#include<cmath>

int main()
{
	using namespace std;

	//실수형 자료형의 리터럴에 f가 붙는것과 붙지 않는것의 차이
	float a = 3.141592123124f;
	float b = 3.141592123124;
	float c = 31.4e-1;
	cout << a << " " << b << endl;
	cout << std::setprecision(12);
	cout << a << " " << b << endl;
	cout << sizeof(a) << " " << sizeof(b) << endl;
	cout << c << endl;

	//누적오차 확인
	double d1 = 1.0;
	double d2 = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

	cout << std::setprecision(16);
	cout << d1 << endl;
	cout << d2 << endl;

	//수학적 불능 예제
	float f1 = 1.0f;
	float f2 = 0.0f;
	
	cout << f1 / f2 << endl;
	f1 = -1.0f;
	cout << f1 / f2 << endl;
	f1 = 0.0f;
	cout << f1 / f2 << endl;

	//불능인지 확인하기 
	cout << std::isnan(f1 / f2) << endl;
	f1 = -1.0;
	cout << std::isinf(f1 / f2) << endl;
	
	return 0;
}