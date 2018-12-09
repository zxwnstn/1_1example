#include<iostream>
#include<cmath>
#include<limits>

int main()
{
	using namespace std;

	short     s = 1;
	int		  i = 1;
	long	  l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl;
	cout << std::pow(2, sizeof(short) *8 - 1) - 1 << endl; // 제곱 계산을 리턴하는 함수 pow
	cout << std::numeric_limits<short>::max() << endl;	// 자료형의 범위의 최소, 최대를 출력하는 함수 numeric_limits
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;  // lowest와 min의 차이?
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	short s2 = std::numeric_limits<short>::max();
	cout << "최대 s는" << s2 << " s+1은" << s2 + 1 << endl;
	s2 = std::numeric_limits<short>::min();
	cout << "최소 s는" << s2 << " s-1은" << s2 - 1 << endl; // 잘 되지 않음.. 무엇이 잘못되었나?

	return 0;
}
