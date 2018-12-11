#include<iostream>

int main()
{
	using namespace std;

	int i = 1238u;
	cout << i << endl;

	float f = 3.14159231l;
	long double f_2 = 1123.123;
	cout << sizeof(f) << sizeof(f_2) <<endl; // ??

	const int ci = 3;
	//ci = 2; ºÒ°¡´É
	cout << ci << endl;
	int exi_1 = 3;
	int exi_2 = exi_1 * ci;

	cout << 0x11 << " " << 011 << " " << 0b11 << endl;

	return 0;

}