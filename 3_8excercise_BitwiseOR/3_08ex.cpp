#include<iostream>
#include<bitset>
using namespace std;

int main()
{	
	unsigned int a, b;
	a = 5;
	b = 12;

	cout << std::bitset<4>(0b0110 >> 2) << endl;
	cout << "5는 " << std::bitset<4>(a) << "12는 " << std::bitset<4>(b) << endl;
	cout << "5 & 12는 " << std::bitset<4>(a & b) << endl;
	cout << "5 | 12는 " << std::bitset<4>(a | b) << endl;
	cout << "5 ^ 12는 " << std::bitset<4>(a ^ b) << endl;

	return 0;
}