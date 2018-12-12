#include<iostream>

int main()
{
	using namespace std;

	int x = -3;
	int y = 2;
	int z = 4;
	int c = 0;
	c += y;

	cout << x << "," << y << "," << z << "," << c << endl;
	cout << "x % y" << x % y << endl;
	cout << "z % y" << z % y << endl;
	cout << "c" << c << endl;
}