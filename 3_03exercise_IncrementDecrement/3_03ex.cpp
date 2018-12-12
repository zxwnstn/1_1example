#include<iostream>
using namespace std;

int main()
{
	int x = 6, y = 6;
	cout << x << " " << y << endl;
	cout << ++x << " " << --y << endl;
	cout << x << " " << y << endl;
	cout << x++ << " " << y-- << endl;
	cout << x << " " << y << endl;

	//x = ++x; 
	//cout << x << endl;

	return 0;
}