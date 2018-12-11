#include<iostream>
using namespace std;

int My_pow(const int a, int b)
{
	int i;
	int a1 = 1;
	
	for (i = 0; i < b; i++)
		a1 = a1 * a;
	
	return a1;
}

int main()
{
	int exponent, power;
	cout << "밑과 지수를 적어주세욥 ^0^~" << endl;
	cin >> exponent >> power;
	cout << " 결과는~~... " << My_pow(exponent, power) << "입니당~" << endl;

	return 0;

}