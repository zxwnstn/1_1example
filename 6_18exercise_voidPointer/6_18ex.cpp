#include<iostream>
using namespace std;

int main()
{
	char c = '1';
	char *ptr_c = &c;
	cout << &ptr_c << endl;
	cout << ptr_c << endl;
	cout << *ptr_c << endl;
	return 0;

}